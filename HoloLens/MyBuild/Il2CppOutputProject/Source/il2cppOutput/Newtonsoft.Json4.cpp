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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_tA0A5F3A980ED91AABDF9AAD9A666A7C378114447;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t078F26909D23EC8BDBDBCF1BD65215B1A2C9E6A3;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_tCDF9360B5E91755190C449B0445E441EF50D922A;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String>
struct Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_tA4A5FD4D9FC29DB12C95C158B953AC9C24B84CC1;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t7D30352C78352695FA12AEA57C26635DF9400618;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tF743DB02A21C8D73EC6907A07AA56D55471FAF94;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t1B835ABED4DA8CA5CC72CD36C380226D95A35AFA;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t52E4CE6A2808933DF561E8BD1A816878E4ED6EF1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_t74A1330085B8247FB17128749F92AD552C221D8B;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// Newtonsoft.Json.Converters.IXmlNode[]
struct IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t0DD412086018A817EDF01B3DAA748E9B6ED12475;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_tABFE5281DA4F4B2BD24045CFF97763A3447C7543;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t547FE18ACA8C11D06A3C75834100F460447DD011;
// Newtonsoft.Json.Converters.IXmlNode
struct IXmlNode_t3E61530A0DFA8534CB532C18D56CDF9569DB49AD;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4;
// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39;
// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t4A29B84F2B1617A7C60CB1959432EF09D83F115A;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242;
// Newtonsoft.Json.JsonException
struct JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_tA921B8AB108475BA7411A09164265D5725FEC7C9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Xml.Schema.SchemaInfo
struct SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3;
// System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC;
// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D;
// System.Xml.XmlDocumentType
struct XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F;
// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26;
// System.Xml.XmlElement
struct XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF;
// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0;
// System.Xml.XmlName
struct XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771;
// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1;
// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87;
// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6;
// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t43D3430E491049C1671F5DB5E87D1AE477F4BE59;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1
struct U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2
struct U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t910C8B175019A1DA267C3A6B0C68945940500DFD;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t066031DE9D0858E9D5DDB304E8AEC95B9819FCF0;
// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71;
// Newtonsoft.Json.Linq.Extensions/<>c
struct U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7;
// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c
struct U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742;
// Newtonsoft.Json.Linq.JObject/<>c
struct U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448;
// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58
struct U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173;
// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_tB64712BA428235F77072DE132CE5D35F7AB5D52A;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t7FA43FB052545BC1E43D4C07F04A468FACD1CC59;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t2BFB41B91825532A3C9EBEE914AFBA98451E8726;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t010754200AA57FC047ADC0CDA0E0101ED46D791E;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t8AC3FC48834E6E9D54EFE58B05FFD80CE3FFC440;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1;
// Newtonsoft.Json.JsonSerializerSettings/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_tF4854E2504C48977ADB38499719B479F78AF575F;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_tD42BECCBE255C43533FE588B543794E909F9598C;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE3DEDBD28EB941194DF86C0B5EA1B4A20DC52264;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t54B62B5B56B71AE77AA2D06E353373B8C476BE63;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t39EC8C7DE413CBA8E426811A5329D392EAA90008;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t62C286175BC3B1F0209D3272A4BE08EEB9AA8E9F;
// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C;

IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t37F80A2009EC514A70EACD436E1F0D5CF911A30C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF743DB02A21C8D73EC6907A07AA56D55471FAF94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t50F18C1B9D80F37BF58A282F0C1B3B1F2DF91D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t74A1330085B8247FB17128749F92AD552C221D8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_m193B31C4FCE2D4BC6FA182CDAE0FE735067C67FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mC43547A680374633E0221034BFB5C0702525AE10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mADE13DCBAB70A428878E701CA49C487991D70F72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__58_System_Collections_IEnumerator_Reset_m26EE8DC5BDCE81F7E904EF44D29ACA1208AC16BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__33_1_m85DF46087A841A2D787F963CFAEFE18A13A78746_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetJsonConverterCreatorU3Eb__18_1_m10633A41FD86AC5D98E39BEA3E6C9B21369C6D8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass18_0_U3CGetJsonConverterCreatorU3Eb__0_m5DBE4619CA16BD48EF1F50A1E2A83F922159BEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass34_1_U3CSetExtensionDataDelegatesU3Eb__0_mBDE9A222B6950113F7F7AFE0F2E87069E77F77BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConstructorAttribute_t1631D1458AE9EBDBE0FF940FD3EE885E05C8ABBC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonExtensionDataAttribute_t426D280AC809DEA22A0A8E64681AF85D411297E2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct JTokenU5BU5D_t0DD412086018A817EDF01B3DAA748E9B6ED12475;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>
struct List_1_t74A1330085B8247FB17128749F92AD552C221D8B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t74A1330085B8247FB17128749F92AD552C221D8B, ____items_1)); }
	inline IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* get__items_1() const { return ____items_1; }
	inline IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t74A1330085B8247FB17128749F92AD552C221D8B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t74A1330085B8247FB17128749F92AD552C221D8B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t74A1330085B8247FB17128749F92AD552C221D8B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t74A1330085B8247FB17128749F92AD552C221D8B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t74A1330085B8247FB17128749F92AD552C221D8B_StaticFields, ____emptyArray_5)); }
	inline IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(IXmlNodeU5BU5D_t98060B2ECE89C6A5DF25EB1467142B69282E662E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____items_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields, ____emptyArray_5)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


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

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Newtonsoft.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Newtonsoft.Json.Linq.JToken
struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * ____parent_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____previous_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____next_2;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_3;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____parent_0)); }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * get__parent_0() const { return ____parent_0; }
	inline JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__previous_1() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____previous_1)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__previous_1() const { return ____previous_1; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__previous_1() { return &____previous_1; }
	inline void set__previous_1(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____previous_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_1), (void*)value);
	}

	inline static int32_t get_offset_of__next_2() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____next_2)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__next_2() const { return ____next_2; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__next_2() { return &____next_2; }
	inline void set__next_2(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_2), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_3() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9, ____annotations_3)); }
	inline RuntimeObject * get__annotations_3() const { return ____annotations_3; }
	inline RuntimeObject ** get_address_of__annotations_3() { return &____annotations_3; }
	inline void set__annotations_3(RuntimeObject * value)
	{
		____annotations_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_3), (void*)value);
	}
};

struct JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BooleanTypes_4;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___NumberTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___StringTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___GuidTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___TimeSpanTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___UriTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___CharTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___DateTimeTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* ___BytesTypes_12;

public:
	inline static int32_t get_offset_of_BooleanTypes_4() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BooleanTypes_4)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BooleanTypes_4() const { return ___BooleanTypes_4; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BooleanTypes_4() { return &___BooleanTypes_4; }
	inline void set_BooleanTypes_4(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BooleanTypes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_4), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_5() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___NumberTypes_5)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_NumberTypes_5() const { return ___NumberTypes_5; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_NumberTypes_5() { return &___NumberTypes_5; }
	inline void set_NumberTypes_5(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___NumberTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_6() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___StringTypes_6)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_StringTypes_6() const { return ___StringTypes_6; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_StringTypes_6() { return &___StringTypes_6; }
	inline void set_StringTypes_6(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___StringTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_7() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___GuidTypes_7)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_GuidTypes_7() const { return ___GuidTypes_7; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_GuidTypes_7() { return &___GuidTypes_7; }
	inline void set_GuidTypes_7(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___GuidTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_8() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___TimeSpanTypes_8)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_TimeSpanTypes_8() const { return ___TimeSpanTypes_8; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_TimeSpanTypes_8() { return &___TimeSpanTypes_8; }
	inline void set_TimeSpanTypes_8(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___TimeSpanTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_9() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___UriTypes_9)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_UriTypes_9() const { return ___UriTypes_9; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_UriTypes_9() { return &___UriTypes_9; }
	inline void set_UriTypes_9(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___UriTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_10() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___CharTypes_10)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_CharTypes_10() const { return ___CharTypes_10; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_CharTypes_10() { return &___CharTypes_10; }
	inline void set_CharTypes_10(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___CharTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_11() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___DateTimeTypes_11)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_DateTimeTypes_11() const { return ___DateTimeTypes_11; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_DateTimeTypes_11() { return &___DateTimeTypes_11; }
	inline void set_DateTimeTypes_11(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___DateTimeTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_12() { return static_cast<int32_t>(offsetof(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_StaticFields, ___BytesTypes_12)); }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* get_BytesTypes_12() const { return ___BytesTypes_12; }
	inline JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE** get_address_of_BytesTypes_12() { return &___BytesTypes_12; }
	inline void set_BytesTypes_12(JTokenTypeU5BU5D_t03DB097DBD7548086F9F27181BE1DB7AA4E653BE* value)
	{
		___BytesTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_12), (void*)value);
	}
};


// Newtonsoft.Json.JsonConverter
struct JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242  : public RuntimeObject
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


// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_tA921B8AB108475BA7411A09164265D5725FEC7C9  : public RuntimeObject
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

// System.Xml.XmlNode
struct XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNode::parentNode
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parentNode_0;

public:
	inline static int32_t get_offset_of_parentNode_0() { return static_cast<int32_t>(offsetof(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1, ___parentNode_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parentNode_0() const { return ___parentNode_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parentNode_0() { return &___parentNode_0; }
	inline void set_parentNode_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parentNode_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentNode_0), (void*)value);
	}
};


// System.Xml.XmlNodeList
struct XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Converters.XmlNodeWrapper
struct XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87  : public RuntimeObject
{
public:
	// System.Xml.XmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::_node
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ____node_0;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_childNodes
	List_1_t74A1330085B8247FB17128749F92AD552C221D8B * ____childNodes_1;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::_attributes
	List_1_t74A1330085B8247FB17128749F92AD552C221D8B * ____attributes_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87, ____node_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get__node_0() const { return ____node_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____node_0), (void*)value);
	}

	inline static int32_t get_offset_of__childNodes_1() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87, ____childNodes_1)); }
	inline List_1_t74A1330085B8247FB17128749F92AD552C221D8B * get__childNodes_1() const { return ____childNodes_1; }
	inline List_1_t74A1330085B8247FB17128749F92AD552C221D8B ** get_address_of__childNodes_1() { return &____childNodes_1; }
	inline void set__childNodes_1(List_1_t74A1330085B8247FB17128749F92AD552C221D8B * value)
	{
		____childNodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____childNodes_1), (void*)value);
	}

	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87, ____attributes_2)); }
	inline List_1_t74A1330085B8247FB17128749F92AD552C221D8B * get__attributes_2() const { return ____attributes_2; }
	inline List_1_t74A1330085B8247FB17128749F92AD552C221D8B ** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(List_1_t74A1330085B8247FB17128749F92AD552C221D8B * value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____attributes_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.ArrayIndexFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tB73026B46FC6B8D244B12747771FBB13CC2B1F25  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.ArrayMultipleIndexFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t675642A6BB051E3306B2725AFD2097B3C8F732FB  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.ArraySliceFilter/<ExecuteFilter>d__12
struct U3CExecuteFilterU3Ed__12_tEDDE08DD9BBD85622B3D56E0E0E9BD0332ACE82A  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t43D3430E491049C1671F5DB5E87D1AE477F4BE59  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::call
	MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t43D3430E491049C1671F5DB5E87D1AE477F4BE59, ___call_0)); }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * get_call_0() const { return ___call_0; }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9
	U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__30_0
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__30_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__30_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__30_1_2;
	// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__33_0
	Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * ___U3CU3E9__33_0_3;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__33_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__33_1_4;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__36_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__36_0_5;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<>9__60_0
	Func_2_t078F26909D23EC8BDBDBCF1BD65215B1A2C9E6A3 * ___U3CU3E9__60_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__30_0_1)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__30_0_1() const { return ___U3CU3E9__30_0_1; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__30_0_1() { return &___U3CU3E9__30_0_1; }
	inline void set_U3CU3E9__30_0_1(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__30_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__30_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__30_1_2)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__30_1_2() const { return ___U3CU3E9__30_1_2; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__30_1_2() { return &___U3CU3E9__30_1_2; }
	inline void set_U3CU3E9__30_1_2(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__30_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__30_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__33_0_3)); }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * get_U3CU3E9__33_0_3() const { return ___U3CU3E9__33_0_3; }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 ** get_address_of_U3CU3E9__33_0_3() { return &___U3CU3E9__33_0_3; }
	inline void set_U3CU3E9__33_0_3(Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * value)
	{
		___U3CU3E9__33_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__33_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__33_1_4)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__33_1_4() const { return ___U3CU3E9__33_1_4; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__33_1_4() { return &___U3CU3E9__33_1_4; }
	inline void set_U3CU3E9__33_1_4(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__33_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__33_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__36_0_5)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__36_0_5() const { return ___U3CU3E9__36_0_5; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__36_0_5() { return &___U3CU3E9__36_0_5; }
	inline void set_U3CU3E9__36_0_5(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__36_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__60_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields, ___U3CU3E9__60_0_6)); }
	inline Func_2_t078F26909D23EC8BDBDBCF1BD65215B1A2C9E6A3 * get_U3CU3E9__60_0_6() const { return ___U3CU3E9__60_0_6; }
	inline Func_2_t078F26909D23EC8BDBDBCF1BD65215B1A2C9E6A3 ** get_address_of_U3CU3E9__60_0_6() { return &___U3CU3E9__60_0_6; }
	inline void set_U3CU3E9__60_0_6(Func_2_t078F26909D23EC8BDBDBCF1BD65215B1A2C9E6A3 * value)
	{
		___U3CU3E9__60_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__60_0_6), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0
struct U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0::getExtensionDataDictionary
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___getExtensionDataDictionary_0;
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_getExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834, ___getExtensionDataDictionary_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_getExtensionDataDictionary_0() const { return ___getExtensionDataDictionary_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_getExtensionDataDictionary_0() { return &___getExtensionDataDictionary_0; }
	inline void set_getExtensionDataDictionary_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___getExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___member_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1
struct U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817  : public RuntimeObject
{
public:
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::setExtensionDataDictionary
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___setExtensionDataDictionary_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::createExtensionDataDictionary
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createExtensionDataDictionary_1;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::setExtensionDataDictionaryValue
	MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * ___setExtensionDataDictionaryValue_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * ___CSU24U3CU3E8__locals1_3;

public:
	inline static int32_t get_offset_of_setExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817, ___setExtensionDataDictionary_0)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_setExtensionDataDictionary_0() const { return ___setExtensionDataDictionary_0; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_setExtensionDataDictionary_0() { return &___setExtensionDataDictionary_0; }
	inline void set_setExtensionDataDictionary_0(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___setExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_createExtensionDataDictionary_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817, ___createExtensionDataDictionary_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_createExtensionDataDictionary_1() const { return ___createExtensionDataDictionary_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_createExtensionDataDictionary_1() { return &___createExtensionDataDictionary_1; }
	inline void set_createExtensionDataDictionary_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___createExtensionDataDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createExtensionDataDictionary_1), (void*)value);
	}

	inline static int32_t get_offset_of_setExtensionDataDictionaryValue_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817, ___setExtensionDataDictionaryValue_2)); }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * get_setExtensionDataDictionaryValue_2() const { return ___setExtensionDataDictionaryValue_2; }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F ** get_address_of_setExtensionDataDictionaryValue_2() { return &___setExtensionDataDictionaryValue_2; }
	inline void set_setExtensionDataDictionaryValue_2(MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * value)
	{
		___setExtensionDataDictionaryValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionaryValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817, ___CSU24U3CU3E8__locals1_3)); }
	inline U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * get_CSU24U3CU3E8__locals1_3() const { return ___CSU24U3CU3E8__locals1_3; }
	inline U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 ** get_address_of_CSU24U3CU3E8__locals1_3() { return &___CSU24U3CU3E8__locals1_3; }
	inline void set_CSU24U3CU3E8__locals1_3(U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * value)
	{
		___CSU24U3CU3E8__locals1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_3), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2
struct U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2::createEnumerableWrapper
	ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * ___createEnumerableWrapper_0;
	// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_createEnumerableWrapper_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB, ___createEnumerableWrapper_0)); }
	inline ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * get_createEnumerableWrapper_0() const { return ___createEnumerableWrapper_0; }
	inline ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 ** get_address_of_createEnumerableWrapper_0() { return &___createEnumerableWrapper_0; }
	inline void set_createEnumerableWrapper_0(ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * value)
	{
		___createEnumerableWrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createEnumerableWrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0
struct U3CU3Ec__DisplayClass64_0_t910C8B175019A1DA267C3A6B0C68945940500DFD  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::shouldSerializeCall
	MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * ___shouldSerializeCall_0;

public:
	inline static int32_t get_offset_of_shouldSerializeCall_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass64_0_t910C8B175019A1DA267C3A6B0C68945940500DFD, ___shouldSerializeCall_0)); }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * get_shouldSerializeCall_0() const { return ___shouldSerializeCall_0; }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F ** get_address_of_shouldSerializeCall_0() { return &___shouldSerializeCall_0; }
	inline void set_shouldSerializeCall_0(MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * value)
	{
		___shouldSerializeCall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shouldSerializeCall_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0
struct U3CU3Ec__DisplayClass65_0_t066031DE9D0858E9D5DDB304E8AEC95B9819FCF0  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::specifiedPropertyGet
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___specifiedPropertyGet_0;

public:
	inline static int32_t get_offset_of_specifiedPropertyGet_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass65_0_t066031DE9D0858E9D5DDB304E8AEC95B9819FCF0, ___specifiedPropertyGet_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_specifiedPropertyGet_0() const { return ___specifiedPropertyGet_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_specifiedPropertyGet_0() { return &___specifiedPropertyGet_0; }
	inline void set_specifiedPropertyGet_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___specifiedPropertyGet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specifiedPropertyGet_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.EnumUtils/<>c Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9
	U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * ___U3CU3E9_0;
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__1_0
	Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * ___U3CU3E9__1_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.EnumUtils/<>c::<>9__5_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.Extensions/<>c
struct U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_StaticFields
{
public:
	// Newtonsoft.Json.Linq.Extensions/<>c Newtonsoft.Json.Linq.Extensions/<>c::<>9
	U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.FieldFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tA2D5E2B16425A48D4EA1B88E94F9DE392F6569E3  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c
struct U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::<>9
	U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_t02AB467CC61B9384EDED63319F285F6A7122C91B  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JContainer/<GetDescendants>d__29
struct U3CGetDescendantsU3Ed__29_t3FCC3021C13D93E234BCF9BB61ED59AD344089D6  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JObject/<>c
struct U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JObject/<>c Newtonsoft.Json.Linq.JObject/<>c::<>9
	U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * ___U3CU3E9_0;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173, ____token_0)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get__token_0() const { return ____token_0; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken/<AfterSelf>d__42
struct U3CAfterSelfU3Ed__42_tF88D1A63921B3C0AADA932E3AE1301F6C8179442  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken/<Annotations>d__172
struct U3CAnnotationsU3Ed__172_tAFA185FFF55CF8DE1716A6ACC4637C073FC8A53C  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken/<BeforeSelf>d__43
struct U3CBeforeSelfU3Ed__43_tB28E516C594944D58AD85CEC26B5091143262084  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken/<GetAncestors>d__41
struct U3CGetAncestorsU3Ed__41_tAED2AFDE8292A7EEF8E2252810E5504F7651390E  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_tB64712BA428235F77072DE132CE5D35F7AB5D52A  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_tB64712BA428235F77072DE132CE5D35F7AB5D52A, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_tB64712BA428235F77072DE132CE5D35F7AB5D52A, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_t7FA43FB052545BC1E43D4C07F04A468FACD1CC59  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_t7FA43FB052545BC1E43D4C07F04A468FACD1CC59, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_t2BFB41B91825532A3C9EBEE914AFBA98451E8726  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_t2BFB41B91825532A3C9EBEE914AFBA98451E8726, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t010754200AA57FC047ADC0CDA0E0101ED46D791E  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9
	U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__36_0
	Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * ___U3CU3E9__36_0_1;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__36_2
	Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * ___U3CU3E9__36_2_2;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_0
	Func_2_tCDF9360B5E91755190C449B0445E441EF50D922A * ___U3CU3E9__41_0_3;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<>9__41_1
	Func_2_tA4A5FD4D9FC29DB12C95C158B953AC9C24B84CC1 * ___U3CU3E9__41_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields, ___U3CU3E9__36_0_1)); }
	inline Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * get_U3CU3E9__36_0_1() const { return ___U3CU3E9__36_0_1; }
	inline Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 ** get_address_of_U3CU3E9__36_0_1() { return &___U3CU3E9__36_0_1; }
	inline void set_U3CU3E9__36_0_1(Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * value)
	{
		___U3CU3E9__36_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields, ___U3CU3E9__36_2_2)); }
	inline Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * get_U3CU3E9__36_2_2() const { return ___U3CU3E9__36_2_2; }
	inline Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 ** get_address_of_U3CU3E9__36_2_2() { return &___U3CU3E9__36_2_2; }
	inline void set_U3CU3E9__36_2_2(Func_2_t975ED57CDF52F4D35D22D71E83112563D9D0B752 * value)
	{
		___U3CU3E9__36_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields, ___U3CU3E9__41_0_3)); }
	inline Func_2_tCDF9360B5E91755190C449B0445E441EF50D922A * get_U3CU3E9__41_0_3() const { return ___U3CU3E9__41_0_3; }
	inline Func_2_tCDF9360B5E91755190C449B0445E441EF50D922A ** get_address_of_U3CU3E9__41_0_3() { return &___U3CU3E9__41_0_3; }
	inline void set_U3CU3E9__41_0_3(Func_2_tCDF9360B5E91755190C449B0445E441EF50D922A * value)
	{
		___U3CU3E9__41_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields, ___U3CU3E9__41_1_4)); }
	inline Func_2_tA4A5FD4D9FC29DB12C95C158B953AC9C24B84CC1 * get_U3CU3E9__41_1_4() const { return ___U3CU3E9__41_1_4; }
	inline Func_2_tA4A5FD4D9FC29DB12C95C158B953AC9C24B84CC1 ** get_address_of_U3CU3E9__41_1_4() { return &___U3CU3E9__41_1_4; }
	inline void set_U3CU3E9__41_1_4(Func_2_tA4A5FD4D9FC29DB12C95C158B953AC9C24B84CC1 * value)
	{
		___U3CU3E9__41_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_4), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_t8AC3FC48834E6E9D54EFE58B05FFD80CE3FFC440  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::property
	JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_t8AC3FC48834E6E9D54EFE58B05FFD80CE3FFC440, ___property_0)); }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * get_property_0() const { return ___property_0; }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Newtonsoft.Json.JsonSerializerSettings/<>c__DisplayClass90_0
struct U3CU3Ec__DisplayClass90_0_tF4854E2504C48977ADB38499719B479F78AF575F  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9
	U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<>9__18_1
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___U3CU3E9__18_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__18_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields, ___U3CU3E9__18_1_1)); }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * get_U3CU3E9__18_1_1() const { return ___U3CU3E9__18_1_1; }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF ** get_address_of_U3CU3E9__18_1_1() { return &___U3CU3E9__18_1_1; }
	inline void set_U3CU3E9__18_1_1(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * value)
	{
		___U3CU3E9__18_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__18_1_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0
struct U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::converterType
	Type_t * ___converterType_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::defaultConstructor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_converterType_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D, ___converterType_0)); }
	inline Type_t * get_converterType_0() const { return ___converterType_0; }
	inline Type_t ** get_address_of_converterType_0() { return &___converterType_0; }
	inline void set_converterType_0(Type_t * value)
	{
		___converterType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converterType_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D, ___defaultConstructor_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_tD42BECCBE255C43533FE588B543794E909F9598C  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable/Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry Newtonsoft.Json.Utilities.PropertyNameTable/Entry::Next
	Entry_tD42BECCBE255C43533FE588B543794E909F9598C * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_tD42BECCBE255C43533FE588B543794E909F9598C, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_tD42BECCBE255C43533FE588B543794E909F9598C, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_tD42BECCBE255C43533FE588B543794E909F9598C, ___Next_2)); }
	inline Entry_tD42BECCBE255C43533FE588B543794E909F9598C * get_Next_2() const { return ___Next_2; }
	inline Entry_tD42BECCBE255C43533FE588B543794E909F9598C ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_tD42BECCBE255C43533FE588B543794E909F9598C * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JsonPath.QueryFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tE43D794185573D4B60974CA2DF629BC2A116670B  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tE3DEDBD28EB941194DF86C0B5EA1B4A20DC52264  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tE3DEDBD28EB941194DF86C0B5EA1B4A20DC52264, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t54B62B5B56B71AE77AA2D06E353373B8C476BE63  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::call
	MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t54B62B5B56B71AE77AA2D06E353373B8C476BE63, ___call_0)); }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * get_call_0() const { return ___call_0; }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_t39EC8C7DE413CBA8E426811A5329D392EAA90008  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::call
	MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_t39EC8C7DE413CBA8E426811A5329D392EAA90008, ___call_0)); }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * get_call_0() const { return ___call_0; }
	inline MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils/<>c Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9
	U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__10_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__29_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__29_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__37_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<>9__39_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__39_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields, ___U3CU3E9__29_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__29_0_2() const { return ___U3CU3E9__29_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__29_0_2() { return &___U3CU3E9__29_0_2; }
	inline void set_U3CU3E9__29_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__29_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields, ___U3CU3E9__39_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__39_0_4() const { return ___U3CU3E9__39_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__39_0_4() { return &___U3CU3E9__39_0_4; }
	inline void set_U3CU3E9__39_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__39_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_4), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0
struct U3CU3Ec__DisplayClass43_0_t62C286175BC3B1F0209D3272A4BE08EEB9AA8E9F  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JsonPath.ScanFilter/<ExecuteFilter>d__4
struct U3CExecuteFilterU3Ed__4_tD36A318021E0CCAF89A202CA4B4F35C3F971AA4D  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>2__current
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::<>4__this
	JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C, ___U3CU3E2__current_1)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C, ___U3CU3E4__this_2)); }
	inline JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87, ___value_1)); }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * get_value_1() const { return ___value_1; }
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
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


// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
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

// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
public:

public:
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


// Newtonsoft.Json.Linq.JContainer
struct JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4  : public JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9
{
public:
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * ____listChanged_13;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__listChanged_13() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____listChanged_13)); }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * get__listChanged_13() const { return ____listChanged_13; }
	inline ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C ** get_address_of__listChanged_13() { return &____listChanged_13; }
	inline void set__listChanged_13(ListChangedEventHandler_t02874ED3C8355742E3E62AED85A53F3140506B8C * value)
	{
		____listChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____listChanged_13), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39  : public Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_tA0A5F3A980ED91AABDF9AAD9A666A7C378114447 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39, ____dictionary_3)); }
	inline Dictionary_2_tA0A5F3A980ED91AABDF9AAD9A666A7C378114447 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_tA0A5F3A980ED91AABDF9AAD9A666A7C378114447 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_tA0A5F3A980ED91AABDF9AAD9A666A7C378114447 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
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


// System.Xml.XmlAttribute
struct XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlName System.Xml.XmlAttribute::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_1;
	// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_2;

public:
	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___name_1)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_1() const { return ___name_1; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_2() { return static_cast<int32_t>(offsetof(XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D, ___lastChild_2)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_2() const { return ___lastChild_2; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_2() { return &___lastChild_2; }
	inline void set_lastChild_2(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_2), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlDeclarationWrapper
struct XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D  : public XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87
{
public:
	// System.Xml.XmlDeclaration Newtonsoft.Json.Converters.XmlDeclarationWrapper::_declaration
	XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * ____declaration_3;

public:
	inline static int32_t get_offset_of__declaration_3() { return static_cast<int32_t>(offsetof(XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D, ____declaration_3)); }
	inline XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * get__declaration_3() const { return ____declaration_3; }
	inline XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC ** get_address_of__declaration_3() { return &____declaration_3; }
	inline void set__declaration_3(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * value)
	{
		____declaration_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____declaration_3), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlDocumentTypeWrapper
struct XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26  : public XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87
{
public:
	// System.Xml.XmlDocumentType Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::_documentType
	XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * ____documentType_3;

public:
	inline static int32_t get_offset_of__documentType_3() { return static_cast<int32_t>(offsetof(XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26, ____documentType_3)); }
	inline XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * get__documentType_3() const { return ____documentType_3; }
	inline XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F ** get_address_of__documentType_3() { return &____documentType_3; }
	inline void set__documentType_3(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * value)
	{
		____documentType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____documentType_3), (void*)value);
	}
};


// Newtonsoft.Json.Converters.XmlElementWrapper
struct XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC  : public XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87
{
public:
	// System.Xml.XmlElement Newtonsoft.Json.Converters.XmlElementWrapper::_element
	XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * ____element_3;

public:
	inline static int32_t get_offset_of__element_3() { return static_cast<int32_t>(offsetof(XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC, ____element_3)); }
	inline XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * get__element_3() const { return ____element_3; }
	inline XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF ** get_address_of__element_3() { return &____element_3; }
	inline void set__element_3(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * value)
	{
		____element_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____element_3), (void*)value);
	}
};


// System.Xml.XmlLinkedNode
struct XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0  : public XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1
{
public:
	// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::next
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___next_1;

public:
	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0, ___next_1)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_next_1() const { return ___next_1; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___next_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___next_1), (void*)value);
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=10
struct __StaticArrayInitTypeSizeU3D10_t2C3FE316018CB69925E106D582B6DCC02F2DEBC4 
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
		uint8_t __StaticArrayInitTypeSizeU3D10_t2C3FE316018CB69925E106D582B6DCC02F2DEBC4__padding[10];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t3703521128A2E0A2C30C9CB33A6733D70212C108 
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
		uint8_t __StaticArrayInitTypeSizeU3D12_t3703521128A2E0A2C30C9CB33A6733D70212C108__padding[12];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
struct __StaticArrayInitTypeSizeU3D28_tFC0B865780484B24AAE19015D7FDE869C15D0E25 
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
		uint8_t __StaticArrayInitTypeSizeU3D28_tFC0B865780484B24AAE19015D7FDE869C15D0E25__padding[28];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_tA583D011C5E0C92A5EB1531EAF074C92F64920E8 
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
		uint8_t __StaticArrayInitTypeSizeU3D52_tA583D011C5E0C92A5EB1531EAF074C92F64920E8__padding[52];
	};

public:
};


// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 
{
public:
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialType_0), (void*)value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};

// Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F 
{
public:
	// System.String Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};

// System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE 
{
public:
	// System.Object System.Xml.XmlNamedNodeMap/SmallXmlNodeList::field
	RuntimeObject * ___field_0;

public:
	inline static int32_t get_offset_of_field_0() { return static_cast<int32_t>(offsetof(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE, ___field_0)); }
	inline RuntimeObject * get_field_0() const { return ___field_0; }
	inline RuntimeObject ** get_address_of_field_0() { return &___field_0; }
	inline void set_field_0(RuntimeObject * value)
	{
		___field_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___field_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_pinvoke
{
	Il2CppIUnknown* ___field_0;
};
// Native definition for COM marshalling of System.Xml.XmlNamedNodeMap/SmallXmlNodeList
struct SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE_marshaled_com
{
	Il2CppIUnknown* ___field_0;
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


// Newtonsoft.Json.Bson.BsonType
struct BsonType_t21E49BFB0972EF88F2942C8312EAC8C8DF270027 
{
public:
	// System.SByte Newtonsoft.Json.Bson.BsonType::value__
	int8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BsonType_t21E49BFB0972EF88F2942C8312EAC8C8DF270027, ___value___2)); }
	inline int8_t get_value___2() const { return ___value___2; }
	inline int8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int8_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct DefaultValueHandling_tA6F1C904BA2806F3EE2BE2F9072EB3064D503EE2 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_tA6F1C904BA2806F3EE2BE2F9072EB3064D503EE2, ___value___2)); }
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

// Newtonsoft.Json.Linq.JObject
struct JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34  : public JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_17;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * ___PropertyChanging_18;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ____properties_16)); }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanging_18() { return static_cast<int32_t>(offsetof(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34, ___PropertyChanging_18)); }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * get_PropertyChanging_18() const { return ___PropertyChanging_18; }
	inline PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B ** get_address_of_PropertyChanging_18() { return &___PropertyChanging_18; }
	inline void set_PropertyChanging_18(PropertyChangingEventHandler_t31E1BA622DA161E68BB38F230BB5FE9551FB127B * value)
	{
		___PropertyChanging_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanging_18), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA  : public JContainer_t0393B6D5D1D1452D16BE67178D48155F148BCFC4
{
public:
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * ____content_16;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_17;

public:
	inline static int32_t get_offset_of__content_16() { return static_cast<int32_t>(offsetof(JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA, ____content_16)); }
	inline JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * get__content_16() const { return ____content_16; }
	inline JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 ** get_address_of__content_16() { return &____content_16; }
	inline void set__content_16(JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * value)
	{
		____content_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_16), (void*)value);
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}
};


// System.Reflection.MemberTypes
struct MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// Newtonsoft.Json.NullValueHandling
struct NullValueHandling_tF1C5D33CF1843DFF543CD0D5A54DB81A6803ED3B 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_tF1C5D33CF1843DFF543CD0D5A54DB81A6803ED3B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct ObjectCreationHandling_tB7C55BEBFC5F41BA0BD91209BBC715CDCE42AB63 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_tB7C55BEBFC5F41BA0BD91209BBC715CDCE42AB63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct ReferenceLoopHandling_t32974E9E23C132789EC534CB2EE8271AC3A5AFA7 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_t32974E9E23C132789EC534CB2EE8271AC3A5AFA7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct Required_t3227BFC685E17D3189D1E0F99C5442494A0D27FB 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t3227BFC685E17D3189D1E0F99C5442494A0D27FB, ___value___2)); }
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


// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct TypeNameHandling_t9AB625D7AFD6168171C6FC1A0E03F6089BB56C8D 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t9AB625D7AFD6168171C6FC1A0E03F6089BB56C8D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Xml.XmlDeclaration
struct XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlDeclaration::version
	String_t* ___version_2;
	// System.String System.Xml.XmlDeclaration::encoding
	String_t* ___encoding_3;
	// System.String System.Xml.XmlDeclaration::standalone
	String_t* ___standalone_4;

public:
	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___version_2)); }
	inline String_t* get_version_2() const { return ___version_2; }
	inline String_t** get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(String_t* value)
	{
		___version_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_2), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___encoding_3)); }
	inline String_t* get_encoding_3() const { return ___encoding_3; }
	inline String_t** get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(String_t* value)
	{
		___encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_standalone_4() { return static_cast<int32_t>(offsetof(XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC, ___standalone_4)); }
	inline String_t* get_standalone_4() const { return ___standalone_4; }
	inline String_t** get_address_of_standalone_4() { return &___standalone_4; }
	inline void set_standalone_4(String_t* value)
	{
		___standalone_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___standalone_4), (void*)value);
	}
};


// System.Xml.XmlDocumentType
struct XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.String System.Xml.XmlDocumentType::name
	String_t* ___name_2;
	// System.String System.Xml.XmlDocumentType::publicId
	String_t* ___publicId_3;
	// System.String System.Xml.XmlDocumentType::systemId
	String_t* ___systemId_4;
	// System.String System.Xml.XmlDocumentType::internalSubset
	String_t* ___internalSubset_5;
	// System.Boolean System.Xml.XmlDocumentType::namespaces
	bool ___namespaces_6;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::entities
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___entities_7;
	// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::notations
	XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * ___notations_8;
	// System.Xml.Schema.SchemaInfo System.Xml.XmlDocumentType::schemaInfo
	SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * ___schemaInfo_9;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___name_2)); }
	inline String_t* get_name_2() const { return ___name_2; }
	inline String_t** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(String_t* value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_publicId_3() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___publicId_3)); }
	inline String_t* get_publicId_3() const { return ___publicId_3; }
	inline String_t** get_address_of_publicId_3() { return &___publicId_3; }
	inline void set_publicId_3(String_t* value)
	{
		___publicId_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___publicId_3), (void*)value);
	}

	inline static int32_t get_offset_of_systemId_4() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___systemId_4)); }
	inline String_t* get_systemId_4() const { return ___systemId_4; }
	inline String_t** get_address_of_systemId_4() { return &___systemId_4; }
	inline void set_systemId_4(String_t* value)
	{
		___systemId_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemId_4), (void*)value);
	}

	inline static int32_t get_offset_of_internalSubset_5() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___internalSubset_5)); }
	inline String_t* get_internalSubset_5() const { return ___internalSubset_5; }
	inline String_t** get_address_of_internalSubset_5() { return &___internalSubset_5; }
	inline void set_internalSubset_5(String_t* value)
	{
		___internalSubset_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___internalSubset_5), (void*)value);
	}

	inline static int32_t get_offset_of_namespaces_6() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___namespaces_6)); }
	inline bool get_namespaces_6() const { return ___namespaces_6; }
	inline bool* get_address_of_namespaces_6() { return &___namespaces_6; }
	inline void set_namespaces_6(bool value)
	{
		___namespaces_6 = value;
	}

	inline static int32_t get_offset_of_entities_7() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___entities_7)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_entities_7() const { return ___entities_7; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_entities_7() { return &___entities_7; }
	inline void set_entities_7(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___entities_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entities_7), (void*)value);
	}

	inline static int32_t get_offset_of_notations_8() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___notations_8)); }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * get_notations_8() const { return ___notations_8; }
	inline XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 ** get_address_of_notations_8() { return &___notations_8; }
	inline void set_notations_8(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771 * value)
	{
		___notations_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___notations_8), (void*)value);
	}

	inline static int32_t get_offset_of_schemaInfo_9() { return static_cast<int32_t>(offsetof(XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F, ___schemaInfo_9)); }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * get_schemaInfo_9() const { return ___schemaInfo_9; }
	inline SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 ** get_address_of_schemaInfo_9() { return &___schemaInfo_9; }
	inline void set_schemaInfo_9(SchemaInfo_tDED785F47546ED3F5EEC6EA77577917420BF3BF5 * value)
	{
		___schemaInfo_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___schemaInfo_9), (void*)value);
	}
};


// System.Xml.XmlElement
struct XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF  : public XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0
{
public:
	// System.Xml.XmlName System.Xml.XmlElement::name
	XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * ___name_2;
	// System.Xml.XmlAttributeCollection System.Xml.XmlElement::attributes
	XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * ___attributes_3;
	// System.Xml.XmlLinkedNode System.Xml.XmlElement::lastChild
	XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * ___lastChild_4;

public:
	inline static int32_t get_offset_of_name_2() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___name_2)); }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * get_name_2() const { return ___name_2; }
	inline XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 ** get_address_of_name_2() { return &___name_2; }
	inline void set_name_2(XmlName_t641FE51F9AE9A7BF9B333D2FB61E2867328F5A63 * value)
	{
		___name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_2), (void*)value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___attributes_3)); }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * get_attributes_3() const { return ___attributes_3; }
	inline XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 ** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_3), (void*)value);
	}

	inline static int32_t get_offset_of_lastChild_4() { return static_cast<int32_t>(offsetof(XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF, ___lastChild_4)); }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * get_lastChild_4() const { return ___lastChild_4; }
	inline XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 ** get_address_of_lastChild_4() { return &___lastChild_4; }
	inline void set_lastChild_4(XmlLinkedNode_tAF992FE43A99E1889622121C0D712C80586580F0 * value)
	{
		___lastChild_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastChild_4), (void*)value);
	}
};


// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771  : public RuntimeObject
{
public:
	// System.Xml.XmlNode System.Xml.XmlNamedNodeMap::parent
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___parent_0;
	// System.Xml.XmlNamedNodeMap/SmallXmlNodeList System.Xml.XmlNamedNodeMap::nodes
	SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  ___nodes_1;

public:
	inline static int32_t get_offset_of_parent_0() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___parent_0)); }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * get_parent_0() const { return ___parent_0; }
	inline XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 ** get_address_of_parent_0() { return &___parent_0; }
	inline void set_parent_0(XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * value)
	{
		___parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_0), (void*)value);
	}

	inline static int32_t get_offset_of_nodes_1() { return static_cast<int32_t>(offsetof(XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771, ___nodes_1)); }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  get_nodes_1() const { return ___nodes_1; }
	inline SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE * get_address_of_nodes_1() { return &___nodes_1; }
	inline void set_nodes_1(SmallXmlNodeList_tACC052857127163828121C4ED4874E07C8D1CEEE  value)
	{
		___nodes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___nodes_1))->___field_0), (void*)NULL);
	}
};


// System.Xml.XmlNodeType
struct XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81 
{
public:
	// System.Int32 System.Xml.XmlNodeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XmlNodeType_t6202952ADDE08339EF2AAC42CE97C84E99AC5D81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Bson.BsonReader/BsonReaderState
struct BsonReaderState_tD524ABD32E508E824AC295D213B57F9557106868 
{
public:
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/BsonReaderState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BsonReaderState_tD524ABD32E508E824AC295D213B57F9557106868, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult
struct ConvertResult_t79C916D758514DBFBC29B08E746216D8A19C222D 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConvertResult_t79C916D758514DBFBC29B08E746216D8A19C222D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58
struct U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>2__current
	KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>4__this
	JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207, ___U3CU3E4__this_2)); }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader/State
struct State_t081926601A2157B931EAACBCBFD6DDF2E2815D12 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t081926601A2157B931EAACBCBFD6DDF2E2815D12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence
struct PropertyPresence_t3E274ABAEAD5F33C6A5E128005070D38B46478F4 
{
public:
	// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_t3E274ABAEAD5F33C6A5E128005070D38B46478F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter/State
struct State_t7D9D0FA8AF2419DB434456D6166B6578DB20812E 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t7D9D0FA8AF2419DB434456D6166B6578DB20812E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// Newtonsoft.Json.JsonException
struct JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166  : public Exception_t
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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


// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3  : public XmlNamedNodeMap_t7554E5F015FED975E1E8B075F57EBA65773CF771
{
public:

public:
};


// Newtonsoft.Json.Bson.BsonReader/ContainerContext
struct ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonReader/ContainerContext::Type
	int8_t ___Type_0;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Length
	int32_t ___Length_1;
	// System.Int32 Newtonsoft.Json.Bson.BsonReader/ContainerContext::Position
	int32_t ___Position_2;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6, ___Type_0)); }
	inline int8_t get_Type_0() const { return ___Type_0; }
	inline int8_t* get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(int8_t value)
	{
		___Type_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6, ___Length_1)); }
	inline int32_t get_Length_1() const { return ___Length_1; }
	inline int32_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int32_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}
};


// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_t4A29B84F2B1617A7C60CB1959432EF09D83F115A * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * ___U3CConverterU3Ek__BackingField_13;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<MemberConverter>k__BackingField
	JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * ___U3CMemberConverterU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_17;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_18;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF  ___U3CNullValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E  ___U3CDefaultValueHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  ___U3CReferenceLoopHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454  ___U3CObjectCreationHandlingU3Ek__BackingField_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  ___U3CTypeNameHandlingU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_26;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_27;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_28;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * ___U3CItemConverterU3Ek__BackingField_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  ___U3CItemTypeNameHandlingU3Ek__BackingField_31;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____required_0)); }
	inline Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A  get__required_0() const { return ____required_0; }
	inline Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tA79E84D3522E28BAB25B1C6A47C29CEBDC4B828A  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_t4A29B84F2B1617A7C60CB1959432EF09D83F115A * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_t4A29B84F2B1617A7C60CB1959432EF09D83F115A ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_t4A29B84F2B1617A7C60CB1959432EF09D83F115A * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberConverterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CMemberConverterU3Ek__BackingField_14)); }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * get_U3CMemberConverterU3Ek__BackingField_14() const { return ___U3CMemberConverterU3Ek__BackingField_14; }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 ** get_address_of_U3CMemberConverterU3Ek__BackingField_14() { return &___U3CMemberConverterU3Ek__BackingField_14; }
	inline void set_U3CMemberConverterU3Ek__BackingField_14(JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * value)
	{
		___U3CMemberConverterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberConverterU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CIgnoredU3Ek__BackingField_15)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_15() const { return ___U3CIgnoredU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_15() { return &___U3CIgnoredU3Ek__BackingField_15; }
	inline void set_U3CIgnoredU3Ek__BackingField_15(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CReadableU3Ek__BackingField_16)); }
	inline bool get_U3CReadableU3Ek__BackingField_16() const { return ___U3CReadableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_16() { return &___U3CReadableU3Ek__BackingField_16; }
	inline void set_U3CReadableU3Ek__BackingField_16(bool value)
	{
		___U3CReadableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CWritableU3Ek__BackingField_17)); }
	inline bool get_U3CWritableU3Ek__BackingField_17() const { return ___U3CWritableU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_17() { return &___U3CWritableU3Ek__BackingField_17; }
	inline void set_U3CWritableU3Ek__BackingField_17(bool value)
	{
		___U3CWritableU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CHasMemberAttributeU3Ek__BackingField_18)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_18() const { return ___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return &___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_18(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CIsReferenceU3Ek__BackingField_19)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_19() const { return ___U3CIsReferenceU3Ek__BackingField_19; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_19() { return &___U3CIsReferenceU3Ek__BackingField_19; }
	inline void set_U3CIsReferenceU3Ek__BackingField_19(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CNullValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF  get_U3CNullValueHandlingU3Ek__BackingField_20() const { return ___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF * get_address_of_U3CNullValueHandlingU3Ek__BackingField_20() { return &___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_20(Nullable_1_tA7CD3CD4938120FE164106D286D8DAFE253C3ADF  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CDefaultValueHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E  get_U3CDefaultValueHandlingU3Ek__BackingField_21() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return &___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_21(Nullable_1_t14C84D3B03BEB298B3006B88BB5C9449E252128E  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CReferenceLoopHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  get_U3CReferenceLoopHandlingU3Ek__BackingField_22() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_22(Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CObjectCreationHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454  get_U3CObjectCreationHandlingU3Ek__BackingField_23() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return &___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_23(Nullable_1_tE7F578DDE9FEA9EABF3601C7DC2D583AFEA71454  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CTypeNameHandlingU3Ek__BackingField_24)); }
	inline Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  get_U3CTypeNameHandlingU3Ek__BackingField_24() const { return ___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return &___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_24(Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CShouldSerializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_25() const { return ___U3CShouldSerializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_25() { return &___U3CShouldSerializeU3Ek__BackingField_25; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CShouldDeserializeU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_26() const { return ___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_26() { return &___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CGetIsSpecifiedU3Ek__BackingField_27)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return &___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_27(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CSetIsSpecifiedU3Ek__BackingField_28)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_28() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return &___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_28(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CItemConverterU3Ek__BackingField_29)); }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * get_U3CItemConverterU3Ek__BackingField_29() const { return ___U3CItemConverterU3Ek__BackingField_29; }
	inline JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 ** get_address_of_U3CItemConverterU3Ek__BackingField_29() { return &___U3CItemConverterU3Ek__BackingField_29; }
	inline void set_U3CItemConverterU3Ek__BackingField_29(JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * value)
	{
		___U3CItemConverterU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CItemIsReferenceU3Ek__BackingField_30)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_30() const { return ___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_30() { return &___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_30(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CItemTypeNameHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  get_U3CItemTypeNameHandlingU3Ek__BackingField_31() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_31(Nullable_1_t3A9D3139058E086D0A3D8B52106E05024D82BEB4  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32)); }
	inline Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_32(Nullable_1_t2CB95692E6A26EDE54D7ADD36B8950CB7B641543  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_32 = value;
	}
};


// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934  : public JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166
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


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___Property_1)); }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___ConstructorProperty_2)); }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___Presence_3)); }
	inline Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513 * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_tBC1EDFF7DCEECB2AD70C78FB447228E76720C513  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
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
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t0DD412086018A817EDF01B3DAA748E9B6ED12475  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * m_Items[1];

public:
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_gshared (MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionUtils_AddRange_TisRuntimeObject_m0A574E7798E33D1B8595A4F8A56C32FBBFC5B37D_gshared (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_gshared (ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::.ctor(System.Int32)
inline void List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2 (List_1_t74A1330085B8247FB17128749F92AD552C221D8B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74A1330085B8247FB17128749F92AD552C221D8B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m9C8EEDA41584745DDCF730EA4D398B7AAA5F8FCA (XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode>::Add(!0)
inline void List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B (List_1_t74A1330085B8247FB17128749F92AD552C221D8B * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t74A1330085B8247FB17128749F92AD552C221D8B *, RuntimeObject*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Newtonsoft.Json.Converters.XmlElementWrapper::.ctor(System.Xml.XmlElement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlElementWrapper__ctor_m157ADA9353970E9FAF97F67406CFF891477D8A0C (XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC * __this, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * ___element0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlDeclarationWrapper::.ctor(System.Xml.XmlDeclaration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDeclarationWrapper__ctor_mF51839B7636CC91F7B4CD908F24712F5913A91B4 (XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D * __this, XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC * ___declaration0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlDocumentTypeWrapper::.ctor(System.Xml.XmlDocumentType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlDocumentTypeWrapper__ctor_m675661950897A7EF2E7EC820E79E337D2B6A307A (XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26 * __this, XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F * ___documentType0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_mF3A07DBAE9040226F2311FB40CFC36E3D4A06696 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512 (MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_gshared)(__this, ___target0, ___args1, method);
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m2672D4C423F105D7036F00FCF1A8C9FF7141292D_inline (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m42A90982418CA92A7CC99C23007A9F0A8D9353C4_inline (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mE7D0FEEB17A875CA3F8E0180A6E2F811F076097E (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_m53EEF50076A23F2DD2069C13D70FE12480A72EC6 (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mCFB617A4360BB185698B4EC5B25BEC2BD0876D79 (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776  ___other0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mBEC43674C2C9C1B78030AD4CC1715062E0DD09CC (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C5546AB35B398F2D78330D6129B7BBCC3203F68 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsIndexedProperty_m45D58103C9DC9D7A573E63801BBCCF19EFA61BDA (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
inline void CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64 (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m0A574E7798E33D1B8595A4F8A56C32FBBFC5B37D_gshared)(___initial0, ___collection1, method);
}
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_m6169F34B91C472E863D8B0040EC001B9B7A8300A (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanReadMemberValue_m924E5AE82FD3A6F3168CC7A977C329F15D7B8B7C (MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultContractResolver_GetClrTypeFullName_m2BEF05EC12DB3ADEEC64C96CB5DC3BA6C7317B80 (Type_t * ___type0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mA780395FEF887F07DE6C1018243B910B911A87D5 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mC1855E8561781A110D7242742AD17C18B1E2ACD5 (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionUtils_GetMemberUnderlyingType_m94F1EB793484B7FADC83A1AF36E98862918E00BA (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_ImplementsGenericDefinition_m348F17ADEBDFF0EFE2B1C14356A9487DA04E53A8 (Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::get_Order()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_m8DC4EBE07E682CD6208BD1A39A244DE3BAB93D2A_inline (JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
inline RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mA88108ED0CDF74A30989A7B14A393D7A5292DFDD (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_mE0EA4480BC4246503121539E1D97555D480D016A (JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934 * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
inline void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382 (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF (ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_gshared)(__this, ___args0, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_mD4B4C258C07B7B90E3DF9FF8E544F235DEF91414 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_m39B4CC4974DA019307688EB5C98DF95C979DE6DB (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mF640FAB58FACF8E193583786EE162430F96E7037 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F  ___other0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mA8F9631B58F24FA621BC3773D773F504CD394476 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44DED9A94D6B8FEE56E0C7D65018B05371398247 (U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * __this, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.Extensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m891AF27D89FAD73E6AA355C447B81716A36E9662 (U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA41EC449EB8039C963A52956BB235FD09D59CFD2 (U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m12583814D2DBDF9197EF3849980DBCDC5C608CE3 (U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58_U3CU3Em__Finally1_m55F7EF214234CB5AE172B1391E27AD0C2B53C1CC (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_m193B31C4FCE2D4BC6FA182CDAE0FE735067C67FD (Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_tE59C462A827784AB557F2F5EB610FC64C934DC63 *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m4B909198F27EFED895AF6E2EFB90F2A22F86E411_inline (JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * JProperty_get_Value_m6E4A8DB7DF48E5C9AEB1DF22A36FC70F5B63DFB7 (JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mC43547A680374633E0221034BFB5C0702525AE10 (KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87 * __this, String_t* ___key0, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87 *, String_t*, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58_System_IDisposable_Dispose_m86F73AE814F57F2B03CF9B5B80042C9F90C62135 (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mC49E159103879D4883943B820EDF7233CFEAD55A (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m6298870EC6AF369B8C315832F172AF93EC2A6D8E (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m197909213DCD3EA6A9B847D52B274909ADB01C0B (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m851570734464B93D7F2246206C28968FC26D6505_inline (JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33C772708BBE9354F6F02B61BFABCCF96CE85045 (U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * __this, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258 (RuntimeObject* ___source0, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_tA921B8AB108475BA7411A09164265D5725FEC7C9 * JsonTypeReflector_get_ReflectionDelegateFactory_m51141B018BF3854A0C3236A7DD6247C719B868D0 (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m5BC13634D631AA9D03E3A6E50539784F6F69461D (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDA33AA8E118D1D8277E3467575C9E5B9AB628E46 (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_m5E3C3F5E5935BFE21832F5B3445C3AC12F3855E9 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m67824E17C1BBD63AB035FB49B76229EC0560677E (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::.ctor(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper__ctor_mF3A07DBAE9040226F2311FB40CFC36E3D4A06696 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = ___node0;
		__this->set__node_0(L_0);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.XmlNodeWrapper::get_WrappedNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XmlNodeWrapper_get_WrappedNode_m468BF37D91C283502A22F72F9E3350069CAC6E2F (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		return L_0;
	}
}
// System.Xml.XmlNodeType Newtonsoft.Json.Converters.XmlNodeWrapper::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XmlNodeWrapper_get_NodeType_mB544142E2A3BB418F9CE2633DD6633200EE1F9B2 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_LocalName_m07335C58A77A9F60FA2FEE2CE7C13C851BA87629 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(31 /* System.String System.Xml.XmlNode::get_LocalName() */, L_0);
		return L_1;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_ChildNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t74A1330085B8247FB17128749F92AD552C221D8B * XmlNodeWrapper_get_ChildNodes_m8BEC61F5C677651F0824D2187E9CCAA003036E7E (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t74A1330085B8247FB17128749F92AD552C221D8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_0 = __this->get__childNodes_1();
		if (L_0)
		{
			goto IL_006e;
		}
	}
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = __this->get__node_0();
		NullCheck(L_1);
		XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * L_2;
		L_2 = VirtFuncInvoker0< XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 System.Xml.XmlNodeList::get_Count() */, L_2);
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_4 = (List_1_t74A1330085B8247FB17128749F92AD552C221D8B *)il2cpp_codegen_object_new(List_1_t74A1330085B8247FB17128749F92AD552C221D8B_il2cpp_TypeInfo_var);
		List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2(L_4, L_3, /*hidden argument*/List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2_RuntimeMethod_var);
		__this->set__childNodes_1(L_4);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_5 = __this->get__node_0();
		NullCheck(L_5);
		XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * L_6;
		L_6 = VirtFuncInvoker0< XmlNodeList_t1DBBA2CC948CC6631BC33AA7405E11C8105E6EE9 * >::Invoke(11 /* System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes() */, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerator System.Xml.XmlNodeList::GetEnumerator() */, L_6);
		V_0 = L_7;
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0053;
		}

IL_0036:
		{
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			RuntimeObject * L_9;
			L_9 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			V_1 = ((XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *)CastclassClass((RuntimeObject*)L_9, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1_il2cpp_TypeInfo_var));
			List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_10 = __this->get__childNodes_1();
			XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_11 = V_1;
			RuntimeObject* L_12;
			L_12 = XmlNodeWrapper_WrapNode_m9C8EEDA41584745DDCF730EA4D398B7AAA5F8FCA(L_11, /*hidden argument*/NULL);
			NullCheck(L_10);
			List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B(L_10, L_12, /*hidden argument*/List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B_RuntimeMethod_var);
		}

IL_0053:
		{
			RuntimeObject* L_13 = V_0;
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_0036;
			}
		}

IL_005b:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_005d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005d;
	}

FINALLY_005d:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_15 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_006d;
			}
		}

IL_0067:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_006d:
		{
			IL2CPP_END_FINALLY(93)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(93)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_18 = __this->get__childNodes_1();
		return L_18;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::WrapNode(System.Xml.XmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_WrapNode_m9C8EEDA41584745DDCF730EA4D398B7AAA5F8FCA (XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = ___node0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(9 /* System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)10))))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)17))))
		{
			goto IL_0023;
		}
	}
	{
		goto IL_003b;
	}

IL_0017:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_5 = ___node0;
		XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC * L_6 = (XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC *)il2cpp_codegen_object_new(XmlElementWrapper_t37F29B4DD1CBAB18EBB44DB01B099AC7F9C092FC_il2cpp_TypeInfo_var);
		XmlElementWrapper__ctor_m157ADA9353970E9FAF97F67406CFF891477D8A0C(L_6, ((XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF *)CastclassClass((RuntimeObject*)L_5, XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_6;
	}

IL_0023:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_7 = ___node0;
		XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D * L_8 = (XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D *)il2cpp_codegen_object_new(XmlDeclarationWrapper_tDCF370FF98FBD6036A65250C9547EDE2C121C71D_il2cpp_TypeInfo_var);
		XmlDeclarationWrapper__ctor_mF51839B7636CC91F7B4CD908F24712F5913A91B4(L_8, ((XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC *)CastclassClass((RuntimeObject*)L_7, XmlDeclaration_t9B0761DBF73F334D6C22AB2040EBA814414F25BC_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_8;
	}

IL_002f:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_9 = ___node0;
		XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26 * L_10 = (XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26 *)il2cpp_codegen_object_new(XmlDocumentTypeWrapper_t62010A5658EA89811D773F5EF7B2D85B5F4ECB26_il2cpp_TypeInfo_var);
		XmlDocumentTypeWrapper__ctor_m675661950897A7EF2E7EC820E79E337D2B6A307A(L_10, ((XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F *)CastclassClass((RuntimeObject*)L_9, XmlDocumentType_t55BFF797BDB36BC814FF1749F054F8AC70DE1B3F_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return L_10;
	}

IL_003b:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_11 = ___node0;
		XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * L_12 = (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 *)il2cpp_codegen_object_new(XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87_il2cpp_TypeInfo_var);
		XmlNodeWrapper__ctor_mF3A07DBAE9040226F2311FB40CFC36E3D4A06696(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Collections.Generic.List`1<Newtonsoft.Json.Converters.IXmlNode> Newtonsoft.Json.Converters.XmlNodeWrapper::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t74A1330085B8247FB17128749F92AD552C221D8B * XmlNodeWrapper_get_Attributes_m1B7F1A6A957384108048432F5D29A737985C2272 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t74A1330085B8247FB17128749F92AD552C221D8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		NullCheck(L_0);
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_1;
		L_1 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_0);
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		return (List_1_t74A1330085B8247FB17128749F92AD552C221D8B *)NULL;
	}

IL_000f:
	{
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_2 = __this->get__attributes_2();
		if (L_2)
		{
			goto IL_007d;
		}
	}
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3 = __this->get__node_0();
		NullCheck(L_3);
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_4;
		L_4 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_3);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Int32 System.Xml.XmlNamedNodeMap::get_Count() */, L_4);
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_6 = (List_1_t74A1330085B8247FB17128749F92AD552C221D8B *)il2cpp_codegen_object_new(List_1_t74A1330085B8247FB17128749F92AD552C221D8B_il2cpp_TypeInfo_var);
		List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2(L_6, L_5, /*hidden argument*/List_1__ctor_mA8FA6333E24CB3AD6EF75A8F95B106E6BA3528C2_RuntimeMethod_var);
		__this->set__attributes_2(L_6);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_7 = __this->get__node_0();
		NullCheck(L_7);
		XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * L_8;
		L_8 = VirtFuncInvoker0< XmlAttributeCollection_tDC800F98FE32D4723967772453EB600D1C368AA3 * >::Invoke(14 /* System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes() */, L_7);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator System.Xml.XmlNamedNodeMap::GetEnumerator() */, L_8);
		V_0 = L_9;
	}

IL_0043:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0062;
		}

IL_0045:
		{
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			RuntimeObject * L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			V_1 = ((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)CastclassClass((RuntimeObject*)L_11, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var));
			List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_12 = __this->get__attributes_2();
			XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D * L_13 = V_1;
			RuntimeObject* L_14;
			L_14 = XmlNodeWrapper_WrapNode_m9C8EEDA41584745DDCF730EA4D398B7AAA5F8FCA(L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B(L_12, L_14, /*hidden argument*/List_1_Add_m2023A0BD68F1F1225CFE54926FB92E23D06CF85B_RuntimeMethod_var);
		}

IL_0062:
		{
			RuntimeObject* L_15 = V_0;
			NullCheck(L_15);
			bool L_16;
			L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			if (L_16)
			{
				goto IL_0045;
			}
		}

IL_006a:
		{
			IL2CPP_LEAVE(0x7D, FINALLY_006c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006c;
	}

FINALLY_006c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_17 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_17, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_18 = V_2;
			if (!L_18)
			{
				goto IL_007c;
			}
		}

IL_0076:
		{
			RuntimeObject* L_19 = V_2;
			NullCheck(L_19);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_19);
		}

IL_007c:
		{
			IL2CPP_END_FINALLY(108)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(108)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7D, IL_007d)
	}

IL_007d:
	{
		List_1_t74A1330085B8247FB17128749F92AD552C221D8B * L_20 = __this->get__attributes_2();
		return L_20;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::get_ParentNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_get_ParentNode_mA3050973561B78E1A1E351650EA472F9ED9E20E7 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * V_0 = NULL;
	XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * G_B3_0 = NULL;
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		if (((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)IsInstClass((RuntimeObject*)L_0, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var)))
		{
			goto IL_001a;
		}
	}
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = __this->get__node_0();
		NullCheck(L_1);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_2;
		L_2 = VirtFuncInvoker0< XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * >::Invoke(10 /* System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode() */, L_1);
		G_B3_0 = L_2;
		goto IL_002a;
	}

IL_001a:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3 = __this->get__node_0();
		NullCheck(((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)CastclassClass((RuntimeObject*)L_3, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var)));
		XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * L_4;
		L_4 = VirtFuncInvoker0< XmlElement_tF11C508FEEF5FBE169DCE4A7538BE55B1F0C4BCF * >::Invoke(47 /* System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement() */, ((XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D *)CastclassClass((RuntimeObject*)L_3, XmlAttribute_t3F58A4BDFB486D0E610E4003E54A89BCCB65AB6D_il2cpp_TypeInfo_var)));
		G_B3_0 = ((XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *)(L_4));
	}

IL_002a:
	{
		V_0 = G_B3_0;
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0030:
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_6 = V_0;
		RuntimeObject* L_7;
		L_7 = XmlNodeWrapper_WrapNode_m9C8EEDA41584745DDCF730EA4D398B7AAA5F8FCA(L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_Value_m3D4DFCAF37EB795F4DCABFAC1218A0F480524906 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Xml.XmlNode::get_Value() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Converters.XmlNodeWrapper::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlNodeWrapper_set_Value_mCD70A93D6BB065E22E5B95C595760B1016F50B2B (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(8 /* System.Void System.Xml.XmlNode::set_Value(System.String) */, L_0, L_1);
		return;
	}
}
// Newtonsoft.Json.Converters.IXmlNode Newtonsoft.Json.Converters.XmlNodeWrapper::AppendChild(Newtonsoft.Json.Converters.IXmlNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlNodeWrapper_AppendChild_m45B56420F35A5551CAA42C7DFDF626CE89D46683 (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, RuntimeObject* ___newChild0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * V_0 = NULL;
	{
		RuntimeObject* L_0 = ___newChild0;
		V_0 = ((XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 *)CastclassClass((RuntimeObject*)L_0, XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87_il2cpp_TypeInfo_var));
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_1 = __this->get__node_0();
		XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * L_2 = V_0;
		NullCheck(L_2);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_3 = L_2->get__node_0();
		NullCheck(L_1);
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_4;
		L_4 = VirtFuncInvoker1< XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 *, XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * >::Invoke(22 /* System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode) */, L_1, L_3);
		__this->set__childNodes_1((List_1_t74A1330085B8247FB17128749F92AD552C221D8B *)NULL);
		__this->set__attributes_2((List_1_t74A1330085B8247FB17128749F92AD552C221D8B *)NULL);
		RuntimeObject* L_5 = ___newChild0;
		return L_5;
	}
}
// System.String Newtonsoft.Json.Converters.XmlNodeWrapper::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlNodeWrapper_get_NamespaceUri_mE0FB57B60FABD0803612C8684560DF02E96F0F1E (XmlNodeWrapper_tBBD32C8654A63FF45DD7001051180005DE01FD87 * __this, const RuntimeMethod* method)
{
	{
		XmlNode_t26782CDADA207DFC891B2772C8DB236DD3D324A1 * L_0 = __this->get__node_0();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(29 /* System.String System.Xml.XmlNode::get_NamespaceURI() */, L_0);
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
// System.Void Newtonsoft.Json.Bson.BsonReader/ContainerContext::.ctor(Newtonsoft.Json.Bson.BsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContainerContext__ctor_mF86EB449E15CDE1475F14AED4BAB8ED211B11538 (ContainerContext_tEF8F7D9BBE5FEF04001388CA926FBF92A0FF1EB6 * __this, int8_t ___type0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int8_t L_0 = ___type0;
		__this->set_Type_0(L_0);
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
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_m4653E8351F4D11A3B08E53288804CEE1426865AE (U3CU3Ec__DisplayClass9_0_t43D3430E491049C1671F5DB5E87D1AE477F4BE59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0::<CreateCastConverter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_m975EB3858A619504CD18AD42480412E4AE43087F (U3CU3Ec__DisplayClass9_0_t43D3430E491049C1671F5DB5E87D1AE477F4BE59 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * L_0 = __this->get_call_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___o0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		RuntimeObject * L_4;
		L_4 = MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512(L_0, NULL, L_2, /*hidden argument*/MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_pinvoke(const TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776& unmarshaled, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_pinvoke_back(const TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_pinvoke& marshaled, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_pinvoke_cleanup(TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_com(const TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776& unmarshaled, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_com& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_com_back(const TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_com& marshaled, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshal_com_cleanup(TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_marshaled_com& marshaled)
{
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m2672D4C423F105D7036F00FCF1A8C9FF7141292D (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_InitialType_m2672D4C423F105D7036F00FCF1A8C9FF7141292D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = TypeConvertKey_get_InitialType_m2672D4C423F105D7036F00FCF1A8C9FF7141292D_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m42A90982418CA92A7CC99C23007A9F0A8D9353C4 (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_TargetType_m42A90982418CA92A7CC99C23007A9F0A8D9353C4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	Type_t * _returnValue;
	_returnValue = TypeConvertKey_get_TargetType_m42A90982418CA92A7CC99C23007A9F0A8D9353C4_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mE7D0FEEB17A875CA3F8E0180A6E2F811F076097E (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___initialType0;
		__this->set__initialType_0(L_0);
		Type_t * L_1 = ___targetType1;
		__this->set__targetType_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeConvertKey__ctor_mE7D0FEEB17A875CA3F8E0180A6E2F811F076097E_AdjustorThunk (RuntimeObject * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	TypeConvertKey__ctor_mE7D0FEEB17A875CA3F8E0180A6E2F811F076097E(_thisAdjusted, ___initialType0, ___targetType1, method);
}
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_m53EEF50076A23F2DD2069C13D70FE12480A72EC6 (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__targetType_1();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t TypeConvertKey_GetHashCode_m53EEF50076A23F2DD2069C13D70FE12480A72EC6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TypeConvertKey_GetHashCode_m53EEF50076A23F2DD2069C13D70FE12480A72EC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mBEC43674C2C9C1B78030AD4CC1715062E0DD09CC (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = TypeConvertKey_Equals_mCFB617A4360BB185698B4EC5B25BEC2BD0876D79((TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *)__this, ((*(TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *)((TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *)UnBox(L_1, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_mBEC43674C2C9C1B78030AD4CC1715062E0DD09CC_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeConvertKey_Equals_mBEC43674C2C9C1B78030AD4CC1715062E0DD09CC(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mCFB617A4360BB185698B4EC5B25BEC2BD0876D79 (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776  ___other0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776  L_1 = ___other0;
		Type_t * L_2 = L_1.get__initialType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_3 = __this->get__targetType_1();
		TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776  L_4 = ___other0;
		Type_t * L_5 = L_4.get__targetType_1();
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_mCFB617A4360BB185698B4EC5B25BEC2BD0876D79_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeConvertKey_Equals_mCFB617A4360BB185698B4EC5B25BEC2BD0876D79(_thisAdjusted, ___other0, method);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m9EC269757B26B4813E589B1123CE120B3A497D63 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * L_0 = (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB *)il2cpp_codegen_object_new(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2C5546AB35B398F2D78330D6129B7BBCC3203F68(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2C5546AB35B398F2D78330D6129B7BBCC3203F68 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__30_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__30_0_m791D70C99D4E33A1E15062413EEE62AD562037B9 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionUtils_IsIndexedProperty_m45D58103C9DC9D7A573E63801BBCCF19EFA61BDA(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetSerializableMembers>b__30_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__30_1_m96B3B053393D6561BAF8CF797FECE97F4449E526 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = ReflectionUtils_IsIndexedProperty_m45D58103C9DC9D7A573E63801BBCCF19EFA61BDA(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__33_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__33_0_m6EB667E080CF02AC04A3F1034A99CDBA75721A2D (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, Type_t * ___baseType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_0 = (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *)il2cpp_codegen_object_new(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334(L_0, /*hidden argument*/List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_1 = L_0;
		Type_t * L_2 = ___baseType0;
		NullCheck(L_2);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_3;
		L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(57 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64(L_1, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_4 = L_1;
		Type_t * L_5 = ___baseType0;
		NullCheck(L_5);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_6;
		L_6 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_5, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m41673C7F5F2837C71C8834F6E7B34BEB1D3B3C64_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetExtensionDataMemberForType>b__33_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__33_1_m85DF46087A841A2D787F963CFAEFE18A13A78746 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonExtensionDataAttribute_t426D280AC809DEA22A0A8E64681AF85D411297E2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___m0;
		int32_t L_1;
		L_1 = TypeExtensions_MemberType_m6169F34B91C472E863D8B0040EC001B9B7A8300A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (JsonExtensionDataAttribute_t426D280AC809DEA22A0A8E64681AF85D411297E2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6;
		L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_4, L_6, (bool)0);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		MemberInfo_t * L_8 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = ReflectionUtils_CanReadMemberValue_m924E5AE82FD3A6F3168CC7A977C329F15D7B8B7C(L_8, (bool)1, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10;
		L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_11 = ___m0;
		NullCheck(L_11);
		Type_t * L_12;
		L_12 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_t37F80A2009EC514A70EACD436E1F0D5CF911A30C_il2cpp_TypeInfo_var)));
		String_t* L_13;
		L_13 = DefaultContractResolver_GetClrTypeFullName_m2BEF05EC12DB3ADEEC64C96CB5DC3BA6C7317B80(L_12, /*hidden argument*/NULL);
		MemberInfo_t * L_14 = ___m0;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		String_t* L_16;
		L_16 = StringUtils_FormatWith_mA780395FEF887F07DE6C1018243B910B911A87D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF)), L_10, L_13, L_15, /*hidden argument*/NULL);
		JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * L_17 = (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var)));
		JsonException__ctor_mC1855E8561781A110D7242742AD17C18B1E2ACD5(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__33_1_m85DF46087A841A2D787F963CFAEFE18A13A78746_RuntimeMethod_var)));
	}

IL_0056:
	{
		MemberInfo_t * L_18 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = ReflectionUtils_GetMemberUnderlyingType_m94F1EB793484B7FADC83A1AF36E98862918E00BA(L_18, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		bool L_22;
		L_22 = ReflectionUtils_ImplementsGenericDefinition_m348F17ADEBDFF0EFE2B1C14356A9487DA04E53A8(L_19, L_21, (Type_t **)(&V_1), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_24;
		L_24 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(105 /* System.Type[] System.Type::GetGenericArguments() */, L_23);
		NullCheck(L_24);
		int32_t L_25 = 0;
		Type_t * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Type_t * L_27 = V_1;
		NullCheck(L_27);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28;
		L_28 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(105 /* System.Type[] System.Type::GetGenericArguments() */, L_27);
		NullCheck(L_28);
		int32_t L_29 = 1;
		Type_t * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = L_30;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_33;
		L_33 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_32);
		if (!L_33)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_34 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36;
		L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_37;
		L_37 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_34, L_36);
		if (!L_37)
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)1;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_38;
		L_38 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_39 = ___m0;
		NullCheck(L_39);
		Type_t * L_40;
		L_40 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultContractResolver_t37F80A2009EC514A70EACD436E1F0D5CF911A30C_il2cpp_TypeInfo_var)));
		String_t* L_41;
		L_41 = DefaultContractResolver_GetClrTypeFullName_m2BEF05EC12DB3ADEEC64C96CB5DC3BA6C7317B80(L_40, /*hidden argument*/NULL);
		MemberInfo_t * L_42 = ___m0;
		NullCheck(L_42);
		String_t* L_43;
		L_43 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_42);
		String_t* L_44;
		L_44 = StringUtils_FormatWith_mA780395FEF887F07DE6C1018243B910B911A87D5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957)), L_38, L_41, L_43, /*hidden argument*/NULL);
		JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * L_45 = (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var)));
		JsonException__ctor_mC1855E8561781A110D7242742AD17C18B1E2ACD5(L_45, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__33_1_m85DF46087A841A2D787F963CFAEFE18A13A78746_RuntimeMethod_var)));
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<GetAttributeConstructor>b__36_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAttributeConstructorU3Eb__36_0_mF5A8F2BF2D689DB11587DF0ED6EEFB1FEA5528CF (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConstructorAttribute_t1631D1458AE9EBDBE0FF940FD3EE885E05C8ABBC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (JsonConstructorAttribute_t1631D1458AE9EBDBE0FF940FD3EE885E05C8ABBC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::<CreateProperties>b__60_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreatePropertiesU3Eb__60_0_m548D20C07CB10339108D20AA39BC742B50214E47 (U3CU3Ec_tDE640B7BAC06573F011A0A0D8627B03E988438EB * __this, JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_0 = ___p0;
		NullCheck(L_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1;
		L_1 = JsonProperty_get_Order_m8DC4EBE07E682CD6208BD1A39A244DE3BAB93D2A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int32_t L_3;
		L_3 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_0__ctor_m393BA3E0F7DE7A199719ABD4F8F001A2A5EE5BA3 (U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_1__ctor_m80069CCCBF43FC0EFE8DA673B7272EF997504808 (U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_1::<SetExtensionDataDelegates>b__0(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_1_U3CSetExtensionDataDelegatesU3Eb__0_mBDE9A222B6950113F7F7AFE0F2E87069E77F77BD (U3CU3Ec__DisplayClass34_1_t1D0EBBEECFEDD9EE232804842F08204C1E0B7817 * __this, RuntimeObject * ___o0, String_t* ___key1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * L_0 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_5 = __this->get_setExtensionDataDictionary_0();
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
		L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * L_7 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_7);
		MemberInfo_t * L_8 = L_7->get_member_1();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		String_t* L_10;
		L_10 = StringUtils_FormatWith_mA88108ED0CDF74A30989A7B14A393D7A5292DFDD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7)), L_6, L_9, /*hidden argument*/NULL);
		JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934 * L_11 = (JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonSerializationException_tF4FBB26947E10A23AFDD6F88B7D98CC126FA2934_il2cpp_TypeInfo_var)));
		JsonSerializationException__ctor_mE0EA4480BC4246503121539E1D97555D480D016A(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass34_1_U3CSetExtensionDataDelegatesU3Eb__0_mBDE9A222B6950113F7F7AFE0F2E87069E77F77BD_RuntimeMethod_var)));
	}

IL_0042:
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_12 = __this->get_createExtensionDataDictionary_1();
		NullCheck(L_12);
		RuntimeObject * L_13;
		L_13 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_12, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		V_0 = L_13;
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_14 = __this->get_setExtensionDataDictionary_0();
		RuntimeObject * L_15 = ___o0;
		RuntimeObject * L_16 = V_0;
		NullCheck(L_14);
		Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382(L_14, L_15, L_16, /*hidden argument*/Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
	}

IL_005b:
	{
		MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * L_17 = __this->get_setExtensionDataDictionaryValue_2();
		RuntimeObject * L_18 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		String_t* L_21 = ___key1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		RuntimeObject * L_23 = ___value2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		NullCheck(L_17);
		RuntimeObject * L_24;
		L_24 = MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512(L_17, L_18, L_22, /*hidden argument*/MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass34_2__ctor_m0B6F49294BD09EE559FB8374BE7D9603696A0FC0 (U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass34_2::<SetExtensionDataDelegates>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass34_2_U3CSetExtensionDataDelegatesU3Eb__1_mB7F0EF1B70A312CCEFBF0080B26B017BF9A7BCC4 (U3CU3Ec__DisplayClass34_2_tE6E0A4AA38ACC1AD5B69C6E8EDE089A57C36D5CB * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass34_0_t80392D3E13F56BB71CFFEDBDD603CF78EF98A834 * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0017:
	{
		ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * L_5 = __this->get_createEnumerableWrapper_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		RuntimeObject * L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_5);
		RuntimeObject * L_9;
		L_9 = ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF(L_5, L_7, /*hidden argument*/ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_RuntimeMethod_var);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var));
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass64_0__ctor_m0304B49F10D0EA4482684904DA5523E733F54C4F (U3CU3Ec__DisplayClass64_0_t910C8B175019A1DA267C3A6B0C68945940500DFD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass64_0::<CreateShouldSerializeTest>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass64_0_U3CCreateShouldSerializeTestU3Eb__0_mC859EFE3BD0D275D1A42806AFD781A5DE407DD1C (U3CU3Ec__DisplayClass64_0_t910C8B175019A1DA267C3A6B0C68945940500DFD * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * L_0 = __this->get_shouldSerializeCall_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_3, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass65_0__ctor_m317EFA126E76F58FDB02D5BF3FCD6EDE1549226C (U3CU3Ec__DisplayClass65_0_t066031DE9D0858E9D5DDB304E8AEC95B9819FCF0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass65_0::<SetIsSpecifiedActions>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass65_0_U3CSetIsSpecifiedActionsU3Eb__0_m8D10BDDA860CF015E1ABC8B45CD874BF48ACB8A6 (U3CU3Ec__DisplayClass65_0_t066031DE9D0858E9D5DDB304E8AEC95B9819FCF0 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_0 = __this->get_specifiedPropertyGet_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_0, L_1, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
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
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_pinvoke(const TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F& unmarshaled, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_pinvoke& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_pinvoke_back(const TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_pinvoke& marshaled, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_string_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_pinvoke_cleanup(TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_com(const TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F& unmarshaled, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_com& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_com_back(const TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_com& marshaled, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshal_com_cleanup(TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_mD4B4C258C07B7B90E3DF9FF8E544F235DEF91414 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___assemblyName0;
		__this->set_AssemblyName_0(L_0);
		String_t* L_1 = ___typeName1;
		__this->set_TypeName_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeNameKey__ctor_mD4B4C258C07B7B90E3DF9FF8E544F235DEF91414_AdjustorThunk (RuntimeObject * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * _thisAdjusted = reinterpret_cast<TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *>(__this + _offset);
	TypeNameKey__ctor_mD4B4C258C07B7B90E3DF9FF8E544F235DEF91414(_thisAdjusted, ___assemblyName0, ___typeName1, method);
}
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_m39B4CC4974DA019307688EB5C98DF95C979DE6DB (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = __this->get_AssemblyName_0();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		String_t* L_3 = __this->get_TypeName_1();
		G_B4_0 = G_B3_0;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			goto IL_0021;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_0021:
	{
		String_t* L_4 = __this->get_TypeName_1();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		return ((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t TypeNameKey_GetHashCode_m39B4CC4974DA019307688EB5C98DF95C979DE6DB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * _thisAdjusted = reinterpret_cast<TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = TypeNameKey_GetHashCode_m39B4CC4974DA019307688EB5C98DF95C979DE6DB(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mA8F9631B58F24FA621BC3773D773F504CD394476 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = TypeNameKey_Equals_mF640FAB58FACF8E193583786EE162430F96E7037((TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *)__this, ((*(TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *)((TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *)UnBox(L_1, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_mA8F9631B58F24FA621BC3773D773F504CD394476_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * _thisAdjusted = reinterpret_cast<TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeNameKey_Equals_mA8F9631B58F24FA621BC3773D773F504CD394476(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_mF640FAB58FACF8E193583786EE162430F96E7037 (TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * __this, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F  ___other0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F  L_1 = ___other0;
		String_t* L_2 = L_1.get_AssemblyName_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = __this->get_TypeName_1();
		TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F  L_5 = ___other0;
		String_t* L_6 = L_5.get_TypeName_1();
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_mF640FAB58FACF8E193583786EE162430F96E7037_AdjustorThunk (RuntimeObject * __this, TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F * _thisAdjusted = reinterpret_cast<TypeNameKey_tE813AF052ABC26C54A64E0FE7B5A02FD05D68E5F *>(__this + _offset);
	bool _returnValue;
	_returnValue = TypeNameKey_Equals_mF640FAB58FACF8E193583786EE162430F96E7037(_thisAdjusted, ___other0, method);
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
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3E691EABF39DFA96C9C95DF752360C493D82BAFF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * L_0 = (U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 *)il2cpp_codegen_object_new(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m44DED9A94D6B8FEE56E0C7D65018B05371398247(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m44DED9A94D6B8FEE56E0C7D65018B05371398247 (U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils/<>c::<InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_mF3B966590EAA425C2876209B94A65D2055AE4A46 (U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * __this, EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * ___a0, const RuntimeMethod* method)
{
	{
		EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.EnumUtils/<>c::<GetValues>b__5_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetValuesU3Eb__5_0_m8821A781D3A878CF0320AB0157C69CDE323A4B59 (U3CU3Ec_tCBF47F4EE8ECC397BE4B68F40E4B2D8A7CFF7D71 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Linq.Extensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD2443C2152213F30596C36B27A4E005EC6D82A1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * L_0 = (U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 *)il2cpp_codegen_object_new(U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m891AF27D89FAD73E6AA355C447B81716A36E9662(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.Extensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m891AF27D89FAD73E6AA355C447B81716A36E9662 (U3CU3Ec_tDC86F68CD6D9BBAD988629C5157C9C68E9A72AE7 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7EEF846654F2D1CFF676E42FACC541FB8B03B654 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * L_0 = (U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 *)il2cpp_codegen_object_new(U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mA41EC449EB8039C963A52956BB235FD09D59CFD2(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JsonPath.FieldMultipleFilter/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA41EC449EB8039C963A52956BB235FD09D59CFD2 (U3CU3Ec_t18D13B5306B7BA298AD1168186BC43F01DFE2742 * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Linq.JObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m7061F0865CB68A5E9071B17B024354074CC40FCA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * L_0 = (U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 *)il2cpp_codegen_object_new(U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m12583814D2DBDF9197EF3849980DBCDC5C608CE3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m12583814D2DBDF9197EF3849980DBCDC5C608CE3 (U3CU3Ec_t2F04D39263D6DA6C7DC6C2E8D5BBADC9719C4448 * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58__ctor_m872F5FDD4EEEE735615237623B5CBA293F6850F5 (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58_System_IDisposable_Dispose_m86F73AE814F57F2B03CF9B5B80042C9F90C62135 (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__58_U3CU3Em__Finally1_m55F7EF214234CB5AE172B1391E27AD0C2B53C1CC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__58_MoveNext_m1297E0B4E2DF44667D5B78C3F6BB3FBDCB9DA966 (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Collection_1_GetEnumerator_m193B31C4FCE2D4BC6FA182CDAE0FE735067C67FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF743DB02A21C8D73EC6907A07AA56D55471FAF94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mC43547A680374633E0221034BFB5C0702525AE10_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_006f;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_009c;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_tD2FCDDA48CACDBCB702BAF49B7C649084F6FDA34 * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			JPropertyKeyedCollection_t219F62CD15C1D6C625D656744FB107DDC5710E39 * L_4 = L_3->get__properties_16();
			NullCheck(L_4);
			RuntimeObject* L_5;
			L_5 = Collection_1_GetEnumerator_m193B31C4FCE2D4BC6FA182CDAE0FE735067C67FD(L_4, /*hidden argument*/Collection_1_GetEnumerator_m193B31C4FCE2D4BC6FA182CDAE0FE735067C67FD_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0077;
		}

IL_003c:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_6);
			JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_7;
			L_7 = InterfaceFuncInvoker0< JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tF743DB02A21C8D73EC6907A07AA56D55471FAF94_il2cpp_TypeInfo_var, L_6);
			V_2 = ((JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA *)CastclassClass((RuntimeObject*)L_7, JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA_il2cpp_TypeInfo_var));
			JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9;
			L_9 = JProperty_get_Name_m4B909198F27EFED895AF6E2EFB90F2A22F86E411_inline(L_8, /*hidden argument*/NULL);
			JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * L_10 = V_2;
			NullCheck(L_10);
			JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_11;
			L_11 = JProperty_get_Value_m6E4A8DB7DF48E5C9AEB1DF22A36FC70F5B63DFB7(L_10, /*hidden argument*/NULL);
			KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  L_12;
			memset((&L_12), 0, sizeof(L_12));
			KeyValuePair_2__ctor_mC43547A680374633E0221034BFB5C0702525AE10((&L_12), L_9, L_11, /*hidden argument*/KeyValuePair_2__ctor_mC43547A680374633E0221034BFB5C0702525AE10_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009c;
		}

IL_006f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0077:
		{
			RuntimeObject* L_13 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_13);
			bool L_14;
			L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_003c;
			}
		}

IL_0084:
		{
			U3CGetEnumeratorU3Ed__58_U3CU3Em__Finally1_m55F7EF214234CB5AE172B1391E27AD0C2B53C1CC(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0095;
	}

FAULT_0095:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__58_System_IDisposable_Dispose_m86F73AE814F57F2B03CF9B5B80042C9F90C62135(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(149)
	} // end fault
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58_U3CU3Em__Finally1_m55F7EF214234CB5AE172B1391E27AD0C2B53C1CC (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  U3CGetEnumeratorU3Ed__58_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_Current_m71CBA61881E0B0809CE43CC3D24F2D3B9F389468 (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__58_System_Collections_IEnumerator_Reset_m26EE8DC5BDCE81F7E904EF44D29ACA1208AC16BF (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__58_System_Collections_IEnumerator_Reset_m26EE8DC5BDCE81F7E904EF44D29ACA1208AC16BF_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__58::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__58_System_Collections_IEnumerator_get_Current_mCB0A9772FABE1AEF2AE58CC5E7AFEFB9D67A6A3B (U3CGetEnumeratorU3Ed__58_tE0CF3F660624B3FFA2767C038586665C1323F207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t9585352F1262B05812137CD6E781AB5A20EE5F87_il2cpp_TypeInfo_var, &L_1);
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
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_m6298870EC6AF369B8C315832F172AF93EC2A6D8E (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * L_0 = (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_mC49E159103879D4883943B820EDF7233CFEAD55A(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JProperty/JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_mA00003A29FB9254EC0967204B5014E29F38C3AB3 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = JPropertyList_GetEnumerator_m6298870EC6AF369B8C315832F172AF93EC2A6D8E(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_m837EF41C7D9BA5556766A5C22B5477454B8FAE81 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_m03650052A7E0F5EC6547A167A7CC8761BD011A11 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Contains(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_mD81C0C3A194305EAF6B738DC9AD99272217C6C99 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get__token_0();
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = ___item0;
		return (bool)((((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_0) == ((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_1))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_mCC957484BA57042BE9D900DD363A51BAD54A2D21 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, JTokenU5BU5D_t0DD412086018A817EDF01B3DAA748E9B6ED12475* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get__token_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JTokenU5BU5D_t0DD412086018A817EDF01B3DAA748E9B6ED12475* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_3 = __this->get__token_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_3);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::Remove(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_m950B0354B86312B65065ECD49D32119373F7B717 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get__token_0();
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = ___item0;
		if ((!(((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_0) == ((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)NULL);
		return (bool)1;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_mE8FCC0B8372587C49BD357673C610F0D5297CC29 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_m89ABAC2E57A8D610897EC9963A1F66D7614C5080 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty/JPropertyList::IndexOf(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_m750A7A87FFB5F418EAAAE68B4AAC315861268917 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get__token_0();
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_0) == ((RuntimeObject*)(JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m0FD9E5D4253A0F2669AF475FA7E3B669FF02EE61 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, int32_t ___index0, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = ___item1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_mF73C39A1FEC0869A1DF21D0A9CDCEADF55B47EF1 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__token_0((JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)NULL);
	}

IL_000a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * JPropertyList_get_Item_m4DC467682227207DE9576A0A9FFC2A06BA039DAD (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 *)NULL;
	}

IL_0005:
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = __this->get__token_0();
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_mF83B138BD7E00567EF50A00AEA712F309FC458C8 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, int32_t ___index0, JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_1 = ___value1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_m63BD4D2D4FFEAAD459547F36CF2065452B042324 (JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Linq.JToken/LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_m45F8C31152F816EEC11212E29FCD281E0D038C34 (LineInfoAnnotation_tB64712BA428235F77072DE132CE5D35F7AB5D52A * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_mDE3BBA79D3D24F07C649FFFC6EA9050BAF9E0F1C (U3CU3Ec__DisplayClass73_0_t7FA43FB052545BC1E43D4C07F04A468FACD1CC59 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CCreateSerializationCallbackU3Eb__0_m0CCC486045F01CB1ABC8F6D058C7AEB3FB9938B9 (U3CU3Ec__DisplayClass73_0_t7FA43FB052545BC1E43D4C07F04A468FACD1CC59 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_0);
		RuntimeObject * L_7;
		L_7 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m2039C4E4C4667BFA834AF8CBA55F60AC674ED227 (U3CU3Ec__DisplayClass74_0_t2BFB41B91825532A3C9EBEE914AFBA98451E8726 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CCreateSerializationErrorCallbackU3Eb__0_m6FE49A01A57F2D55E9C05CD142AEB158F2F19452 (U3CU3Ec__DisplayClass74_0_t2BFB41B91825532A3C9EBEE914AFBA98451E8726 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0 * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_t32869E11E2BB954F39E06D87DCBF37EF887D87B0 * L_8 = ___econtext2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_0);
		RuntimeObject * L_9;
		L_9 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
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
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_mBE0FDE09DEFB94D4A18D89BE52FAA99C2C8784AC (ReferenceEqualsEqualityComparer_t010754200AA57FC047ADC0CDA0E0101ED46D791E * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_mA70F644AB9839D31065574E6EFC2F39CEABC3D81 (ReferenceEqualsEqualityComparer_t010754200AA57FC047ADC0CDA0E0101ED46D791E * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1;
		L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m53539D43C1367A9014A0D5AE7C1BA9006444C47B (ReferenceEqualsEqualityComparer_t010754200AA57FC047ADC0CDA0E0101ED46D791E * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m3C3094F0A38E4065FE127CDA58174DBD9E4F7CDB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * L_0 = (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA *)il2cpp_codegen_object_new(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m197909213DCD3EA6A9B847D52B274909ADB01C0B(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m197909213DCD3EA6A9B847D52B274909ADB01C0B (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__36_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_0_m54E3311FDB8CCB7E64803F09F014E12333C4ECE2 (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m851570734464B93D7F2246206C28968FC26D6505_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<CreateObjectUsingCreatorWithParameters>b__36_2(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_2_m9C87A724A2224B19E8AD4BCCF6D0633E61FCBA3B (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = JsonProperty_get_PropertyName_m851570734464B93D7F2246206C28968FC26D6505_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * U3CU3Ec_U3CPopulateObjectU3Eb__41_0_mD7A16E3DA463CEA1F861A6607449112C70B509CE (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_0 = ___m0;
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::<PopulateObject>b__41_1(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__41_1_mF4BCEE23113F422519BD0DFDC812DFE65FD69F48 (U3CU3Ec_t971E8B12B9A6FD0743BA9DC42FF98B083273E4CA * __this, JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mC863D859C9704D6D335339502E8C991324810635 (U3CU3Ec__DisplayClass36_0_t8AC3FC48834E6E9D54EFE58B05FFD80CE3FFC440 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0::<CreateObjectUsingCreatorWithParameters>b__1(Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_mF669F8BFE84823AA5FE418E1474EC2DDC62133E6 (U3CU3Ec__DisplayClass36_0_t8AC3FC48834E6E9D54EFE58B05FFD80CE3FFC440 * __this, CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1 * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1 * L_0 = ___p0;
		NullCheck(L_0);
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_1 = L_0->get_Property_1();
		JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 *)L_1) == ((RuntimeObject*)(JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_m866EFFCAF18327FBC0189EDE0DACE665F154DA56 (CreatorPropertyContext_t82894DF721C6B9CA2B247EA6FA7B42A17382D9B1 * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.JsonSerializerSettings/<>c__DisplayClass90_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass90_0__ctor_mEB76F3955B036C72D1DEC286FDAE082BE9823736 (U3CU3Ec__DisplayClass90_0_tF4854E2504C48977ADB38499719B479F78AF575F * __this, const RuntimeMethod* method)
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
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m49395C8BF101A655C64A8A6DB02E5483378EB255 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * L_0 = (U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 *)il2cpp_codegen_object_new(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m33C772708BBE9354F6F02B61BFABCCF96CE85045(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m33C772708BBE9354F6F02B61BFABCCF96CE85045 (U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::<GetJsonConverterCreator>b__18_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetJsonConverterCreatorU3Eb__18_1_m10633A41FD86AC5D98E39BEA3E6C9B21369C6D8F (U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass18_0__ctor_m891E1B133F71FB2FD7A7A98E7322328B3B1BA7B5 (U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass18_0::<GetJsonConverterCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * U3CU3Ec__DisplayClass18_0_U3CGetJsonConverterCreatorU3Eb__0_m5DBE4619CA16BD48EF1F50A1E2A83F922159BEA6 (U3CU3Ec__DisplayClass18_0_t081A0CF4049F36F3B43EB38201C9D0BBE992FC4D * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonTypeReflector_t50F18C1B9D80F37BF58A282F0C1B3B1F2DF91D76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetJsonConverterCreatorU3Eb__18_1_m10633A41FD86AC5D98E39BEA3E6C9B21369C6D8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * V_2 = NULL;
	Exception_t * V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B2_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			if (!L_0)
			{
				goto IL_0072;
			}
		}

IL_0003:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_2 = ((U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var))->get_U3CU3E9__18_1_1();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_3 = L_2;
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			if (L_3)
			{
				G_B3_0 = L_3;
				G_B3_1 = L_1;
				goto IL_0023;
			}
		}

IL_000c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var);
			U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65 * L_4 = ((U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_5 = (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *)il2cpp_codegen_object_new(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
			Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetJsonConverterCreatorU3Eb__18_1_m10633A41FD86AC5D98E39BEA3E6C9B21369C6D8F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_6 = L_5;
			((U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tF95D78163C572A3BCE0B59B2D5861A1026DA7C65_il2cpp_TypeInfo_var))->set_U3CU3E9__18_1_1(L_6);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_0023:
		{
			RuntimeObject* L_7;
			L_7 = Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258((RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8;
			L_8 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
			V_0 = L_8;
			Type_t * L_9 = __this->get_converterType_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
			NullCheck(L_9);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11;
			L_11 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_9, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = V_1;
			if (!L_12)
			{
				goto IL_0057;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t50F18C1B9D80F37BF58A282F0C1B3B1F2DF91D76_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_tA921B8AB108475BA7411A09164265D5725FEC7C9 * L_13;
			L_13 = JsonTypeReflector_get_ReflectionDelegateFactory_m51141B018BF3854A0C3236A7DD6247C719B868D0(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_14 = V_1;
			NullCheck(L_13);
			ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 * L_15;
			L_15 = VirtFuncInvoker1< ObjectConstructor_1_t500064E9B42515401C2BD5EB2A16313527FFA1F3 *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_13, L_14);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = ___parameters0;
			NullCheck(L_15);
			RuntimeObject * L_17;
			L_17 = ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF(L_15, L_16, /*hidden argument*/ObjectConstructor_1_Invoke_mEEF983DDB5478D9BCD05FD278D91FB596D6700CF_RuntimeMethod_var);
			V_2 = ((JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 *)CastclassClass((RuntimeObject*)L_17, JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242_il2cpp_TypeInfo_var));
			goto IL_00c5;
		}

IL_0057:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_18;
			L_18 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_19 = __this->get_converterType_0();
			String_t* L_20;
			L_20 = StringUtils_FormatWith_mA88108ED0CDF74A30989A7B14A393D7A5292DFDD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B)), L_18, L_19, /*hidden argument*/NULL);
			JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * L_21 = (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var)));
			JsonException__ctor_mC1855E8561781A110D7242742AD17C18B1E2ACD5(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetJsonConverterCreatorU3Eb__0_m5DBE4619CA16BD48EF1F50A1E2A83F922159BEA6_RuntimeMethod_var)));
		}

IL_0072:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_22 = __this->get_defaultConstructor_1();
			if (L_22)
			{
				goto IL_0095;
			}
		}

IL_007a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_23;
			L_23 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_24 = __this->get_converterType_0();
			String_t* L_25;
			L_25 = StringUtils_FormatWith_mA88108ED0CDF74A30989A7B14A393D7A5292DFDD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184)), L_23, L_24, /*hidden argument*/NULL);
			JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * L_26 = (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var)));
			JsonException__ctor_mC1855E8561781A110D7242742AD17C18B1E2ACD5(L_26, L_25, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetJsonConverterCreatorU3Eb__0_m5DBE4619CA16BD48EF1F50A1E2A83F922159BEA6_RuntimeMethod_var)));
		}

IL_0095:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_27 = __this->get_defaultConstructor_1();
			NullCheck(L_27);
			RuntimeObject * L_28;
			L_28 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_27, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
			V_2 = ((JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 *)CastclassClass((RuntimeObject*)L_28, JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242_il2cpp_TypeInfo_var));
			goto IL_00c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a8;
		}
		throw e;
	}

CATCH_00a8:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var)));
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_29;
		L_29 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_30 = __this->get_converterType_0();
		String_t* L_31;
		L_31 = StringUtils_FormatWith_mA88108ED0CDF74A30989A7B14A393D7A5292DFDD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442)), L_29, L_30, /*hidden argument*/NULL);
		Exception_t * L_32 = V_3;
		JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 * L_33 = (JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tAD70A6A2536289458F3B62300668BE56A4A50166_il2cpp_TypeInfo_var)));
		JsonException__ctor_m5BC13634D631AA9D03E3A6E50539784F6F69461D(L_33, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass18_0_U3CGetJsonConverterCreatorU3Eb__0_m5DBE4619CA16BD48EF1F50A1E2A83F922159BEA6_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_00c5:
	{
		JsonConverter_tA7DD130015793717E2EB2AE6E6184D06769EE242 * L_34 = V_2;
		return L_34;
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
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m284ADEC97F298D777146D5B676D3E4E2DF017CB1 (U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m10158FA5080CF58CD0869216D25D4EA37301748D (U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___a0;
		V_0 = L_0;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_1 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_3;
		L_3 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_m3CAAE331CBBB15539A0E2A2AA6410252DD05844C (U3CU3Ec__DisplayClass3_0_t61861C9A8AEF3220062D193F59063E8638BEDE70 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable/Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable/Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_mD29E897D893C91A2933F87A8F1CC9D6BE8DF16D6 (Entry_tD42BECCBE255C43533FE588B543794E909F9598C * __this, String_t* ___value0, int32_t ___hashCode1, Entry_tD42BECCBE255C43533FE588B543794E909F9598C * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_tD42BECCBE255C43533FE588B543794E909F9598C * L_2 = ___next2;
		__this->set_Next_2(L_2);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m5BEC8931A7CFA6F2562DF252E1D0557042E856D7 (U3CU3Ec__DisplayClass13_0_tE3DEDBD28EB941194DF86C0B5EA1B4A20DC52264 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m94CD2B6E95976B8BB1C937BBAF665334662288FA (U3CU3Ec__DisplayClass13_0_tE3DEDBD28EB941194DF86C0B5EA1B4A20DC52264 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_mE629E8AA7BF56EEEF814F151A65A4B1D6AFA7806 (U3CU3Ec__DisplayClass13_1_t54B62B5B56B71AE77AA2D06E353373B8C476BE63 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mA4CEB8DCDB87B0B62F376E8761712FA105337E9B (U3CU3Ec__DisplayClass13_1_t54B62B5B56B71AE77AA2D06E353373B8C476BE63 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3;
		L_3 = MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2__ctor_m7942108C02C4C534B2E24DFCAF50C1365918A8FD (U3CU3Ec__DisplayClass13_2_t39EC8C7DE413CBA8E426811A5329D392EAA90008 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m1AD4537D3CE56E60192F194146C0DFF6CF9F0A26 (U3CU3Ec__DisplayClass13_2_t39EC8C7DE413CBA8E426811A5329D392EAA90008 * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_tFCEFBCF8E9B9BA4699C72DC3A0DE8B7B053E6F8F * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		RuntimeObject * L_5;
		L_5 = MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_m7C536F9A1A560F65CE44C1E825623F8F8EC79512_RuntimeMethod_var);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCF4C3631A1BD5C3B61ED05E30940B5E361B28828 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * L_0 = (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 *)il2cpp_codegen_object_new(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mDA33AA8E118D1D8277E3467575C9E5B9AB628E46(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mDA33AA8E118D1D8277E3467575C9E5B9AB628E46 (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetDefaultConstructor>b__10_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_m17815478D5DCADBBD2A6AA34250EDF5A111E5B78 (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1;
		L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2;
		L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetFieldsAndProperties>b__29_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m916E1FDF7C53DFA1D4BD32052B264443CE1E94CA (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetMemberInfoFromType>b__37_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m06E1B0E80F071C82CF50F5817F9AAF8FD3A56E8A (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c::<GetChildPrivateFields>b__39_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m8AC377D32B6BAC80570452D84F2D48EB9E7BE7DD (U3CU3Ec_t72C8CF4781F1FAF90057083FC9DA410CE4AC2A27 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1;
		L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_mEF8413C4DF73A6067FF49DE2D7778969478194EE (U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m39CF962B54FA7C2F29532D4648AA7C5B39F1BED0 (U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m6AB570883720965760F59B80DD4EB93F25C2329D (U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6;
		L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8;
		L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		return (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_mD5D8631346ECB05F7F0494A567ADDC31ABE42E70 (U3CU3Ec__DisplayClass42_0_t222B93EC4AC40AABD71FAAA8675B9DA0161DE572 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = ReflectionUtils_IsVirtual_m5E3C3F5E5935BFE21832F5B3445C3AC12F3855E9(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_7 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		MethodInfo_t * L_8;
		L_8 = ReflectionUtils_GetBaseDefinition_m67824E17C1BBD63AB035FB49B76229EC0560677E(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_9 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t3816B11C589D1ACC171DB6CC6729C9B4935533F3_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10;
		L_10 = ReflectionUtils_GetBaseDefinition_m67824E17C1BBD63AB035FB49B76229EC0560677E(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Type_t * L_11;
		L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		PropertyInfo_t * L_12 = __this->get_subTypeProperty_0();
		MethodInfo_t * L_13;
		L_13 = ReflectionUtils_GetBaseDefinition_m67824E17C1BBD63AB035FB49B76229EC0560677E(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Type_t * L_14;
		L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		NullCheck(L_11);
		bool L_15;
		L_15 = VirtFuncInvoker1< bool, Type_t * >::Invoke(117 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_11, L_14);
		return L_15;
	}

IL_0049:
	{
		return (bool)0;
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
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass43_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass43_0__ctor_m5138CDE6D850BD643FC997D06EA4D21B6DD22739 (U3CU3Ec__DisplayClass43_0_t62C286175BC3B1F0209D3272A4BE08EEB9AA8E9F * __this, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mC49E159103879D4883943B820EDF7233CFEAD55A (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_m17C4D1B2A19AAD8D5788B5E76415F986431B8498 (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_m9C859FCA23B8E6DF1A7FBA98CD929751168FC38D (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, const RuntimeMethod* method)
{
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
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_4 = L_3->get__token_0();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		JPropertyList_tB2C92F30593A7B50650C5328DEA55A1BA9907173 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_6 = L_5->get__token_0();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0045:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m07AC2CA7D788EA56432549B7C02C0778568C61B1 (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mADE13DCBAB70A428878E701CA49C487991D70F72 (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_mADE13DCBAB70A428878E701CA49C487991D70F72_RuntimeMethod_var)));
	}
}
// System.Object Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_m4EB98DC969BC1C587317776FAAD9DAACFDDAE32E (U3CGetEnumeratorU3Ed__1_tD472E588598565F6DDCD87863BF2A2291476290C * __this, const RuntimeMethod* method)
{
	{
		JToken_t78F4E878E41125BB40B529918D104EDDC99E00C9 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m2672D4C423F105D7036F00FCF1A8C9FF7141292D_inline (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m42A90982418CA92A7CC99C23007A9F0A8D9353C4_inline (TypeConvertKey_t06AAB19058DFA6B904289E2ADCE048BCBA108776 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_m8DC4EBE07E682CD6208BD1A39A244DE3BAB93D2A_inline (JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3COrderU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m4B909198F27EFED895AF6E2EFB90F2A22F86E411_inline (JProperty_tED3C78DEBF398FFBE8537B883BE72C7060EE25CA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m851570734464B93D7F2246206C28968FC26D6505_inline (JsonProperty_t8F2960BA001820829D8A3EA78F8D2D75ACCADBD3 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__propertyName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return (int32_t)L_0;
	}
}
