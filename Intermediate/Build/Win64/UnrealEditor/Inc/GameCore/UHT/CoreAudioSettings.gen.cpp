// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Audio/CoreAudioSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCoreAudioSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundSubmix_NoRegister();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAudioSettings();
GAMECORE_API UClass* Z_Construct_UClass_UCoreAudioSettings_NoRegister();
GAMECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectChainMap();
UPackage* Z_Construct_UPackage__Script_GameCore();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FSubmixEffectChainMap *********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap;
class UScriptStruct* FSubmixEffectChainMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubmixEffectChainMap, (UObject*)Z_Construct_UPackage__Script_GameCore(), TEXT("SubmixEffectChainMap"));
	}
	return Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Submix_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundSubmix" },
		{ "Category", "SubmixEffectChainMap" },
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubmixEffectChain_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SoundEffectSubmixPreset" },
		{ "Category", "SubmixEffectChainMap" },
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Submix;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubmixEffectChainMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_Submix = { "Submix", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectChainMap, Submix), Z_Construct_UClass_USoundSubmix_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Submix_MetaData), NewProp_Submix_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USoundEffectSubmixPreset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain = { "SubmixEffectChain", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubmixEffectChainMap, SubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubmixEffectChain_MetaData), NewProp_SubmixEffectChain_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_Submix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewProp_SubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
	nullptr,
	&NewStructOps,
	"SubmixEffectChainMap",
	Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::PropPointers),
	sizeof(FSubmixEffectChainMap),
	alignof(FSubmixEffectChainMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubmixEffectChainMap()
{
	if (!Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.InnerSingleton, Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap.InnerSingleton;
}
// ********** End ScriptStruct FSubmixEffectChainMap ***********************************************

// ********** Begin Class UCoreAudioSettings *******************************************************
void UCoreAudioSettings::StaticRegisterNativesUCoreAudioSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCoreAudioSettings;
UClass* UCoreAudioSettings::GetPrivateStaticClass()
{
	using TClass = UCoreAudioSettings;
	if (!Z_Registration_Info_UClass_UCoreAudioSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CoreAudioSettings"),
			Z_Registration_Info_UClass_UCoreAudioSettings.InnerSingleton,
			StaticRegisterNativesUCoreAudioSettings,
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
	return Z_Registration_Info_UClass_UCoreAudioSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UCoreAudioSettings_NoRegister()
{
	return UCoreAudioSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCoreAudioSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UCoreAudioSettings\n * \n * \xe6\xb8\xb8\xe6\x88\x8f\xe9\x9f\xb3\xe9\xa2\x91\xe8\xae\xbe\xe7\xbd\xae\n * \n * @note\n * \xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7\n */" },
#endif
		{ "IncludePath", "Audio/CoreAudioSettings.h" },
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UCoreAudioSettings\n\n\xe6\xb8\xb8\xe6\x88\x8f\xe9\x9f\xb3\xe9\xa2\x91\xe8\xae\xbe\xe7\xbd\xae\n\n@note\n\xe9\x9c\x80\xe5\x9c\xa8""DefaultGame.ini\xe4\xb8\xad\xe9\x85\x8d\xe7\xbd\xae\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84\xe5\xb1\x9e\xe6\x80\xa7" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Default Base Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Base Control Bus Mix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingScreenControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "MixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Loading Screen Control Bus Mix - Called during loading screens to cover background audio events" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserSettingsControlBusMix_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBusMix" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Default Base Control Bus Mix */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Default Base Control Bus Mix" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverallVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Overall sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Overall sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MusicVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Music sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Music sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundFXVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the SoundFX sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the SoundFX sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the Dialogue sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the Dialogue sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VoiceChatVolumeControlBus_MetaData[] = {
		{ "AllowedClasses", "/Script/AudioModulation.SoundControlBus" },
		{ "Category", "UserMixSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Control Bus assigned to the VoiceChat sound volume setting */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Control Bus assigned to the VoiceChat sound volume setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Submix Processing Chains to achieve high dynamic range audio output */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Processing Chains to achieve high dynamic range audio output" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LDRAudioSubmixEffectChain_MetaData[] = {
		{ "Category", "EffectSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Submix Processing Chains to achieve low dynamic range audio output */" },
#endif
		{ "ModuleRelativePath", "Public/Audio/CoreAudioSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Submix Processing Chains to achieve low dynamic range audio output" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LoadingScreenControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserSettingsControlBusMix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverallVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MusicVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SoundFXVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VoiceChatVolumeControlBus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LDRAudioSubmixEffectChain_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LDRAudioSubmixEffectChain;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCoreAudioSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_DefaultControlBusMix = { "DefaultControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, DefaultControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultControlBusMix_MetaData), NewProp_DefaultControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LoadingScreenControlBusMix = { "LoadingScreenControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, LoadingScreenControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingScreenControlBusMix_MetaData), NewProp_LoadingScreenControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_UserSettingsControlBusMix = { "UserSettingsControlBusMix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, UserSettingsControlBusMix), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserSettingsControlBusMix_MetaData), NewProp_UserSettingsControlBusMix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_OverallVolumeControlBus = { "OverallVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, OverallVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverallVolumeControlBus_MetaData), NewProp_OverallVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_MusicVolumeControlBus = { "MusicVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, MusicVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MusicVolumeControlBus_MetaData), NewProp_MusicVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_SoundFXVolumeControlBus = { "SoundFXVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, SoundFXVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundFXVolumeControlBus_MetaData), NewProp_SoundFXVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_DialogueVolumeControlBus = { "DialogueVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, DialogueVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueVolumeControlBus_MetaData), NewProp_DialogueVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus = { "VoiceChatVolumeControlBus", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, VoiceChatVolumeControlBus), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VoiceChatVolumeControlBus_MetaData), NewProp_VoiceChatVolumeControlBus_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 3171203346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain = { "HDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, HDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRAudioSubmixEffectChain_MetaData), NewProp_HDRAudioSubmixEffectChain_MetaData) }; // 3171203346
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSubmixEffectChainMap, METADATA_PARAMS(0, nullptr) }; // 3171203346
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain = { "LDRAudioSubmixEffectChain", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCoreAudioSettings, LDRAudioSubmixEffectChain), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LDRAudioSubmixEffectChain_MetaData), NewProp_LDRAudioSubmixEffectChain_MetaData) }; // 3171203346
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCoreAudioSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_DefaultControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LoadingScreenControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_UserSettingsControlBusMix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_OverallVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_MusicVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_SoundFXVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_DialogueVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_VoiceChatVolumeControlBus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_HDRAudioSubmixEffectChain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCoreAudioSettings_Statics::NewProp_LDRAudioSubmixEffectChain,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAudioSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCoreAudioSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAudioSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCoreAudioSettings_Statics::ClassParams = {
	&UCoreAudioSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCoreAudioSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAudioSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCoreAudioSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UCoreAudioSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCoreAudioSettings()
{
	if (!Z_Registration_Info_UClass_UCoreAudioSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCoreAudioSettings.OuterSingleton, Z_Construct_UClass_UCoreAudioSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCoreAudioSettings.OuterSingleton;
}
UCoreAudioSettings::UCoreAudioSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCoreAudioSettings);
UCoreAudioSettings::~UCoreAudioSettings() {}
// ********** End Class UCoreAudioSettings *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubmixEffectChainMap::StaticStruct, Z_Construct_UScriptStruct_FSubmixEffectChainMap_Statics::NewStructOps, TEXT("SubmixEffectChainMap"), &Z_Registration_Info_UScriptStruct_FSubmixEffectChainMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubmixEffectChainMap), 3171203346U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCoreAudioSettings, UCoreAudioSettings::StaticClass, TEXT("UCoreAudioSettings"), &Z_Registration_Info_UClass_UCoreAudioSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCoreAudioSettings), 57205249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_3393347130(TEXT("/Script/GameCore"),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Orion_FreeEdition_Source_GameCore_Public_Audio_CoreAudioSettings_h__Script_GameCore_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
