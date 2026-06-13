// Copyright Epic Games, Inc. All Rights Reserved.

#include "JsonUtilitiesEditorModularFeature.h"

#include "JsonSchema/JsonSchemaGeneratorEditor.h"

/*virtual*/ FJsonSchemaEditorMetadata FJsonUtilitiesEditorModularFeature::FPropertyToJsonSchemaMetadata(TNotNull<const FProperty*> Property,
	const FJsonSchemaPropertyFilter& PropertyFilter, const void* InstanceMemory) const
{
	return FJsonSchemaGeneratorEditor::FPropertyToJsonSchemaMetadata(Property, PropertyFilter, InstanceMemory);
}

/*virtual*/ FJsonSchemaEditorMetadata FJsonUtilitiesEditorModularFeature::UStructToJsonSchemaMetadata(TNotNull<const UStruct*> Struct,
	const FJsonSchemaPropertyFilter& PropertyFilter, const void* InstanceMemory) const
{
	return FJsonSchemaGeneratorEditor::UStructToJsonSchemaMetadata(Struct, PropertyFilter, InstanceMemory);
}

