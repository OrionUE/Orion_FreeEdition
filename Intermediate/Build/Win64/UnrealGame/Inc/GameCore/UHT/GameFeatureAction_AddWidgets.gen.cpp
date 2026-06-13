// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameFeatures/GameFeatureAction_AddWidgets.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddWidgets() {}

// ********** Begin Cross Module References ********************************************************
COMMONUI_API UClass* Z_Construct_UClass_UCommonActivatableWidget_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDElementEntry();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDLayoutRequest();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FCoreHUDLayoutRequest *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest;
class UScriptStruct* FCoreHUDLayoutRequest::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreHUDLayoutRequest, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreHUDLayoutRequest"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayoutClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The layout widget to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The layout widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerID_MetaData[] = {
		{ "Categories", "UI.Layer" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The layer to insert the widget in\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The layer to insert the widget in" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_LayoutClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreHUDLayoutRequest>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::NewProp_LayoutClass = { "LayoutClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreHUDLayoutRequest, LayoutClass), Z_Construct_UClass_UCommonActivatableWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayoutClass_MetaData), NewProp_LayoutClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::NewProp_LayerID = { "LayerID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreHUDLayoutRequest, LayerID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerID_MetaData), NewProp_LayerID_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::NewProp_LayoutClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::NewProp_LayerID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreHUDLayoutRequest",
	Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::PropPointers),
	sizeof(FCoreHUDLayoutRequest),
	alignof(FCoreHUDLayoutRequest),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDLayoutRequest()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.InnerSingleton, Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest.InnerSingleton;
}
// ********** End ScriptStruct FCoreHUDLayoutRequest ***********************************************

// ********** Begin ScriptStruct FCoreHUDElementEntry **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry;
class UScriptStruct* FCoreHUDElementEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCoreHUDElementEntry, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("CoreHUDElementEntry"));
	}
	return Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[] = {
		{ "AssetBundles", "Client" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The widget to spawn\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotID_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The slot ID where we should place this widget\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The slot ID where we should place this widget" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_WidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SlotID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCoreHUDElementEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreHUDElementEntry, WidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetClass_MetaData), NewProp_WidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::NewProp_SlotID = { "SlotID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCoreHUDElementEntry, SlotID), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotID_MetaData), NewProp_SlotID_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::NewProp_WidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::NewProp_SlotID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"CoreHUDElementEntry",
	Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::PropPointers),
	sizeof(FCoreHUDElementEntry),
	alignof(FCoreHUDElementEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCoreHUDElementEntry()
{
	if (!Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.InnerSingleton, Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry.InnerSingleton;
}
// ********** End ScriptStruct FCoreHUDElementEntry ************************************************

// ********** Begin Class UGameFeatureAction_AddWidgets ********************************************
void UGameFeatureAction_AddWidgets::StaticRegisterNativesUGameFeatureAction_AddWidgets()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets;
UClass* UGameFeatureAction_AddWidgets::GetPrivateStaticClass()
{
	using TClass = UGameFeatureAction_AddWidgets;
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameFeatureAction_AddWidgets"),
			Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.InnerSingleton,
			StaticRegisterNativesUGameFeatureAction_AddWidgets,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets_NoRegister()
{
	return UGameFeatureAction_AddWidgets::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0Widget\n */" },
#endif
		{ "DisplayName", "Add Widgets" },
		{ "IncludePath", "GameFeatures/GameFeatureAction_AddWidgets.h" },
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GameFeatureAction - \xe6\xb7\xbb\xe5\x8a\xa0Widget" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layout_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Layout to add to the HUD\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
		{ "TitleProperty", "{LayerID} -> {LayoutClass}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Layout to add to the HUD" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widgets_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Widgets to add to the HUD\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeatures/GameFeatureAction_AddWidgets.h" },
		{ "TitleProperty", "{SlotID} -> {WidgetClass}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Widgets to add to the HUD" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layout_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layout;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Widgets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Widgets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddWidgets>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner = { "Layout", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreHUDLayoutRequest, METADATA_PARAMS(0, nullptr) }; // 3091379736
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout = { "Layout", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Layout), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layout_MetaData), NewProp_Layout_MetaData) }; // 3091379736
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner = { "Widgets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCoreHUDElementEntry, METADATA_PARAMS(0, nullptr) }; // 3662976570
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets = { "Widgets", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddWidgets, Widgets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widgets_MetaData), NewProp_Widgets_MetaData) }; // 3662976570
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Layout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::NewProp_Widgets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams = {
	&UGameFeatureAction_AddWidgets::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddWidgets()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddWidgets_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets.OuterSingleton;
}
UGameFeatureAction_AddWidgets::UGameFeatureAction_AddWidgets(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddWidgets);
UGameFeatureAction_AddWidgets::~UGameFeatureAction_AddWidgets() {}
// ********** End Class UGameFeatureAction_AddWidgets **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCoreHUDLayoutRequest::StaticStruct, Z_Construct_UScriptStruct_FCoreHUDLayoutRequest_Statics::NewStructOps, TEXT("CoreHUDLayoutRequest"), &Z_Registration_Info_UScriptStruct_FCoreHUDLayoutRequest, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreHUDLayoutRequest), 3091379736U) },
		{ FCoreHUDElementEntry::StaticStruct, Z_Construct_UScriptStruct_FCoreHUDElementEntry_Statics::NewStructOps, TEXT("CoreHUDElementEntry"), &Z_Registration_Info_UScriptStruct_FCoreHUDElementEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCoreHUDElementEntry), 3662976570U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddWidgets, UGameFeatureAction_AddWidgets::StaticClass, TEXT("UGameFeatureAction_AddWidgets"), &Z_Registration_Info_UClass_UGameFeatureAction_AddWidgets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddWidgets), 2384073198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_3978375621(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_GameFeatures_GameFeatureAction_AddWidgets_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
