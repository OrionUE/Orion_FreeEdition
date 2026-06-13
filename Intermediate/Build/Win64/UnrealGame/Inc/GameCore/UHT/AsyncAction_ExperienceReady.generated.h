// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AsyncAction_ExperienceReady.h"

#ifdef GAMECORE_AsyncAction_ExperienceReady_generated_h
#error "AsyncAction_ExperienceReady.generated.h already included, missing '#pragma once' in AsyncAction_ExperienceReady.h"
#endif
#define GAMECORE_AsyncAction_ExperienceReady_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UAsyncAction_ExperienceReady;
class UObject;

// ********** Begin Delegate FExperienceReadyAsyncDelegate *****************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_14_DELEGATE \
GAMECORE_API void FExperienceReadyAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& ExperienceReadyAsyncDelegate);


// ********** End Delegate FExperienceReadyAsyncDelegate *******************************************

// ********** Begin Class UAsyncAction_ExperienceReady *********************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execWaitForExperienceReady);


GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister();

#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUAsyncAction_ExperienceReady(); \
	friend struct Z_Construct_UClass_UAsyncAction_ExperienceReady_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMECORE_API UClass* Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister(); \
public: \
	DECLARE_CLASS2(UAsyncAction_ExperienceReady, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UAsyncAction_ExperienceReady_NoRegister) \
	DECLARE_SERIALIZER(UAsyncAction_ExperienceReady)


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAsyncAction_ExperienceReady(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAsyncAction_ExperienceReady) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAsyncAction_ExperienceReady); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAsyncAction_ExperienceReady); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAsyncAction_ExperienceReady(UAsyncAction_ExperienceReady&&) = delete; \
	UAsyncAction_ExperienceReady(const UAsyncAction_ExperienceReady&) = delete; \
	NO_API virtual ~UAsyncAction_ExperienceReady();


#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_16_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_RPC_WRAPPERS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_INCLASS \
	FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAsyncAction_ExperienceReady;

// ********** End Class UAsyncAction_ExperienceReady ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_GameModes_AsyncAction_ExperienceReady_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
