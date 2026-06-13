// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamRemoteStorage/WebRemoteStorageAsyncActions.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeWebRemoteStorageAsyncActions() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncAction();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_NoRegister();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile();
ORIONSTEAMWEBAPI_API UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_NoRegister();
UPackage* Z_Construct_UPackage__Script_OrionSteamWebAPI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles Function EnumerateUserPublishedFilesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enumerate User Published Files\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09""AppId of product\n\x09 */" },
#endif
		{ "DisplayName", "Enumerate User Published Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerate User Published Files\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         SteamID of user\n@param       AppId           AppId of product" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles, nullptr, "EnumerateUserPublishedFilesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_eventEnumerateUserPublishedFilesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::execEnumerateUserPublishedFilesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles**)Z_Param__Result=UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::EnumerateUserPublishedFilesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles Function EnumerateUserPublishedFilesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles ******************
void UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateUserPublishedFilesAsync", &UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::execEnumerateUserPublishedFilesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles;
UClass* UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_EnumerateUserPublishedFilesAsync, "EnumerateUserPublishedFilesAsync" }, // 127202273
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles);
UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::~UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles() {}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles ********************

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles Function EnumerateUserSubscribedFilesAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		int32 ListType;
		UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enumerate User Subscribed Files\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09SteamID of user\n\x09 * @param\x09""AppId\x09\x09""AppId of product\n\x09 * @param\x09ListType\x09""EUCMListType\n\x09 */" },
#endif
		{ "DisplayName", "Enumerate User Subscribed Files" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enumerate User Subscribed Files\n\n@param       Key                     Steamworks Web API publisher authentication Key.\n@param       SteamId         SteamID of user\n@param       AppId           AppId of product\n@param       ListType        EUCMListType" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ListType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ListType), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles, nullptr, "EnumerateUserSubscribedFilesAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_eventEnumerateUserSubscribedFilesAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::execEnumerateUserSubscribedFilesAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FIntProperty,Z_Param_ListType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles**)Z_Param__Result=UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::EnumerateUserSubscribedFilesAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_ListType);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles Function EnumerateUserSubscribedFilesAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles *****************
void UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnumerateUserSubscribedFilesAsync", &UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::execEnumerateUserSubscribedFilesAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles;
UClass* UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_EnumerateUserSubscribedFilesAsync, "EnumerateUserSubscribedFilesAsync" }, // 4266955062
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles);
UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::~UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles() {}
// ********** End Class UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles *******************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCollectionDetails Function GetCollectionDetailsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		TArray<FString> PublishedFileIds;
		UOrionSteamWebAPIAsyncActionGetCollectionDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Collection Details\n\x09 *\n\x09 * @param\x09PublishedFileIds\x09\x09""collection ids to get the details for\n\x09 */" },
#endif
		{ "DisplayName", "Get Collection Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Collection Details\n\n@param       PublishedFileIds                collection ids to get the details for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, PublishedFileIds), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails, nullptr, "GetCollectionDetailsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetCollectionDetails_eventGetCollectionDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_TARRAY(FString,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetCollectionDetails**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetCollectionDetails::GetCollectionDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCollectionDetails Function GetCollectionDetailsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetCollectionDetails *************************
void UOrionSteamWebAPIAsyncActionGetCollectionDetails::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCollectionDetails()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetCollectionDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCollectionDetailsAsync", &UOrionSteamWebAPIAsyncActionGetCollectionDetails::execGetCollectionDetailsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails;
UClass* UOrionSteamWebAPIAsyncActionGetCollectionDetails::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetCollectionDetails;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetCollectionDetails"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetCollectionDetails,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetCollectionDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetCollectionDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetCollectionDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetCollectionDetails_GetCollectionDetailsAsync, "GetCollectionDetailsAsync" }, // 3594417115
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetCollectionDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetCollectionDetails::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetCollectionDetails::UOrionSteamWebAPIAsyncActionGetCollectionDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetCollectionDetails);
UOrionSteamWebAPIAsyncActionGetCollectionDetails::~UOrionSteamWebAPIAsyncActionGetCollectionDetails() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetCollectionDetails ***************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublishedFileDetails Function GetPublishedFileDetailsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString PublishedFileIds;
		UOrionSteamWebAPIAsyncActionGetPublishedFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get Collection Details\n\x09 *\n\x09 * @param\x09publishedFileIDs\x09\x09""collection ids to get the details for\n\x09 */" },
#endif
		{ "DisplayName", "Get Published File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get Collection Details\n\n@param       publishedFileIDs                collection ids to get the details for" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails, nullptr, "GetPublishedFileDetailsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetPublishedFileDetails_eventGetPublishedFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetPublishedFileDetails**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::GetPublishedFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublishedFileDetails Function GetPublishedFileDetailsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetPublishedFileDetails **********************
void UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublishedFileDetails()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPublishedFileDetailsAsync", &UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::execGetPublishedFileDetailsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails;
UClass* UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetPublishedFileDetails;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetPublishedFileDetails"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetPublishedFileDetails,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetPublishedFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetPublishedFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_GetPublishedFileDetailsAsync, "GetPublishedFileDetailsAsync" }, // 3500134542
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetPublishedFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::UOrionSteamWebAPIAsyncActionGetPublishedFileDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetPublishedFileDetails);
UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::~UOrionSteamWebAPIAsyncActionGetPublishedFileDetails() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetPublishedFileDetails ************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUGCFileDetails Function GetUGCFileDetailsAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
		UOrionSteamWebAPIAsyncActionGetUGCFileDetails* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Get UGC File Details\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09 * @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09 * @param\x09""AppId\x09\x09\x09""AppId of product\n\x09 */" },
#endif
		{ "DisplayName", "Get UGC File Details" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get UGC File Details\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param       UGCID                   ID of UGC file to get info for\n@param       AppId                   AppId of product" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails, nullptr, "GetUGCFileDetailsAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::OrionSteamWebAPIAsyncActionGetUGCFileDetails_eventGetUGCFileDetailsAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionGetUGCFileDetails::execGetUGCFileDetailsAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionGetUGCFileDetails**)Z_Param__Result=UOrionSteamWebAPIAsyncActionGetUGCFileDetails::GetUGCFileDetailsAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUGCFileDetails Function GetUGCFileDetailsAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionGetUGCFileDetails ****************************
void UOrionSteamWebAPIAsyncActionGetUGCFileDetails::StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUGCFileDetails()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionGetUGCFileDetails::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUGCFileDetailsAsync", &UOrionSteamWebAPIAsyncActionGetUGCFileDetails::execGetUGCFileDetailsAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails;
UClass* UOrionSteamWebAPIAsyncActionGetUGCFileDetails::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionGetUGCFileDetails;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionGetUGCFileDetails"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionGetUGCFileDetails,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionGetUGCFileDetails::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionGetUGCFileDetails\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionGetUGCFileDetails\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_GetUGCFileDetailsAsync, "GetUGCFileDetailsAsync" }, // 707089504
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionGetUGCFileDetails>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionGetUGCFileDetails::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionGetUGCFileDetails::UOrionSteamWebAPIAsyncActionGetUGCFileDetails() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionGetUGCFileDetails);
UOrionSteamWebAPIAsyncActionGetUGCFileDetails::~UOrionSteamWebAPIAsyncActionGetUGCFileDetails() {}
// ********** End Class UOrionSteamWebAPIAsyncActionGetUGCFileDetails ******************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetUGCUsedByGC Function SetUGCUsedByGCAsync **
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		FString UGCID;
		int32 AppId;
		bool bUsed;
		UOrionSteamWebAPIAsyncActionSetUGCUsedByGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Set UGC Used By GC\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09 * @param\x09UGCID\x09 \x09\x09ID of UGC file to get info for\n\x09 * @param\x09""AppId\x09\x09\x09""AppId of product\n\x09 * @param\x09""bUsed\x09\x09\x09New state of flag\n\x09 */" },
#endif
		{ "DisplayName", "Set UGC Used By GC" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set UGC Used By GC\n\n@param       Key                             Steamworks Web API publisher authentication Key.\n@param       SteamId                 If specified, only returns details if the file is owned by the SteamID specified\n@param       UGCID                   ID of UGC file to get info for\n@param       AppId                   AppId of product\n@param       bUsed                   New state of flag" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UGCID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_bUsed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID = { "UGCID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, UGCID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit(void* Obj)
{
	((OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms*)Obj)->bUsed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed = { "bUsed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_UGCID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_bUsed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC, nullptr, "SetUGCUsedByGCAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::OrionSteamWebAPIAsyncActionSetUGCUsedByGC_eventSetUGCUsedByGCAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FStrProperty,Z_Param_UGCID);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_UBOOL(Z_Param_bUsed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionSetUGCUsedByGC**)Z_Param__Result=UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::SetUGCUsedByGCAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_UGCID,Z_Param_AppId,Z_Param_bUsed);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionSetUGCUsedByGC Function SetUGCUsedByGCAsync ****

// ********** Begin Class UOrionSteamWebAPIAsyncActionSetUGCUsedByGC *******************************
void UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetUGCUsedByGC()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUGCUsedByGCAsync", &UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::execSetUGCUsedByGCAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC;
UClass* UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionSetUGCUsedByGC;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionSetUGCUsedByGC"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionSetUGCUsedByGC,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionSetUGCUsedByGC\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionSetUGCUsedByGC\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_SetUGCUsedByGCAsync, "SetUGCUsedByGCAsync" }, // 2328751962
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionSetUGCUsedByGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::UOrionSteamWebAPIAsyncActionSetUGCUsedByGC() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionSetUGCUsedByGC);
UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::~UOrionSteamWebAPIAsyncActionSetUGCUsedByGC() {}
// ********** End Class UOrionSteamWebAPIAsyncActionSetUGCUsedByGC *********************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionSubscribePublishedFile Function SubscribePublishedFileAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
		UOrionSteamWebAPIAsyncActionSubscribePublishedFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Subscribe Published File\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09PublishedFileIds\x09\x09\x09published file id to subscribe to\n\x09 */" },
#endif
		{ "DisplayName", "Subscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Subscribe Published File\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param       AppId                                   AppId of product\n@param       PublishedFileIds                        published file id to subscribe to" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile, nullptr, "SubscribePublishedFileAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::OrionSteamWebAPIAsyncActionSubscribePublishedFile_eventSubscribePublishedFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionSubscribePublishedFile::execSubscribePublishedFileAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionSubscribePublishedFile**)Z_Param__Result=UOrionSteamWebAPIAsyncActionSubscribePublishedFile::SubscribePublishedFileAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionSubscribePublishedFile Function SubscribePublishedFileAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionSubscribePublishedFile ***********************
void UOrionSteamWebAPIAsyncActionSubscribePublishedFile::StaticRegisterNativesUOrionSteamWebAPIAsyncActionSubscribePublishedFile()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionSubscribePublishedFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SubscribePublishedFileAsync", &UOrionSteamWebAPIAsyncActionSubscribePublishedFile::execSubscribePublishedFileAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile;
UClass* UOrionSteamWebAPIAsyncActionSubscribePublishedFile::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionSubscribePublishedFile;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionSubscribePublishedFile"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionSubscribePublishedFile,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionSubscribePublishedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionSubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionSubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_SubscribePublishedFileAsync, "SubscribePublishedFileAsync" }, // 1638112869
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionSubscribePublishedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionSubscribePublishedFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionSubscribePublishedFile::UOrionSteamWebAPIAsyncActionSubscribePublishedFile() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionSubscribePublishedFile);
UOrionSteamWebAPIAsyncActionSubscribePublishedFile::~UOrionSteamWebAPIAsyncActionSubscribePublishedFile() {}
// ********** End Class UOrionSteamWebAPIAsyncActionSubscribePublishedFile *************************

// ********** Begin Class UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile Function UnsubscribePublishedFileAsync 
struct Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics
{
	struct OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms
	{
		UObject* WorldContextObject;
		FString Key;
		FString SteamId;
		int32 AppId;
		FString PublishedFileIds;
		UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "OrionSteamWebAPI|PlayerService|Async" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unsubscribe Published File\n\x09 *\n\x09 * @param\x09Key\x09\x09\x09\x09\x09\x09Steamworks Web API publisher authentication Key.\n\x09 * @param\x09SteamId\x09\x09\x09\x09\x09If specified, only returns details if the file is owned by the SteamID specified\n\x09 * @param\x09""AppId\x09\x09\x09\x09\x09""AppId of product\n\x09 * @param\x09PublishedFileIds\x09\x09\x09published file id to unsubscribe from\n\x09 */" },
#endif
		{ "DisplayName", "Unsubscribe Published File" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unsubscribe Published File\n\n@param       Key                                             Steamworks Web API publisher authentication Key.\n@param       SteamId                                 If specified, only returns details if the file is owned by the SteamID specified\n@param       AppId                                   AppId of product\n@param       PublishedFileIds                        published file id to unsubscribe from" },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PublishedFileIds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, SteamId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, AppId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds = { "PublishedFileIds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, PublishedFileIds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms, ReturnValue), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_PublishedFileIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile, nullptr, "UnsubscribePublishedFileAsync", Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::OrionSteamWebAPIAsyncActionUnsubscribePublishedFile_eventUnsubscribePublishedFileAsync_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::execUnsubscribePublishedFileAsync)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_SteamId);
	P_GET_PROPERTY(FIntProperty,Z_Param_AppId);
	P_GET_PROPERTY(FStrProperty,Z_Param_PublishedFileIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile**)Z_Param__Result=UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::UnsubscribePublishedFileAsync(Z_Param_WorldContextObject,Z_Param_Key,Z_Param_SteamId,Z_Param_AppId,Z_Param_PublishedFileIds);
	P_NATIVE_END;
}
// ********** End Class UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile Function UnsubscribePublishedFileAsync 

// ********** Begin Class UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile *********************
void UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::StaticRegisterNativesUOrionSteamWebAPIAsyncActionUnsubscribePublishedFile()
{
	UClass* Class = UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UnsubscribePublishedFileAsync", &UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::execUnsubscribePublishedFileAsync },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile;
UClass* UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::GetPrivateStaticClass()
{
	using TClass = UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile;
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OrionSteamWebAPIAsyncActionUnsubscribePublishedFile"),
			Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.InnerSingleton,
			StaticRegisterNativesUOrionSteamWebAPIAsyncActionUnsubscribePublishedFile,
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
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.InnerSingleton;
}
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_NoRegister()
{
	return UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
#endif
		{ "IncludePath", "SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
		{ "ModuleRelativePath", "Public/SteamRemoteStorage/WebRemoteStorageAsyncActions.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_UnsubscribePublishedFileAsync, "UnsubscribePublishedFileAsync" }, // 2824420580
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOrionSteamWebAPIAsyncAction,
	(UObject* (*)())Z_Construct_UPackage__Script_OrionSteamWebAPI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::ClassParams = {
	&UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile()
{
	if (!Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.OuterSingleton, Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile.OuterSingleton;
}
UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile);
UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::~UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile() {}
// ********** End Class UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile ***********************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_OrionSteamWebAPI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles, UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionEnumerateUserPublishedFiles), 1009148828U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles, UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionEnumerateUserSubscribedFiles), 2778227215U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails, UOrionSteamWebAPIAsyncActionGetCollectionDetails::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetCollectionDetails"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetCollectionDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetCollectionDetails), 2839471460U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails, UOrionSteamWebAPIAsyncActionGetPublishedFileDetails::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetPublishedFileDetails"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetPublishedFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetPublishedFileDetails), 3498002703U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails, UOrionSteamWebAPIAsyncActionGetUGCFileDetails::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionGetUGCFileDetails"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionGetUGCFileDetails, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionGetUGCFileDetails), 3078846551U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC, UOrionSteamWebAPIAsyncActionSetUGCUsedByGC::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionSetUGCUsedByGC"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSetUGCUsedByGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionSetUGCUsedByGC), 1294602773U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile, UOrionSteamWebAPIAsyncActionSubscribePublishedFile::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionSubscribePublishedFile"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionSubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionSubscribePublishedFile), 3294866824U) },
		{ Z_Construct_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile, UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile::StaticClass, TEXT("UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile"), &Z_Registration_Info_UClass_UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOrionSteamWebAPIAsyncActionUnsubscribePublishedFile), 2146419192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_OrionSteamWebAPI_2007059564(TEXT("/Script/OrionSteamWebAPI"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_SteamRemoteStorage_WebRemoteStorageAsyncActions_h__Script_OrionSteamWebAPI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
