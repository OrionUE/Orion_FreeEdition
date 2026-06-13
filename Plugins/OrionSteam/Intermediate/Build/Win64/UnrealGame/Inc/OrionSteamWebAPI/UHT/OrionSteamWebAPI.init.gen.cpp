// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOrionSteamWebAPI_init() {}
	ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListAsyncCallback__DelegateSignature();
	ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListCallback__DelegateSignature();
	ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAsyncCallback__DelegateSignature();
	ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature();
	ORIONSTEAMWEBAPI_API UFunction* Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIFailure__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_OrionSteamWebAPI;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI()
	{
		if (!Z_Registration_Info_UPackage__Script_OrionSteamWebAPI.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListAsyncCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAppListCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIAsyncCallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPICallback__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_OrionSteamWebAPI_OnOrionSteamWebAPIFailure__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/OrionSteamWebAPI",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3FD2D1AE,
				0x50863A75,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_OrionSteamWebAPI.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_OrionSteamWebAPI.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_OrionSteamWebAPI(Z_Construct_UPackage__Script_OrionSteamWebAPI, TEXT("/Script/OrionSteamWebAPI"), Z_Registration_Info_UPackage__Script_OrionSteamWebAPI, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3FD2D1AE, 0x50863A75));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
