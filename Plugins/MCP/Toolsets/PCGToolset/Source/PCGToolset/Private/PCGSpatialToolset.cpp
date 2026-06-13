// Copyright Epic Games, Inc. All Rights Reserved.

#include "PCGSpatialToolset.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(PCGSpatialToolset)

UPCGExecuteGraphInstanceAsyncResult* UPCGSpatialToolset::RunPCGInstantGraph(UPCGGraph* Graph, const TMap<FString, FString>& Params)
{
	UPCGExecuteGraphInstanceAsyncResult* AsyncResult = NewObject<UPCGExecuteGraphInstanceAsyncResult>();
	AsyncResult->SetError(TEXT("PCGSpatialToolset requires UE 5.8 PCG instant graph execution APIs. This project is compiling against the UE 5.6-based source branch."));
	return AsyncResult;
}
