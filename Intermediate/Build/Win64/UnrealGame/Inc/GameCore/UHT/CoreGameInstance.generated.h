// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "System/CoreGameInstance.h"

#ifdef GAMECORE_CoreGameInstance_generated_h
#error "CoreGameInstance.generated.h already included, missing '#pragma once' in CoreGameInstance.h"
#endif
#define GAMECORE_CoreGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UCoreGameInstance ********************************************************
struct Z_Construct_UClass_UCoreGameInstance_Statics;
GAMECORE_API UClass* Z_Construct_UClass_UCoreGameInstance(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_26_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UCoreGameInstance_Statics; \
	friend GAMECORE_API UClass* ::Z_Construct_UClass_UCoreGameInstance(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UCoreGameInstance, UCommonGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GameCore"), Z_Construct_UClass_UCoreGameInstance) \
	DECLARE_SERIALIZER(UCoreGameInstance)


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCoreGameInstance(UCoreGameInstance&&) = delete; \
	UCoreGameInstance(const UCoreGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCoreGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCoreGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCoreGameInstance) \
	NO_API virtual ~UCoreGameInstance();


#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_23_PROLOG
#define FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_26_INCLASS_NO_PURE_DECLS \
	FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCoreGameInstance;

// ********** End Class UCoreGameInstance **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Source_GameCore_Public_System_CoreGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
