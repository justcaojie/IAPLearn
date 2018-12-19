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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// PurchaseManager
struct PurchaseManager_t1431997891;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product>
struct Dictionary_2_t3029666358;
// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String>
struct Dictionary_2_t2070795836;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product>
struct HashSet_1_t1809359533;
// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>
struct HashSet_1_t3199643908;
// System.Func`2<UnityEngine.Purchasing.Product,System.String>
struct Func_2_t1313482816;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;
// Uniject.IUtil
struct IUtil_t1069285358;
// UnityEngine.ILogger
struct ILogger_t2607134790;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Purchasing.CloudCatalogImpl
struct CloudCatalogImpl_t1580312503;
// UnityEngine.Purchasing.ConfigurationBuilder
struct ConfigurationBuilder_t1618671084;
// UnityEngine.Purchasing.Extension.IPurchasingBinder
struct IPurchasingBinder_t3569785493;
// UnityEngine.Purchasing.Extension.IPurchasingModule
struct IPurchasingModule_t960499109;
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t3784316456;
// UnityEngine.Purchasing.IAsyncWebUtil
struct IAsyncWebUtil_t965808653;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t3180538779;
// UnityEngine.Purchasing.INativeStoreProvider
struct INativeStoreProvider_t2882146526;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t2579314702;
// UnityEngine.Purchasing.IStoreListener
struct IStoreListener_t2917505531;
// UnityEngine.Purchasing.Product
struct Product_t3244410059;
// UnityEngine.Purchasing.ProductCollection
struct ProductCollection_t2671956229;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t339727138;
// UnityEngine.Purchasing.ProductMetadata
struct ProductMetadata_t3417118930;
// UnityEngine.Purchasing.Product[]
struct ProductU5BU5D_t2942947242;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t3033159582;
// UnityEngine.Purchasing.PurchasingFactory
struct PurchasingFactory_t4012818695;
// UnityEngine.Purchasing.StandardPurchasingModule
struct StandardPurchasingModule_t2580735509;
// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct StoreInstance_t2416643455;
// UnityEngine.Purchasing.WinRTStore
struct WinRTStore_t2015085940;

extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* IPurchasingModuleU5BU5D_t3784316456_il2cpp_TypeInfo_var;
extern RuntimeClass* IStoreController_t2579314702_il2cpp_TypeInfo_var;
extern RuntimeClass* StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1104108180;
extern String_t* _stringLiteral1165201205;
extern String_t* _stringLiteral1416590052;
extern String_t* _stringLiteral1924515939;
extern String_t* _stringLiteral1991485510;
extern String_t* _stringLiteral2206906855;
extern String_t* _stringLiteral3049534516;
extern String_t* _stringLiteral3057638430;
extern String_t* _stringLiteral3258212029;
extern String_t* _stringLiteral3440199867;
extern String_t* _stringLiteral3828846158;
extern String_t* _stringLiteral487361662;
extern String_t* _stringLiteral719124244;
extern String_t* _stringLiteral797180344;
extern String_t* _stringLiteral992438477;
extern const uint32_t PurchaseManager_OnInitializeFailed_m1109158774_MetadataUsageId;
extern const uint32_t PurchaseManager_OnInitialized_m1597874905_MetadataUsageId;
extern const uint32_t PurchaseManager_OnPurchaseClicked_m680424208_MetadataUsageId;
extern const uint32_t PurchaseManager_OnPurchaseFailed_m1928244146_MetadataUsageId;
extern const uint32_t PurchaseManager_OnPurchaseOk_m4160008679_MetadataUsageId;
extern const uint32_t PurchaseManager_ProcessPurchase_m4228055808_MetadataUsageId;
extern const uint32_t PurchaseManager_Start_m1344440083_MetadataUsageId;

struct IPurchasingModuleU5BU5D_t3784316456;


#ifndef U3CMODULEU3E_T692745560_H
#define U3CMODULEU3E_T692745560_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745560 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745560_H
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
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef CONFIGURATIONBUILDER_T1618671084_H
#define CONFIGURATIONBUILDER_T1618671084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ConfigurationBuilder
struct  ConfigurationBuilder_t1618671084  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::m_Factory
	PurchasingFactory_t4012818695 * ___m_Factory_0;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::m_Products
	HashSet_1_t3199643908 * ___m_Products_1;
	// System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::<useCatalogProvider>k__BackingField
	bool ___U3CuseCatalogProviderU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Factory_0() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___m_Factory_0)); }
	inline PurchasingFactory_t4012818695 * get_m_Factory_0() const { return ___m_Factory_0; }
	inline PurchasingFactory_t4012818695 ** get_address_of_m_Factory_0() { return &___m_Factory_0; }
	inline void set_m_Factory_0(PurchasingFactory_t4012818695 * value)
	{
		___m_Factory_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Factory_0), value);
	}

	inline static int32_t get_offset_of_m_Products_1() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___m_Products_1)); }
	inline HashSet_1_t3199643908 * get_m_Products_1() const { return ___m_Products_1; }
	inline HashSet_1_t3199643908 ** get_address_of_m_Products_1() { return &___m_Products_1; }
	inline void set_m_Products_1(HashSet_1_t3199643908 * value)
	{
		___m_Products_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Products_1), value);
	}

	inline static int32_t get_offset_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ConfigurationBuilder_t1618671084, ___U3CuseCatalogProviderU3Ek__BackingField_2)); }
	inline bool get_U3CuseCatalogProviderU3Ek__BackingField_2() const { return ___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CuseCatalogProviderU3Ek__BackingField_2() { return &___U3CuseCatalogProviderU3Ek__BackingField_2; }
	inline void set_U3CuseCatalogProviderU3Ek__BackingField_2(bool value)
	{
		___U3CuseCatalogProviderU3Ek__BackingField_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONBUILDER_T1618671084_H
#ifndef ABSTRACTPURCHASINGMODULE_T2882497868_H
#define ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Extension.AbstractPurchasingModule
struct  AbstractPurchasingModule_t2882497868  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Extension.IPurchasingBinder UnityEngine.Purchasing.Extension.AbstractPurchasingModule::m_Binder
	RuntimeObject* ___m_Binder_0;

public:
	inline static int32_t get_offset_of_m_Binder_0() { return static_cast<int32_t>(offsetof(AbstractPurchasingModule_t2882497868, ___m_Binder_0)); }
	inline RuntimeObject* get_m_Binder_0() const { return ___m_Binder_0; }
	inline RuntimeObject** get_address_of_m_Binder_0() { return &___m_Binder_0; }
	inline void set_m_Binder_0(RuntimeObject* value)
	{
		___m_Binder_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Binder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTPURCHASINGMODULE_T2882497868_H
#ifndef PRODUCT_T3244410059_H
#define PRODUCT_T3244410059_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Product
struct  Product_t3244410059  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::<definition>k__BackingField
	ProductDefinition_t339727138 * ___U3CdefinitionU3Ek__BackingField_0;
	// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::<metadata>k__BackingField
	ProductMetadata_t3417118930 * ___U3CmetadataU3Ek__BackingField_1;
	// System.Boolean UnityEngine.Purchasing.Product::<availableToPurchase>k__BackingField
	bool ___U3CavailableToPurchaseU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.Product::<transactionID>k__BackingField
	String_t* ___U3CtransactionIDU3Ek__BackingField_3;
	// System.String UnityEngine.Purchasing.Product::<receipt>k__BackingField
	String_t* ___U3CreceiptU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CdefinitionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CdefinitionU3Ek__BackingField_0)); }
	inline ProductDefinition_t339727138 * get_U3CdefinitionU3Ek__BackingField_0() const { return ___U3CdefinitionU3Ek__BackingField_0; }
	inline ProductDefinition_t339727138 ** get_address_of_U3CdefinitionU3Ek__BackingField_0() { return &___U3CdefinitionU3Ek__BackingField_0; }
	inline void set_U3CdefinitionU3Ek__BackingField_0(ProductDefinition_t339727138 * value)
	{
		___U3CdefinitionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CdefinitionU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CmetadataU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CmetadataU3Ek__BackingField_1)); }
	inline ProductMetadata_t3417118930 * get_U3CmetadataU3Ek__BackingField_1() const { return ___U3CmetadataU3Ek__BackingField_1; }
	inline ProductMetadata_t3417118930 ** get_address_of_U3CmetadataU3Ek__BackingField_1() { return &___U3CmetadataU3Ek__BackingField_1; }
	inline void set_U3CmetadataU3Ek__BackingField_1(ProductMetadata_t3417118930 * value)
	{
		___U3CmetadataU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CmetadataU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CavailableToPurchaseU3Ek__BackingField_2)); }
	inline bool get_U3CavailableToPurchaseU3Ek__BackingField_2() const { return ___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CavailableToPurchaseU3Ek__BackingField_2() { return &___U3CavailableToPurchaseU3Ek__BackingField_2; }
	inline void set_U3CavailableToPurchaseU3Ek__BackingField_2(bool value)
	{
		___U3CavailableToPurchaseU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CtransactionIDU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CtransactionIDU3Ek__BackingField_3)); }
	inline String_t* get_U3CtransactionIDU3Ek__BackingField_3() const { return ___U3CtransactionIDU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CtransactionIDU3Ek__BackingField_3() { return &___U3CtransactionIDU3Ek__BackingField_3; }
	inline void set_U3CtransactionIDU3Ek__BackingField_3(String_t* value)
	{
		___U3CtransactionIDU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtransactionIDU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CreceiptU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Product_t3244410059, ___U3CreceiptU3Ek__BackingField_4)); }
	inline String_t* get_U3CreceiptU3Ek__BackingField_4() const { return ___U3CreceiptU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CreceiptU3Ek__BackingField_4() { return &___U3CreceiptU3Ek__BackingField_4; }
	inline void set_U3CreceiptU3Ek__BackingField_4(String_t* value)
	{
		___U3CreceiptU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CreceiptU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCT_T3244410059_H
#ifndef PRODUCTCOLLECTION_T2671956229_H
#define PRODUCTCOLLECTION_T2671956229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCollection
struct  ProductCollection_t2671956229  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_IdToProduct
	Dictionary_2_t3029666358 * ___m_IdToProduct_0;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_StoreSpecificIdToProduct
	Dictionary_2_t3029666358 * ___m_StoreSpecificIdToProduct_1;
	// UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::m_Products
	ProductU5BU5D_t2942947242* ___m_Products_2;
	// System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::m_ProductSet
	HashSet_1_t1809359533 * ___m_ProductSet_3;

public:
	inline static int32_t get_offset_of_m_IdToProduct_0() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_IdToProduct_0)); }
	inline Dictionary_2_t3029666358 * get_m_IdToProduct_0() const { return ___m_IdToProduct_0; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_IdToProduct_0() { return &___m_IdToProduct_0; }
	inline void set_m_IdToProduct_0(Dictionary_2_t3029666358 * value)
	{
		___m_IdToProduct_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_IdToProduct_0), value);
	}

	inline static int32_t get_offset_of_m_StoreSpecificIdToProduct_1() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_StoreSpecificIdToProduct_1)); }
	inline Dictionary_2_t3029666358 * get_m_StoreSpecificIdToProduct_1() const { return ___m_StoreSpecificIdToProduct_1; }
	inline Dictionary_2_t3029666358 ** get_address_of_m_StoreSpecificIdToProduct_1() { return &___m_StoreSpecificIdToProduct_1; }
	inline void set_m_StoreSpecificIdToProduct_1(Dictionary_2_t3029666358 * value)
	{
		___m_StoreSpecificIdToProduct_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_StoreSpecificIdToProduct_1), value);
	}

	inline static int32_t get_offset_of_m_Products_2() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_Products_2)); }
	inline ProductU5BU5D_t2942947242* get_m_Products_2() const { return ___m_Products_2; }
	inline ProductU5BU5D_t2942947242** get_address_of_m_Products_2() { return &___m_Products_2; }
	inline void set_m_Products_2(ProductU5BU5D_t2942947242* value)
	{
		___m_Products_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Products_2), value);
	}

	inline static int32_t get_offset_of_m_ProductSet_3() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229, ___m_ProductSet_3)); }
	inline HashSet_1_t1809359533 * get_m_ProductSet_3() const { return ___m_ProductSet_3; }
	inline HashSet_1_t1809359533 ** get_address_of_m_ProductSet_3() { return &___m_ProductSet_3; }
	inline void set_m_ProductSet_3(HashSet_1_t1809359533 * value)
	{
		___m_ProductSet_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_ProductSet_3), value);
	}
};

struct ProductCollection_t2671956229_StaticFields
{
public:
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache0
	Func_2_t1313482816 * ___U3CU3Ef__amU24cache0_4;
	// System.Func`2<UnityEngine.Purchasing.Product,System.String> UnityEngine.Purchasing.ProductCollection::<>f__am$cache1
	Func_2_t1313482816 * ___U3CU3Ef__amU24cache1_5;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_4() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229_StaticFields, ___U3CU3Ef__amU24cache0_4)); }
	inline Func_2_t1313482816 * get_U3CU3Ef__amU24cache0_4() const { return ___U3CU3Ef__amU24cache0_4; }
	inline Func_2_t1313482816 ** get_address_of_U3CU3Ef__amU24cache0_4() { return &___U3CU3Ef__amU24cache0_4; }
	inline void set_U3CU3Ef__amU24cache0_4(Func_2_t1313482816 * value)
	{
		___U3CU3Ef__amU24cache0_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache0_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_5() { return static_cast<int32_t>(offsetof(ProductCollection_t2671956229_StaticFields, ___U3CU3Ef__amU24cache1_5)); }
	inline Func_2_t1313482816 * get_U3CU3Ef__amU24cache1_5() const { return ___U3CU3Ef__amU24cache1_5; }
	inline Func_2_t1313482816 ** get_address_of_U3CU3Ef__amU24cache1_5() { return &___U3CU3Ef__amU24cache1_5; }
	inline void set_U3CU3Ef__amU24cache1_5(Func_2_t1313482816 * value)
	{
		___U3CU3Ef__amU24cache1_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cache1_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTCOLLECTION_T2671956229_H
#ifndef PURCHASEEVENTARGS_T3033159582_H
#define PURCHASEEVENTARGS_T3033159582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseEventArgs
struct  PurchaseEventArgs_t3033159582  : public RuntimeObject
{
public:
	// UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::<purchasedProduct>k__BackingField
	Product_t3244410059 * ___U3CpurchasedProductU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CpurchasedProductU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(PurchaseEventArgs_t3033159582, ___U3CpurchasedProductU3Ek__BackingField_0)); }
	inline Product_t3244410059 * get_U3CpurchasedProductU3Ek__BackingField_0() const { return ___U3CpurchasedProductU3Ek__BackingField_0; }
	inline Product_t3244410059 ** get_address_of_U3CpurchasedProductU3Ek__BackingField_0() { return &___U3CpurchasedProductU3Ek__BackingField_0; }
	inline void set_U3CpurchasedProductU3Ek__BackingField_0(Product_t3244410059 * value)
	{
		___U3CpurchasedProductU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CpurchasedProductU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEEVENTARGS_T3033159582_H
#ifndef DECIMAL_T2948259380_H
#define DECIMAL_T2948259380_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Decimal
struct  Decimal_t2948259380 
{
public:
	// System.UInt32 System.Decimal::flags
	uint32_t ___flags_5;
	// System.UInt32 System.Decimal::hi
	uint32_t ___hi_6;
	// System.UInt32 System.Decimal::lo
	uint32_t ___lo_7;
	// System.UInt32 System.Decimal::mid
	uint32_t ___mid_8;

public:
	inline static int32_t get_offset_of_flags_5() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___flags_5)); }
	inline uint32_t get_flags_5() const { return ___flags_5; }
	inline uint32_t* get_address_of_flags_5() { return &___flags_5; }
	inline void set_flags_5(uint32_t value)
	{
		___flags_5 = value;
	}

	inline static int32_t get_offset_of_hi_6() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___hi_6)); }
	inline uint32_t get_hi_6() const { return ___hi_6; }
	inline uint32_t* get_address_of_hi_6() { return &___hi_6; }
	inline void set_hi_6(uint32_t value)
	{
		___hi_6 = value;
	}

	inline static int32_t get_offset_of_lo_7() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___lo_7)); }
	inline uint32_t get_lo_7() const { return ___lo_7; }
	inline uint32_t* get_address_of_lo_7() { return &___lo_7; }
	inline void set_lo_7(uint32_t value)
	{
		___lo_7 = value;
	}

	inline static int32_t get_offset_of_mid_8() { return static_cast<int32_t>(offsetof(Decimal_t2948259380, ___mid_8)); }
	inline uint32_t get_mid_8() const { return ___mid_8; }
	inline uint32_t* get_address_of_mid_8() { return &___mid_8; }
	inline void set_mid_8(uint32_t value)
	{
		___mid_8 = value;
	}
};

struct Decimal_t2948259380_StaticFields
{
public:
	// System.Decimal System.Decimal::MinValue
	Decimal_t2948259380  ___MinValue_0;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2948259380  ___MaxValue_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2948259380  ___MinusOne_2;
	// System.Decimal System.Decimal::One
	Decimal_t2948259380  ___One_3;
	// System.Decimal System.Decimal::MaxValueDiv10
	Decimal_t2948259380  ___MaxValueDiv10_4;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinValue_0)); }
	inline Decimal_t2948259380  get_MinValue_0() const { return ___MinValue_0; }
	inline Decimal_t2948259380 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(Decimal_t2948259380  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValue_1)); }
	inline Decimal_t2948259380  get_MaxValue_1() const { return ___MaxValue_1; }
	inline Decimal_t2948259380 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(Decimal_t2948259380  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinusOne_2() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MinusOne_2)); }
	inline Decimal_t2948259380  get_MinusOne_2() const { return ___MinusOne_2; }
	inline Decimal_t2948259380 * get_address_of_MinusOne_2() { return &___MinusOne_2; }
	inline void set_MinusOne_2(Decimal_t2948259380  value)
	{
		___MinusOne_2 = value;
	}

	inline static int32_t get_offset_of_One_3() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___One_3)); }
	inline Decimal_t2948259380  get_One_3() const { return ___One_3; }
	inline Decimal_t2948259380 * get_address_of_One_3() { return &___One_3; }
	inline void set_One_3(Decimal_t2948259380  value)
	{
		___One_3 = value;
	}

	inline static int32_t get_offset_of_MaxValueDiv10_4() { return static_cast<int32_t>(offsetof(Decimal_t2948259380_StaticFields, ___MaxValueDiv10_4)); }
	inline Decimal_t2948259380  get_MaxValueDiv10_4() const { return ___MaxValueDiv10_4; }
	inline Decimal_t2948259380 * get_address_of_MaxValueDiv10_4() { return &___MaxValueDiv10_4; }
	inline void set_MaxValueDiv10_4(Decimal_t2948259380  value)
	{
		___MaxValueDiv10_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMAL_T2948259380_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef APPSTORE_T355301105_H
#define APPSTORE_T355301105_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.AppStore
struct  AppStore_t355301105 
{
public:
	// System.Int32 UnityEngine.Purchasing.AppStore::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AppStore_t355301105, ___value___1)); }
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
#endif // APPSTORE_T355301105_H
#ifndef FAKESTOREUIMODE_T680685637_H
#define FAKESTOREUIMODE_T680685637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.FakeStoreUIMode
struct  FakeStoreUIMode_t680685637 
{
public:
	// System.Int32 UnityEngine.Purchasing.FakeStoreUIMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FakeStoreUIMode_t680685637, ___value___1)); }
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
#endif // FAKESTOREUIMODE_T680685637_H
#ifndef INITIALIZATIONFAILUREREASON_T2740567704_H
#define INITIALIZATIONFAILUREREASON_T2740567704_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.InitializationFailureReason
struct  InitializationFailureReason_t2740567704 
{
public:
	// System.Int32 UnityEngine.Purchasing.InitializationFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(InitializationFailureReason_t2740567704, ___value___1)); }
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
#endif // INITIALIZATIONFAILUREREASON_T2740567704_H
#ifndef PRODUCTMETADATA_T3417118930_H
#define PRODUCTMETADATA_T3417118930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductMetadata
struct  ProductMetadata_t3417118930  : public RuntimeObject
{
public:
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedPriceString>k__BackingField
	String_t* ___U3ClocalizedPriceStringU3Ek__BackingField_0;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedTitle>k__BackingField
	String_t* ___U3ClocalizedTitleU3Ek__BackingField_1;
	// System.String UnityEngine.Purchasing.ProductMetadata::<localizedDescription>k__BackingField
	String_t* ___U3ClocalizedDescriptionU3Ek__BackingField_2;
	// System.String UnityEngine.Purchasing.ProductMetadata::<isoCurrencyCode>k__BackingField
	String_t* ___U3CisoCurrencyCodeU3Ek__BackingField_3;
	// System.Decimal UnityEngine.Purchasing.ProductMetadata::<localizedPrice>k__BackingField
	Decimal_t2948259380  ___U3ClocalizedPriceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceStringU3Ek__BackingField_0)); }
	inline String_t* get_U3ClocalizedPriceStringU3Ek__BackingField_0() const { return ___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3ClocalizedPriceStringU3Ek__BackingField_0() { return &___U3ClocalizedPriceStringU3Ek__BackingField_0; }
	inline void set_U3ClocalizedPriceStringU3Ek__BackingField_0(String_t* value)
	{
		___U3ClocalizedPriceStringU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedPriceStringU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedTitleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedTitleU3Ek__BackingField_1)); }
	inline String_t* get_U3ClocalizedTitleU3Ek__BackingField_1() const { return ___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3ClocalizedTitleU3Ek__BackingField_1() { return &___U3ClocalizedTitleU3Ek__BackingField_1; }
	inline void set_U3ClocalizedTitleU3Ek__BackingField_1(String_t* value)
	{
		___U3ClocalizedTitleU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedTitleU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedDescriptionU3Ek__BackingField_2)); }
	inline String_t* get_U3ClocalizedDescriptionU3Ek__BackingField_2() const { return ___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3ClocalizedDescriptionU3Ek__BackingField_2() { return &___U3ClocalizedDescriptionU3Ek__BackingField_2; }
	inline void set_U3ClocalizedDescriptionU3Ek__BackingField_2(String_t* value)
	{
		___U3ClocalizedDescriptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3ClocalizedDescriptionU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3CisoCurrencyCodeU3Ek__BackingField_3)); }
	inline String_t* get_U3CisoCurrencyCodeU3Ek__BackingField_3() const { return ___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CisoCurrencyCodeU3Ek__BackingField_3() { return &___U3CisoCurrencyCodeU3Ek__BackingField_3; }
	inline void set_U3CisoCurrencyCodeU3Ek__BackingField_3(String_t* value)
	{
		___U3CisoCurrencyCodeU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CisoCurrencyCodeU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3ClocalizedPriceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ProductMetadata_t3417118930, ___U3ClocalizedPriceU3Ek__BackingField_4)); }
	inline Decimal_t2948259380  get_U3ClocalizedPriceU3Ek__BackingField_4() const { return ___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline Decimal_t2948259380 * get_address_of_U3ClocalizedPriceU3Ek__BackingField_4() { return &___U3ClocalizedPriceU3Ek__BackingField_4; }
	inline void set_U3ClocalizedPriceU3Ek__BackingField_4(Decimal_t2948259380  value)
	{
		___U3ClocalizedPriceU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRODUCTMETADATA_T3417118930_H
#ifndef PRODUCTTYPE_T1868976581_H
#define PRODUCTTYPE_T1868976581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductType
struct  ProductType_t1868976581 
{
public:
	// System.Int32 UnityEngine.Purchasing.ProductType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ProductType_t1868976581, ___value___1)); }
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
#endif // PRODUCTTYPE_T1868976581_H
#ifndef PURCHASEFAILUREREASON_T4243987912_H
#define PURCHASEFAILUREREASON_T4243987912_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseFailureReason
struct  PurchaseFailureReason_t4243987912 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseFailureReason::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PurchaseFailureReason_t4243987912, ___value___1)); }
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
#endif // PURCHASEFAILUREREASON_T4243987912_H
#ifndef PURCHASEPROCESSINGRESULT_T2219688332_H
#define PURCHASEPROCESSINGRESULT_T2219688332_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.PurchaseProcessingResult
struct  PurchaseProcessingResult_t2219688332 
{
public:
	// System.Int32 UnityEngine.Purchasing.PurchaseProcessingResult::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PurchaseProcessingResult_t2219688332, ___value___1)); }
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
#endif // PURCHASEPROCESSINGRESULT_T2219688332_H
#ifndef RUNTIMEPLATFORM_T4159857903_H
#define RUNTIMEPLATFORM_T4159857903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RuntimePlatform
struct  RuntimePlatform_t4159857903 
{
public:
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(RuntimePlatform_t4159857903, ___value___1)); }
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
#endif // RUNTIMEPLATFORM_T4159857903_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef STANDARDPURCHASINGMODULE_T2580735509_H
#define STANDARDPURCHASINGMODULE_T2580735509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule
struct  StandardPurchasingModule_t2580735509  : public AbstractPurchasingModule_t2882497868
{
public:
	// UnityEngine.Purchasing.AppStore UnityEngine.Purchasing.StandardPurchasingModule::m_AppStorePlatform
	int32_t ___m_AppStorePlatform_1;
	// UnityEngine.Purchasing.INativeStoreProvider UnityEngine.Purchasing.StandardPurchasingModule::m_NativeStoreProvider
	RuntimeObject* ___m_NativeStoreProvider_2;
	// UnityEngine.RuntimePlatform UnityEngine.Purchasing.StandardPurchasingModule::m_RuntimePlatform
	int32_t ___m_RuntimePlatform_3;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::m_UseCloudCatalog
	bool ___m_UseCloudCatalog_4;
	// Uniject.IUtil UnityEngine.Purchasing.StandardPurchasingModule::<util>k__BackingField
	RuntimeObject* ___U3CutilU3Ek__BackingField_6;
	// UnityEngine.ILogger UnityEngine.Purchasing.StandardPurchasingModule::<logger>k__BackingField
	RuntimeObject* ___U3CloggerU3Ek__BackingField_7;
	// UnityEngine.Purchasing.IAsyncWebUtil UnityEngine.Purchasing.StandardPurchasingModule::<webUtil>k__BackingField
	RuntimeObject* ___U3CwebUtilU3Ek__BackingField_8;
	// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance UnityEngine.Purchasing.StandardPurchasingModule::<storeInstance>k__BackingField
	StoreInstance_t2416643455 * ___U3CstoreInstanceU3Ek__BackingField_9;
	// UnityEngine.Purchasing.CloudCatalogImpl UnityEngine.Purchasing.StandardPurchasingModule::m_CloudCatalog
	CloudCatalogImpl_t1580312503 * ___m_CloudCatalog_11;
	// UnityEngine.Purchasing.FakeStoreUIMode UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreUIMode>k__BackingField
	int32_t ___U3CuseFakeStoreUIModeU3Ek__BackingField_12;
	// System.Boolean UnityEngine.Purchasing.StandardPurchasingModule::<useFakeStoreAlways>k__BackingField
	bool ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13;
	// UnityEngine.Purchasing.WinRTStore UnityEngine.Purchasing.StandardPurchasingModule::windowsStore
	WinRTStore_t2015085940 * ___windowsStore_14;

public:
	inline static int32_t get_offset_of_m_AppStorePlatform_1() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_AppStorePlatform_1)); }
	inline int32_t get_m_AppStorePlatform_1() const { return ___m_AppStorePlatform_1; }
	inline int32_t* get_address_of_m_AppStorePlatform_1() { return &___m_AppStorePlatform_1; }
	inline void set_m_AppStorePlatform_1(int32_t value)
	{
		___m_AppStorePlatform_1 = value;
	}

	inline static int32_t get_offset_of_m_NativeStoreProvider_2() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_NativeStoreProvider_2)); }
	inline RuntimeObject* get_m_NativeStoreProvider_2() const { return ___m_NativeStoreProvider_2; }
	inline RuntimeObject** get_address_of_m_NativeStoreProvider_2() { return &___m_NativeStoreProvider_2; }
	inline void set_m_NativeStoreProvider_2(RuntimeObject* value)
	{
		___m_NativeStoreProvider_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_NativeStoreProvider_2), value);
	}

	inline static int32_t get_offset_of_m_RuntimePlatform_3() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_RuntimePlatform_3)); }
	inline int32_t get_m_RuntimePlatform_3() const { return ___m_RuntimePlatform_3; }
	inline int32_t* get_address_of_m_RuntimePlatform_3() { return &___m_RuntimePlatform_3; }
	inline void set_m_RuntimePlatform_3(int32_t value)
	{
		___m_RuntimePlatform_3 = value;
	}

	inline static int32_t get_offset_of_m_UseCloudCatalog_4() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_UseCloudCatalog_4)); }
	inline bool get_m_UseCloudCatalog_4() const { return ___m_UseCloudCatalog_4; }
	inline bool* get_address_of_m_UseCloudCatalog_4() { return &___m_UseCloudCatalog_4; }
	inline void set_m_UseCloudCatalog_4(bool value)
	{
		___m_UseCloudCatalog_4 = value;
	}

	inline static int32_t get_offset_of_U3CutilU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CutilU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CutilU3Ek__BackingField_6() const { return ___U3CutilU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CutilU3Ek__BackingField_6() { return &___U3CutilU3Ek__BackingField_6; }
	inline void set_U3CutilU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CutilU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CutilU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CloggerU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CloggerU3Ek__BackingField_7)); }
	inline RuntimeObject* get_U3CloggerU3Ek__BackingField_7() const { return ___U3CloggerU3Ek__BackingField_7; }
	inline RuntimeObject** get_address_of_U3CloggerU3Ek__BackingField_7() { return &___U3CloggerU3Ek__BackingField_7; }
	inline void set_U3CloggerU3Ek__BackingField_7(RuntimeObject* value)
	{
		___U3CloggerU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CloggerU3Ek__BackingField_7), value);
	}

	inline static int32_t get_offset_of_U3CwebUtilU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CwebUtilU3Ek__BackingField_8)); }
	inline RuntimeObject* get_U3CwebUtilU3Ek__BackingField_8() const { return ___U3CwebUtilU3Ek__BackingField_8; }
	inline RuntimeObject** get_address_of_U3CwebUtilU3Ek__BackingField_8() { return &___U3CwebUtilU3Ek__BackingField_8; }
	inline void set_U3CwebUtilU3Ek__BackingField_8(RuntimeObject* value)
	{
		___U3CwebUtilU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebUtilU3Ek__BackingField_8), value);
	}

	inline static int32_t get_offset_of_U3CstoreInstanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CstoreInstanceU3Ek__BackingField_9)); }
	inline StoreInstance_t2416643455 * get_U3CstoreInstanceU3Ek__BackingField_9() const { return ___U3CstoreInstanceU3Ek__BackingField_9; }
	inline StoreInstance_t2416643455 ** get_address_of_U3CstoreInstanceU3Ek__BackingField_9() { return &___U3CstoreInstanceU3Ek__BackingField_9; }
	inline void set_U3CstoreInstanceU3Ek__BackingField_9(StoreInstance_t2416643455 * value)
	{
		___U3CstoreInstanceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstoreInstanceU3Ek__BackingField_9), value);
	}

	inline static int32_t get_offset_of_m_CloudCatalog_11() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___m_CloudCatalog_11)); }
	inline CloudCatalogImpl_t1580312503 * get_m_CloudCatalog_11() const { return ___m_CloudCatalog_11; }
	inline CloudCatalogImpl_t1580312503 ** get_address_of_m_CloudCatalog_11() { return &___m_CloudCatalog_11; }
	inline void set_m_CloudCatalog_11(CloudCatalogImpl_t1580312503 * value)
	{
		___m_CloudCatalog_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_CloudCatalog_11), value);
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CuseFakeStoreUIModeU3Ek__BackingField_12)); }
	inline int32_t get_U3CuseFakeStoreUIModeU3Ek__BackingField_12() const { return ___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CuseFakeStoreUIModeU3Ek__BackingField_12() { return &___U3CuseFakeStoreUIModeU3Ek__BackingField_12; }
	inline void set_U3CuseFakeStoreUIModeU3Ek__BackingField_12(int32_t value)
	{
		___U3CuseFakeStoreUIModeU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13)); }
	inline bool get_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() const { return ___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CuseFakeStoreAlwaysU3Ek__BackingField_13() { return &___U3CuseFakeStoreAlwaysU3Ek__BackingField_13; }
	inline void set_U3CuseFakeStoreAlwaysU3Ek__BackingField_13(bool value)
	{
		___U3CuseFakeStoreAlwaysU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_windowsStore_14() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509, ___windowsStore_14)); }
	inline WinRTStore_t2015085940 * get_windowsStore_14() const { return ___windowsStore_14; }
	inline WinRTStore_t2015085940 ** get_address_of_windowsStore_14() { return &___windowsStore_14; }
	inline void set_windowsStore_14(WinRTStore_t2015085940 * value)
	{
		___windowsStore_14 = value;
		Il2CppCodeGenWriteBarrier((&___windowsStore_14), value);
	}
};

struct StandardPurchasingModule_t2580735509_StaticFields
{
public:
	// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::ModuleInstance
	StandardPurchasingModule_t2580735509 * ___ModuleInstance_5;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Purchasing.AppStore,System.String> UnityEngine.Purchasing.StandardPurchasingModule::AndroidStoreNameMap
	Dictionary_2_t2070795836 * ___AndroidStoreNameMap_10;

public:
	inline static int32_t get_offset_of_ModuleInstance_5() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509_StaticFields, ___ModuleInstance_5)); }
	inline StandardPurchasingModule_t2580735509 * get_ModuleInstance_5() const { return ___ModuleInstance_5; }
	inline StandardPurchasingModule_t2580735509 ** get_address_of_ModuleInstance_5() { return &___ModuleInstance_5; }
	inline void set_ModuleInstance_5(StandardPurchasingModule_t2580735509 * value)
	{
		___ModuleInstance_5 = value;
		Il2CppCodeGenWriteBarrier((&___ModuleInstance_5), value);
	}

	inline static int32_t get_offset_of_AndroidStoreNameMap_10() { return static_cast<int32_t>(offsetof(StandardPurchasingModule_t2580735509_StaticFields, ___AndroidStoreNameMap_10)); }
	inline Dictionary_2_t2070795836 * get_AndroidStoreNameMap_10() const { return ___AndroidStoreNameMap_10; }
	inline Dictionary_2_t2070795836 ** get_address_of_AndroidStoreNameMap_10() { return &___AndroidStoreNameMap_10; }
	inline void set_AndroidStoreNameMap_10(Dictionary_2_t2070795836 * value)
	{
		___AndroidStoreNameMap_10 = value;
		Il2CppCodeGenWriteBarrier((&___AndroidStoreNameMap_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDPURCHASINGMODULE_T2580735509_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef PURCHASEMANAGER_T1431997891_H
#define PURCHASEMANAGER_T1431997891_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PurchaseManager
struct  PurchaseManager_t1431997891  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Purchasing.IStoreController PurchaseManager::controller
	RuntimeObject* ___controller_4;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PurchaseManager_t1431997891, ___controller_4)); }
	inline RuntimeObject* get_controller_4() const { return ___controller_4; }
	inline RuntimeObject** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(RuntimeObject* value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((&___controller_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PURCHASEMANAGER_T1431997891_H
// UnityEngine.Purchasing.Extension.IPurchasingModule[]
struct IPurchasingModuleU5BU5D_t3784316456  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// UnityEngine.Purchasing.StandardPurchasingModule UnityEngine.Purchasing.StandardPurchasingModule::Instance()
extern "C" IL2CPP_METHOD_ATTR StandardPurchasingModule_t2580735509 * StandardPurchasingModule_Instance_m2991111855 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern "C" IL2CPP_METHOD_ATTR ConfigurationBuilder_t1618671084 * ConfigurationBuilder_Instance_m2204111312 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, IPurchasingModuleU5BU5D_t3784316456* p1, const RuntimeMethod* method);
// UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern "C" IL2CPP_METHOD_ATTR ConfigurationBuilder_t1618671084 * ConfigurationBuilder_AddProduct_m788979654 (ConfigurationBuilder_t1618671084 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern "C" IL2CPP_METHOD_ATTR void UnityPurchasing_Initialize_m1836262307 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, ConfigurationBuilder_t1618671084 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C" IL2CPP_METHOD_ATTR void Debug_LogError_m2850623458 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern "C" IL2CPP_METHOD_ATTR Product_t3244410059 * ProductCollection_WithID_m2597694943 (ProductCollection_t2671956229 * __this, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern "C" IL2CPP_METHOD_ATTR ProductMetadata_t3417118930 * Product_get_metadata_m3202120155 (Product_t3244410059 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
extern "C" IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedTitle_m1221956283 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
extern "C" IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedDescription_m2896855065 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
extern "C" IL2CPP_METHOD_ATTR String_t* ProductMetadata_get_localizedPriceString_m3339862584 (ProductMetadata_t3417118930 * __this, const RuntimeMethod* method);
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
// System.Void PurchaseManager::.ctor()
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager__ctor_m2217770607 (PurchaseManager_t1431997891 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PurchaseManager::Start()
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_Start_m1344440083 (PurchaseManager_t1431997891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_Start_m1344440083_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StandardPurchasingModule_t2580735509 * V_0 = NULL;
	ConfigurationBuilder_t1618671084 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StandardPurchasingModule_t2580735509_il2cpp_TypeInfo_var);
		StandardPurchasingModule_t2580735509 * L_0 = StandardPurchasingModule_Instance_m2991111855(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		StandardPurchasingModule_t2580735509 * L_1 = V_0;
		IPurchasingModuleU5BU5D_t3784316456* L_2 = (IPurchasingModuleU5BU5D_t3784316456*)SZArrayNew(IPurchasingModuleU5BU5D_t3784316456_il2cpp_TypeInfo_var, (uint32_t)0);
		ConfigurationBuilder_t1618671084 * L_3 = ConfigurationBuilder_Instance_m2204111312(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		ConfigurationBuilder_t1618671084 * L_4 = V_1;
		NullCheck(L_4);
		ConfigurationBuilder_AddProduct_m788979654(L_4, _stringLiteral487361662, 0, /*hidden argument*/NULL);
		ConfigurationBuilder_t1618671084 * L_5 = V_1;
		UnityPurchasing_Initialize_m1836262307(NULL /*static, unused*/, __this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PurchaseManager::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_OnInitialized_m1597874905 (PurchaseManager_t1431997891 * __this, RuntimeObject* ___controller0, RuntimeObject* ___extensions1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_OnInitialized_m1597874905_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3049534516, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___controller0;
		__this->set_controller_4(L_0);
		return;
	}
}
// System.Void PurchaseManager::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_OnInitializeFailed_m1109158774 (PurchaseManager_t1431997891 * __this, int32_t ___error0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_OnInitializeFailed_m1109158774_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3828846158, /*hidden argument*/NULL);
		int32_t L_0 = ___error0;
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_1 = ___error0;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_2 = ___error0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0041;
		}
	}
	{
		goto IL_0050;
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogError_m2850623458(NULL /*static, unused*/, _stringLiteral3258212029, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0032:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1924515939, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0041:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1416590052, /*hidden argument*/NULL);
		goto IL_0050;
	}

IL_0050:
	{
		return;
	}
}
// UnityEngine.Purchasing.PurchaseProcessingResult PurchaseManager::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C" IL2CPP_METHOD_ATTR int32_t PurchaseManager_ProcessPurchase_m4228055808 (PurchaseManager_t1431997891 * __this, PurchaseEventArgs_t3033159582 * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_ProcessPurchase_m4228055808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1104108180, /*hidden argument*/NULL);
		return (int32_t)(0);
	}
}
// System.Void PurchaseManager::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_OnPurchaseFailed_m1928244146 (PurchaseManager_t1431997891 * __this, Product_t3244410059 * ___item0, int32_t ___r1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_OnPurchaseFailed_m1928244146_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral797180344, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PurchaseManager::OnPurchaseOk()
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_OnPurchaseOk_m4160008679 (PurchaseManager_t1431997891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_OnPurchaseOk_m4160008679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral3057638430, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PurchaseManager::OnPurchaseClicked()
extern "C" IL2CPP_METHOD_ATTR void PurchaseManager_OnPurchaseClicked_m680424208 (PurchaseManager_t1431997891 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PurchaseManager_OnPurchaseClicked_m680424208_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Product_t3244410059 * V_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1991485510, /*hidden argument*/NULL);
		RuntimeObject* L_0 = __this->get_controller_4();
		NullCheck(L_0);
		ProductCollection_t2671956229 * L_1 = InterfaceFuncInvoker0< ProductCollection_t2671956229 * >::Invoke(0 /* UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products() */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		Product_t3244410059 * L_2 = ProductCollection_WithID_m2597694943(L_1, _stringLiteral487361662, /*hidden argument*/NULL);
		V_0 = L_2;
		Product_t3244410059 * L_3 = V_0;
		if (!L_3)
		{
			goto IL_0079;
		}
	}
	{
		Product_t3244410059 * L_4 = V_0;
		NullCheck(L_4);
		ProductMetadata_t3417118930 * L_5 = Product_get_metadata_m3202120155(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = ProductMetadata_get_localizedTitle_m1221956283(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3440199867, L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Product_t3244410059 * L_8 = V_0;
		NullCheck(L_8);
		ProductMetadata_t3417118930 * L_9 = Product_get_metadata_m3202120155(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = ProductMetadata_get_localizedDescription_m2896855065(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral719124244, L_10, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Product_t3244410059 * L_12 = V_0;
		NullCheck(L_12);
		ProductMetadata_t3417118930 * L_13 = Product_get_metadata_m3202120155(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_14 = ProductMetadata_get_localizedPriceString_m3339862584(L_13, /*hidden argument*/NULL);
		String_t* L_15 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral992438477, L_14, /*hidden argument*/NULL);
		Debug_Log_m4051431634(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		goto IL_0083;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral2206906855, /*hidden argument*/NULL);
	}

IL_0083:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1165201205, /*hidden argument*/NULL);
		RuntimeObject* L_16 = __this->get_controller_4();
		NullCheck(L_16);
		InterfaceActionInvoker1< String_t* >::Invoke(2 /* System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String) */, IStoreController_t2579314702_il2cpp_TypeInfo_var, L_16, _stringLiteral487361662);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
