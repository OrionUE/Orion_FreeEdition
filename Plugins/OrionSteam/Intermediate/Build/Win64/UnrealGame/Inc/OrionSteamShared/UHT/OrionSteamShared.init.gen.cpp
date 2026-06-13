// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionSteamShared_init() {}
	ORIONSTEAMSHARED_API UFunction* Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OrionSteamShared;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OrionSteamShared()
	{
		if (!Z_Registration_Info_UPackage__Script_OrionSteamShared.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamShared_OnOrionSteamAudioInputDevicesObtained__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OrionSteamShared",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8AB8F813,
				0x084F3B80,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OrionSteamShared.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OrionSteamShared.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OrionSteamShared(Z_Construct_UPackage__Script_OrionSteamShared, TEXT("/Script/OrionSteamShared"), Z_Registration_Info_UPackage__Script_OrionSteamShared, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8AB8F813, 0x084F3B80));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
