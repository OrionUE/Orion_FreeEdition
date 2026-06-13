// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/CoreLocalPlayer.h"
#include "Engine/Engine.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreLocalPlayer() {}

// ********** Begin Cross Module References ********************************************************
COMMONGAME_API UClass* Z_Construct_UClass_UCommonLocalPlayer();
GAMECORE_API UClass* Z_Construct_UClass_UCoreLocalPlayer();
GAMECORE_API UClass* Z_Construct_UClass_UCoreLocalPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCoreLocalPlayer *********************************************************
void UCoreLocalPlayer::StaticRegisterNativesUCoreLocalPlayer()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreLocalPlayer;
UClass* UCoreLocalPlayer::GetPrivateStaticClass()
{
	using TClass = UCoreLocalPlayer;
	if (!Z_Registration_Info_UClass_UCoreLocalPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreLocalPlayer"),
			Z_Registration_Info_UClass_UCoreLocalPlayer.InnerSingleton,
			StaticRegisterNativesUCoreLocalPlayer,
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
	return Z_Registration_Info_UClass_UCoreLocalPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreLocalPlayer_NoRegister()
{
	return UCoreLocalPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreLocalPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreLocalPlayer\n *\n * \xe6\xb8\xb8\xe6\x88\x8fLocalPlayer\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n *\n * @note\n * \xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n * [/Script/Engine.Engine]\n * LocalPlayerClassName=/Script/ModuleName.LocalPlayerClassName\n */" },
#endif
		{ "IncludePath", "Player/CoreLocalPlayer.h" },
		{ "ModuleRelativePath", "Public/Player/CoreLocalPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreLocalPlayer\n\n\xe6\xb8\xb8\xe6\x88\x8fLocalPlayer\xe6\xa0\xb8\xe5\xbf\x83\xe5\x9f\xba\xe7\xb1\xbb\n\n@note\n\xe9\x9c\x80\xe8\xa6\x81\xe5\x9c\xa8""DefaultEngine.ini\xe6\xb7\xbb\xe5\x8a\xa0\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\x90\x8d\xe7\xa7\xb0\xe5\x92\x8c\xe8\xb7\xaf\xe5\xbe\x84\n[/Script/Engine.Engine]\nLocalPlayerClassName=/Script/ModuleName.LocalPlayerClassName" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreLocalPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCoreLocalPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCommonLocalPlayer,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLocalPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreLocalPlayer_Statics::ClassParams = {
	&UCoreLocalPlayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreLocalPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreLocalPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreLocalPlayer()
{
	if (!Z_Registration_Info_UClass_UCoreLocalPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreLocalPlayer.OuterSingleton, Z_Construct_UClass_UCoreLocalPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreLocalPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreLocalPlayer);
UCoreLocalPlayer::~UCoreLocalPlayer() {}
// ********** End Class UCoreLocalPlayer ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h__Script_GameCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreLocalPlayer, UCoreLocalPlayer::StaticClass, TEXT("UCoreLocalPlayer"), &Z_Registration_Info_UClass_UCoreLocalPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreLocalPlayer), 2094687715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h__Script_GameCore_1161584358(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Player_CoreLocalPlayer_h__Script_GameCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
