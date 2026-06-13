// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Implementations/ThumbnailBaseProcessor.h"

namespace UE::SemanticSearch::Private
{

class FSkeletalMeshProcessor : public FThumbnailBaseAssetProcessor
{
public:
	FSkeletalMeshProcessor();

	constexpr virtual FStringView GetProcessSubBucketName() const override
	{
		return TEXTVIEW("FSkeletalMeshProcessor");
	}

	// Thread safe
	virtual UClass& GetSupportedClass() const override;
	virtual bool SupportDerivedClasses() const override;

	virtual TSharedPtr<FJsonObject> GetMetadata(const TSharedRef<const FAssetData>& InAsset) const override;
};

}
