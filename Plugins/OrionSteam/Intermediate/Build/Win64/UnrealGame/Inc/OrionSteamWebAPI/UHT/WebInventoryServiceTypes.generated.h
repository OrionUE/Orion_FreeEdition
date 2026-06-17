// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryService/WebInventoryServiceTypes.h"

#ifdef ORIONSTEAMWEBAPI_WebInventoryServiceTypes_generated_h
#error "WebInventoryServiceTypes.generated.h already included, missing '#pragma once' in WebInventoryServiceTypes.h"
#endif
#define ORIONSTEAMWEBAPI_WebInventoryServiceTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FModifyItemsItem **************************************************
struct Z_Construct_UScriptStruct_FModifyItemsItem_Statics;
ORIONSTEAMWEBAPI_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemsItem(ETypeConstructPhase);

#define FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceTypes_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FModifyItemsItem_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FModifyItemsItem(ETypeConstructPhase::Inner); }


struct FModifyItemsItem;
// ********** End ScriptStruct FModifyItemsItem ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Orion_FreeEdition_Plugins_OrionSteam_Source_OrionSteamWebAPI_Public_InventoryService_WebInventoryServiceTypes_h

// ********** Begin Enum EModifyItemPropertyType ***************************************************
#define FOREACH_ENUM_EMODIFYITEMPROPERTYTYPE(op) \
	op(EModifyItemPropertyType::STRING) \
	op(EModifyItemPropertyType::BOOL) \
	op(EModifyItemPropertyType::INT) \
	op(EModifyItemPropertyType::FLOAT) \
	op(EModifyItemPropertyType::REMOVE) 

enum class EModifyItemPropertyType : uint8;
template<> struct TIsUEnumClass<EModifyItemPropertyType> { enum { Value = true }; };
template<> UE_NODEBUG ORIONSTEAMWEBAPI_NON_ATTRIBUTED_API UEnum* StaticEnum<EModifyItemPropertyType>();
// ********** End Enum EModifyItemPropertyType *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
