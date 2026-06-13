// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamWebAPI/OrionSteamWebAPISettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamWebAPISettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISettings();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPISettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPISettings ************************************************
void UOrionSteamWebAPISettings::StaticRegisterNativesUOrionSteamWebAPISettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPISettings;
UClass* UOrionSteamWebAPISettings::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPISettings;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPISettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPISettings"),
			Z_Registration_Info_UClass_UOrionSteamWebAPISettings.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPISettings,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPISettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPISettings_NoRegister()
{
	return UOrionSteamWebAPISettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPISettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "OrionSteamWebAPI Plugin" },
		{ "IncludePath", "OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncTaskTimeout_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * If an async task takes longer than this (in seconds) it will be cancelled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* If an async task takes longer than this (in seconds) it will be cancelled" },
#endif
		{ "UIMax", "60.0" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledSubsystems_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/OrionSteamWebAPI.ESubsystemWeb" },
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Disabled subsystems wont be created, OrionSteamWebAPI subsystem cannot be disabled\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Disabled subsystems wont be created, OrionSteamWebAPI subsystem cannot be disabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugging_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enable / Disable debugging for the plugin\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enable / Disable debugging for the plugin" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDevMode_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, HTTP requests will not be sent, useful if wanting to debug request strings (enable debugging to get string output)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Steamworks Web API publisher authentication key.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Steamworks Web API publisher authentication key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Your AppID\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Your AppID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DevSteamID_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * Development steam ID to use for testing purposes\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* Development steam ID to use for testing purposes" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSandboxMode_MetaData[] = {
		{ "Category", "MicroTxn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox\n\x09 * This interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/OrionSteamWebAPI/OrionSteamWebAPISettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If enabled, we will use the Sandbox interface ISteamMicroTxnSandbox\nThis interface is identical to the regular ISteamMicroTxn interface, but no actual transactions will occur." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AsyncTaskTimeout;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DisabledSubsystems;
	static void NewProp_bDebugging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugging;
	static void NewProp_bDevMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDevMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DevSteamID;
	static void NewProp_bSandboxMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSandboxMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPISettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_AsyncTaskTimeout = { "AsyncTaskTimeout", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamWebAPISettings, AsyncTaskTimeout), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncTaskTimeout_MetaData), NewProp_AsyncTaskTimeout_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_DisabledSubsystems = { "DisabledSubsystems", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamWebAPISettings, DisabledSubsystems), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledSubsystems_MetaData), NewProp_DisabledSubsystems_MetaData) };
void Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDebugging_SetBit(void* Obj)
{
	((UOrionSteamWebAPISettings*)Obj)->bDebugging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDebugging = { "bDebugging", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionSteamWebAPISettings), &Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDebugging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugging_MetaData), NewProp_bDebugging_MetaData) };
void Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDevMode_SetBit(void* Obj)
{
	((UOrionSteamWebAPISettings*)Obj)->bDevMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDevMode = { "bDevMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionSteamWebAPISettings), &Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDevMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDevMode_MetaData), NewProp_bDevMode_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamWebAPISettings, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamWebAPISettings, AppID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppID_MetaData), NewProp_AppID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_DevSteamID = { "DevSteamID", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UOrionSteamWebAPISettings, DevSteamID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DevSteamID_MetaData), NewProp_DevSteamID_MetaData) };
void Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bSandboxMode_SetBit(void* Obj)
{
	((UOrionSteamWebAPISettings*)Obj)->bSandboxMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bSandboxMode = { "bSandboxMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UOrionSteamWebAPISettings), &Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bSandboxMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSandboxMode_MetaData), NewProp_bSandboxMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_AsyncTaskTimeout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_DisabledSubsystems,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDebugging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bDevMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_DevSteamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::NewProp_bSandboxMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::ClassParams = {
	&UOrionSteamWebAPISettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPISettings()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPISettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPISettings.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPISettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPISettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPISettings);
UOrionSteamWebAPISettings::~UOrionSteamWebAPISettings() {}
// ********** End Class UOrionSteamWebAPISettings **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPISettings_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPISettings, UOrionSteamWebAPISettings::StaticClass, TEXT("UOrionSteamWebAPISettings"), &Z_Registration_Info_UClass_UOrionSteamWebAPISettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPISettings), 185413606U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPISettings_h__Script_OrionSteamWebAPI_2275950850(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPISettings_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_OrionSteamWebAPI_OrionSteamWebAPISettings_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
