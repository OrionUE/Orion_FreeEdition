// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameCore_init() {}
	GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature();
	GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature();
	GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature();
	GAMECORE_API UFunction* Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameCore;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameCore()
	{
		if (!Z_Registration_Info_UPackage__Script_GameCore.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameCore_ExperienceReadyAsyncDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameCore_GamePhaseDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameCore_GamePhaseTagDynamicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameCore_PlayerStateReadyAsyncDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameCore",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xDB38D3E3,
				0xC433F65C,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameCore.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameCore.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameCore(Z_Construct_UPackage__Script_GameCore, TEXT("/Script/GameCore"), Z_Registration_Info_UPackage__Script_GameCore, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xDB38D3E3, 0xC433F65C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
