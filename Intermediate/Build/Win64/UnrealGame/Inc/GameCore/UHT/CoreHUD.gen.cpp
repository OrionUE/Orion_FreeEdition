// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UI/CoreHUD.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreHUD() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AHUD();
GAMECORE_API UClass* Z_Construct_UClass_ACoreHUD();
GAMECORE_API UClass* Z_Construct_UClass_ACoreHUD_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACoreHUD *****************************************************************
void ACoreHUD::StaticRegisterNativesACoreHUD()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACoreHUD;
UClass* ACoreHUD::GetPrivateStaticClass()
{
	using TClass = ACoreHUD;
	if (!Z_Registration_Info_UClass_ACoreHUD.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreHUD"),
			Z_Registration_Info_UClass_ACoreHUD.InnerSingleton,
			StaticRegisterNativesACoreHUD,
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
	return Z_Registration_Info_UClass_ACoreHUD.InnerSingleton;
}
UClass* Z_Construct_UClass_ACoreHUD_NoRegister()
{
	return ACoreHUD::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACoreHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * ACoreHUD\n * \n * This class exists primarily for debug rendering\n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "UI/CoreHUD.h" },
		{ "ModuleRelativePath", "Public/UI/CoreHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ACoreHUD\n\nThis class exists primarily for debug rendering" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACoreHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACoreHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACoreHUD_Statics::ClassParams = {
	&ACoreHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACoreHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ACoreHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACoreHUD()
{
	if (!Z_Registration_Info_UClass_ACoreHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACoreHUD.OuterSingleton, Z_Construct_UClass_ACoreHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACoreHUD.OuterSingleton;
}
ACoreHUD::ACoreHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACoreHUD);
ACoreHUD::~ACoreHUD() {}
// ********** End Class ACoreHUD *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACoreHUD, ACoreHUD::StaticClass, TEXT("ACoreHUD"), &Z_Registration_Info_UClass_ACoreHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACoreHUD), 1829984577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h__Script_GameCore_3703370786(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_UI_CoreHUD_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
