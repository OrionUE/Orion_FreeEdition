// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlatVectorIndex.h"

#include "Algo/Sort.h"

namespace UE::SemanticSearch
{
namespace
{
	constexpr uint32 FlatIndexMagic = 0x3153464C; // LFS1
	constexpr uint32 FlatIndexVersion = 1;

	template <typename T>
	void AppendValue(TArray<uint8>& Bytes, const T& Value)
	{
		const int32 Offset = Bytes.AddUninitialized(sizeof(T));
		FMemory::Memcpy(Bytes.GetData() + Offset, &Value, sizeof(T));
	}

	template <typename T>
	bool ReadValue(TConstArrayView<uint8> Bytes, int32& Offset, T& OutValue)
	{
		if (Offset < 0 || Offset + static_cast<int32>(sizeof(T)) > Bytes.Num())
		{
			return false;
		}
		FMemory::Memcpy(&OutValue, Bytes.GetData() + Offset, sizeof(T));
		Offset += sizeof(T);
		return true;
	}

	bool ReadFloatArray(TConstArrayView<uint8> Bytes, int32& Offset, int32 Count, TArray<float>& OutValues)
	{
		const int32 NumBytes = Count * static_cast<int32>(sizeof(float));
		if (Count < 0 || Offset < 0 || Offset + NumBytes > Bytes.Num())
		{
			return false;
		}
		OutValues.SetNumUninitialized(Count);
		FMemory::Memcpy(OutValues.GetData(), Bytes.GetData() + Offset, NumBytes);
		Offset += NumBytes;
		return true;
	}

	float SquaredL2Distance(TConstArrayView<float> A, TConstArrayView<float> B)
	{
		float Distance = 0.0f;
		for (int32 Index = 0; Index < A.Num(); ++Index)
		{
			const float Delta = A[Index] - B[Index];
			Distance += Delta * Delta;
		}
		return Distance;
	}
}

FFlatVectorIndex::FFlatVectorIndex(int32 InDimension)
	: Dimension(InDimension)
{
}

FFlatVectorIndex::~FFlatVectorIndex() = default;

void FFlatVectorIndex::Train(TConstArrayView<float> Vectors, int64 NumVectors)
{
}

void FFlatVectorIndex::Add(TConstArrayView<int64> IDs, TConstArrayView<float> Vectors)
{
	const int64 Count = IDs.Num();
	check(Vectors.Num() == Count * Dimension);

	for (int64 Index = 0; Index < Count; ++Index)
	{
		TArray<float> Embedding;
		Embedding.Append(Vectors.GetData() + Index * Dimension, Dimension);
		Embeddings.Add(IDs[Index], MoveTemp(Embedding));
	}
}

void FFlatVectorIndex::Remove(TConstArrayView<int64> IDs)
{
	for (int64 ID : IDs)
	{
		Embeddings.Remove(ID);
	}
}

void FFlatVectorIndex::Search(
	TConstArrayView<float> QueryVector,
	int32 K,
	const TSharedRef<const TArray<int64>>& IDFilterRef,
	float DistanceCutoff,
	TArray<uint32>& /*Scratch*/,
	FGraphEventRef IndexReadCompleteEvent,
	TFunction<void(TArray<FSearchResult>&&)> Continuation) const
{
	check(QueryVector.Num() == Dimension);

	TArray<FSearchResult> Results;
	const TArray<int64>& IDFilter = *IDFilterRef;

	if (K > 0)
	{
		if (IDFilter.Num() > 0)
		{
			for (int64 ID : IDFilter)
			{
				if (const TArray<float>* Embedding = Embeddings.Find(ID))
				{
					const float Distance = SquaredL2Distance(QueryVector, *Embedding);
					if (Distance < DistanceCutoff)
					{
						Results.Add({ ID, Distance });
					}
				}
			}
		}
		else
		{
			for (const TPair<int64, TArray<float>>& Pair : Embeddings)
			{
				const float Distance = SquaredL2Distance(QueryVector, Pair.Value);
				if (Distance < DistanceCutoff)
				{
					Results.Add({ Pair.Key, Distance });
				}
			}
		}
	}

	if (IndexReadCompleteEvent.IsValid())
	{
		IndexReadCompleteEvent->DispatchSubsequents();
	}

	Algo::SortBy(Results, &FSearchResult::Distance);
	if (Results.Num() > K)
	{
		Results.SetNum(K);
	}
	Continuation(MoveTemp(Results));
}

int64 FFlatVectorIndex::GetCount() const
{
	return Embeddings.Num();
}

bool FFlatVectorIndex::Contains(int64 ID) const
{
	return Embeddings.Contains(ID);
}

bool FFlatVectorIndex::TryGetEmbedding(int64 ID, TArray<float>& OutEmbedding) const
{
	if (const TArray<float>* Embedding = Embeddings.Find(ID))
	{
		OutEmbedding = *Embedding;
		return true;
	}
	return false;
}

int64 FFlatVectorIndex::EstimateMemoryBytes() const
{
	return static_cast<int64>(Embeddings.Num()) * (sizeof(int64) + Dimension * sizeof(float) + 24);
}

TArray<uint8> FFlatVectorIndex::Serialize() const
{
	TArray<uint8> Result;
	AppendValue(Result, FlatIndexMagic);
	AppendValue(Result, FlatIndexVersion);
	AppendValue(Result, Dimension);
	const int32 Count = Embeddings.Num();
	AppendValue(Result, Count);

	for (const TPair<int64, TArray<float>>& Pair : Embeddings)
	{
		AppendValue(Result, Pair.Key);
		Result.Append(reinterpret_cast<const uint8*>(Pair.Value.GetData()), Pair.Value.Num() * sizeof(float));
	}

	return Result;
}

TUniquePtr<FFlatVectorIndex> FFlatVectorIndex::Deserialize(TConstArrayView<uint8> Data, int32 ExpectedDimension)
{
	int32 Offset = 0;
	uint32 Magic = 0;
	uint32 Version = 0;
	int32 SerializedDimension = 0;
	int32 Count = 0;
	if (!ReadValue(Data, Offset, Magic) ||
		!ReadValue(Data, Offset, Version) ||
		!ReadValue(Data, Offset, SerializedDimension) ||
		!ReadValue(Data, Offset, Count) ||
		Magic != FlatIndexMagic ||
		Version != FlatIndexVersion ||
		SerializedDimension != ExpectedDimension ||
		Count < 0)
	{
		return nullptr;
	}

	TUniquePtr<FFlatVectorIndex> Index = MakeUnique<FFlatVectorIndex>(ExpectedDimension);
	for (int32 ItemIndex = 0; ItemIndex < Count; ++ItemIndex)
	{
		int64 ID = 0;
		TArray<float> Embedding;
		if (!ReadValue(Data, Offset, ID) || !ReadFloatArray(Data, Offset, ExpectedDimension, Embedding))
		{
			return nullptr;
		}
		Index->Embeddings.Add(ID, MoveTemp(Embedding));
	}

	return Index;
}

} // namespace UE::SemanticSearch
