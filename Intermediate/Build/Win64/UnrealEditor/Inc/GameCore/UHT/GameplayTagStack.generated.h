// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/GameplayTagStack.h"

#ifdef GAMECORE_GameplayTagStack_generated_h
#error "GameplayTagStack.generated.h already included, missing '#pragma once' in GameplayTagStack.h"
#endif
#define GAMECORE_GameplayTagStack_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGameplayTagStack *************************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_GameplayTagStack_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagStack_Statics; \
	GAMECORE_API static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializerItem Super;


struct FGameplayTagStack;
// ********** End ScriptStruct FGameplayTagStack ***************************************************

// ********** Begin ScriptStruct FGameplayTagStackContainer ****************************************
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_GameplayTagStack_h_51_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameplayTagStackContainer_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFastArraySerializer Super; \
	UE_NET_DECLARE_FASTARRAY(FGameplayTagStackContainer, Stacks, );


struct FGameplayTagStackContainer;
// ********** End ScriptStruct FGameplayTagStackContainer ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_GameplayTagStack_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
