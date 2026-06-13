// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OrionSteamGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOrionSteamGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameMode();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_AOrionSteamGameMode();
ORIONSTEAMSDKAPI_API UClass* Z_Construct_UClass_AOrionSteamGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamSDKAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOrionSteamGameMode ******************************************************
void AOrionSteamGameMode::StaticRegisterNativesAOrionSteamGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOrionSteamGameMode;
UClass* AOrionSteamGameMode::GetPrivateStaticClass()
{
	using TClass = AOrionSteamGameMode;
	if (!Z_Registration_Info_UClass_AOrionSteamGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamGameMode"),
			Z_Registration_Info_UClass_AOrionSteamGameMode.InnerSingleton,
			StaticRegisterNativesAOrionSteamGameMode,
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
	return Z_Registration_Info_UClass_AOrionSteamGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AOrionSteamGameMode_NoRegister()
{
	return AOrionSteamGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOrionSteamGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "OrionSteamSDKAPI/OrionSteamGameMode.h" },
		{ "ModuleRelativePath", "Public/OrionSteamSDKAPI/OrionSteamGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOrionSteamGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOrionSteamGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameMode,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamSDKAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionSteamGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOrionSteamGameMode_Statics::ClassParams = {
	&AOrionSteamGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOrionSteamGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOrionSteamGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOrionSteamGameMode()
{
	if (!Z_Registration_Info_UClass_AOrionSteamGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOrionSteamGameMode.OuterSingleton, Z_Construct_UClass_AOrionSteamGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOrionSteamGameMode.OuterSingleton;
}
AOrionSteamGameMode::AOrionSteamGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOrionSteamGameMode);
AOrionSteamGameMode::~AOrionSteamGameMode() {}
// ********** End Class AOrionSteamGameMode ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h__Script_OrionSteamSDKAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOrionSteamGameMode, AOrionSteamGameMode::StaticClass, TEXT("AOrionSteamGameMode"), &Z_Registration_Info_UClass_AOrionSteamGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOrionSteamGameMode), 3826170800U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h__Script_OrionSteamSDKAPI_1520972793(TEXT("/Script/OrionSteamSDKAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h__Script_OrionSteamSDKAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamSDKAPI_Public_OrionSteamSDKAPI_OrionSteamGameMode_h__Script_OrionSteamSDKAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
