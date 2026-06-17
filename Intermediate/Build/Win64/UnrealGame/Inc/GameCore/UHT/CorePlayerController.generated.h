// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/CorePlayerController.h"

#ifdef GAMECORE_CorePlayerController_generated_h
#error "CorePlayerController.generated.h already included, missing '#pragma once' in CorePlayerController.h"
#endif
#define GAMECORE_CorePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACorePlayerState;
class UCoreAbilitySystemComponent;

// ********** Begin Class ACorePlayerController ****************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientOnPlayerInitialized_Implementation(); \
	DECLARE_FUNCTION(execClientOnPlayerInitialized); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execGetCoreAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetCorePlayerState);


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_CALLBACK_WRAPPERS
struct Z_Construct_UClass_ACorePlayerController_Statics;
GAMECORE_API UClass* Z_Construct_UClass_ACorePlayerController(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_ACorePlayerController_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_ACorePlayerController(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(ACorePlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_ACorePlayerController) \
	DECLARE_SERIALIZER(ACorePlayerController)


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACorePlayerController(ACorePlayerController&&) = delete; \
	ACorePlayerController(const ACorePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACorePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACorePlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACorePlayerController) \
	NO_API virtual ~ACorePlayerController();


#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_27_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_CALLBACK_WRAPPERS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACorePlayerController;

// ********** End Class ACorePlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_Player_CorePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
