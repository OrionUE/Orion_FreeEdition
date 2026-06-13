// Copyright Epic Games, Inc. All Rights Reserved.

#include "PQVectorIndex.h"

#include "Algo/Sort.h"
#include "Hash/Blake3.h"

namespace UE::SemanticSearch
{
namespace
{
	constexpr uint32 PQIndexMagic = 0x31535150; // PQS1
	constexpr uint32 PQIndexVersion = 1;
	constexpr uint32 PQCodebookMagic = 0x31435150; // PQC1

	template <typename T>
	void AppendPQValue(TArray<uint8>& Bytes, const T& Value)
	{
		const int32 Offset = Bytes.AddUninitialized(sizeof(T));
		FMemory::Memcpy(Bytes.GetData() + Offset, &Value, sizeof(T));
	}

	template <typename T>
	bool ReadPQValue(TConstArrayView<uint8> Bytes, int32& Offset, T& OutValue)
	{
		if (Offset < 0 || Offset + static_cast<int32>(sizeof(T)) > Bytes.Num())
		{
			return false;
		}
		FMemory::Memcpy(&OutValue, Bytes.GetData() + Offset, sizeof(T));
		Offset += sizeof(T);
		return true;
	}

	bool ReadPQFloatArray(TConstArrayView<uint8> Bytes, int32& Offset, int32 Count, TArray<float>& OutValues)
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

	float PQL2DistanceSquared(TConstArrayView<float> A, TConstArrayView<float> B)
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

FPQVectorIndex::FPQVectorIndex(int32 InDimension, int32 InSubvectorSize, int32 InNBits)
	: Dimension(InDimension)
	, SubvectorSize(FMath::Max(InSubvectorSize, 1))
	, NumSubquantizers(InSubvectorSize > 0 ? InDimension / InSubvectorSize : InDimension)
	, NBits(InNBits)
{
}

FPQVectorIndex::~FPQVectorIndex() = default;

void FPQVectorIndex::Train(TConstArrayView<float> Vectors, int64 NumVectors)
{
	check(Vectors.Num() == NumVectors * Dimension);
	bTrained = true;
	bCodebookHashCached = false;
}

bool FPQVectorIndex::IsTrained() const
{
	return bTrained;
}

void FPQVectorIndex::Add(TConstArrayView<int64> IDs, TConstArrayView<float> Vectors)
{
	check(IsTrained());
	const int64 Count = IDs.Num();
	check(Vectors.Num() == Count * Dimension);

	for (int64 Index = 0; Index < Count; ++Index)
	{
		TArray<float> Embedding;
		Embedding.Append(Vectors.GetData() + Index * Dimension, Dimension);
		Embeddings.Add(IDs[Index], MoveTemp(Embedding));
	}
}

void FPQVectorIndex::Remove(TConstArrayView<int64> IDs)
{
	for (int64 ID : IDs)
	{
		Embeddings.Remove(ID);
	}
}

void FPQVectorIndex::AddQuantized(TConstArrayView<int64> IDs, TConstArrayView<uint8> Codes)
{
	check(IsTrained());
	const int64 Count = IDs.Num();
	const int64 ExpectedBytes = Count * Dimension * static_cast<int64>(sizeof(float));
	if (Codes.Num() != ExpectedBytes)
	{
		return;
	}

	for (int64 Index = 0; Index < Count; ++Index)
	{
		TArray<float> Embedding;
		Embedding.SetNumUninitialized(Dimension);
		FMemory::Memcpy(Embedding.GetData(), Codes.GetData() + Index * Dimension * sizeof(float), Dimension * sizeof(float));
		Embeddings.Add(IDs[Index], MoveTemp(Embedding));
	}
}

bool FPQVectorIndex::Contains(int64 ID) const
{
	return Embeddings.Contains(ID);
}

bool FPQVectorIndex::TryGetEmbedding(int64 ID, TArray<float>& OutEmbedding) const
{
	if (const TArray<float>* Embedding = Embeddings.Find(ID))
	{
		OutEmbedding = *Embedding;
		return true;
	}
	return false;
}

bool FPQVectorIndex::Update(int64 OldID, int64 NewID)
{
	if (TArray<float>* Embedding = Embeddings.Find(OldID))
	{
		TArray<float> Copy = *Embedding;
		Embeddings.Remove(OldID);
		Embeddings.Add(NewID, MoveTemp(Copy));
		return true;
	}
	return false;
}

int64 FPQVectorIndex::EstimateMemoryBytes() const
{
	return static_cast<int64>(Embeddings.Num()) * (sizeof(int64) + Dimension * sizeof(float) + 24);
}

void FPQVectorIndex::Search(
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
					const float Distance = PQL2DistanceSquared(QueryVector, *Embedding);
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
				const float Distance = PQL2DistanceSquared(QueryVector, Pair.Value);
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

TArray<uint8> FPQVectorIndex::Quantize(TConstArrayView<float> Vectors, int64 NumVectors) const
{
	check(IsTrained());
	check(Vectors.Num() == NumVectors * Dimension);

	TArray<uint8> Codes;
	Codes.Append(reinterpret_cast<const uint8*>(Vectors.GetData()), Vectors.Num() * sizeof(float));
	return Codes;
}

int64 FPQVectorIndex::GetCount() const
{
	return Embeddings.Num();
}

TArray<uint8> FPQVectorIndex::Serialize() const
{
	TArray<uint8> Result;
	AppendPQValue(Result, PQIndexMagic);
	AppendPQValue(Result, PQIndexVersion);
	AppendPQValue(Result, Dimension);
	AppendPQValue(Result, SubvectorSize);
	AppendPQValue(Result, NBits);
	AppendPQValue(Result, bTrained);
	const int32 Count = Embeddings.Num();
	AppendPQValue(Result, Count);

	for (const TPair<int64, TArray<float>>& Pair : Embeddings)
	{
		AppendPQValue(Result, Pair.Key);
		Result.Append(reinterpret_cast<const uint8*>(Pair.Value.GetData()), Pair.Value.Num() * sizeof(float));
	}
	return Result;
}

TArray<uint8> FPQVectorIndex::SerializeCodebook() const
{
	TArray<uint8> Result;
	AppendPQValue(Result, PQCodebookMagic);
	AppendPQValue(Result, PQIndexVersion);
	AppendPQValue(Result, Dimension);
	AppendPQValue(Result, SubvectorSize);
	AppendPQValue(Result, NBits);
	return Result;
}

FIoHash FPQVectorIndex::GetCodebookHash() const
{
	if (bCodebookHashCached)
	{
		return CachedCodebookHash;
	}

	const TArray<uint8> CodebookData = SerializeCodebook();
	FBlake3 Hasher;
	Hasher.Update(CodebookData.GetData(), CodebookData.Num());
	CachedCodebookHash = FIoHash(Hasher.Finalize());
	bCodebookHashCached = true;
	return CachedCodebookHash;
}

TUniquePtr<FPQVectorIndex> FPQVectorIndex::DeserializeCodebook(TConstArrayView<uint8> Data, int32 ExpectedDimension)
{
	int32 Offset = 0;
	uint32 Magic = 0;
	uint32 Version = 0;
	int32 SerializedDimension = 0;
	int32 SerializedSubvectorSize = 0;
	int32 SerializedNBits = 0;
	if (!ReadPQValue(Data, Offset, Magic) ||
		!ReadPQValue(Data, Offset, Version) ||
		!ReadPQValue(Data, Offset, SerializedDimension) ||
		!ReadPQValue(Data, Offset, SerializedSubvectorSize) ||
		!ReadPQValue(Data, Offset, SerializedNBits) ||
		Magic != PQCodebookMagic ||
		Version != PQIndexVersion ||
		SerializedDimension != ExpectedDimension)
	{
		return nullptr;
	}

	TUniquePtr<FPQVectorIndex> Index = MakeUnique<FPQVectorIndex>(ExpectedDimension, SerializedSubvectorSize, SerializedNBits);
	Index->bTrained = true;
	return Index;
}

TUniquePtr<FPQVectorIndex> FPQVectorIndex::Deserialize(TConstArrayView<uint8> Data, int32 ExpectedDimension)
{
	int32 Offset = 0;
	uint32 Magic = 0;
	uint32 Version = 0;
	int32 SerializedDimension = 0;
	int32 SerializedSubvectorSize = 0;
	int32 SerializedNBits = 0;
	bool bSerializedTrained = false;
	int32 Count = 0;
	if (!ReadPQValue(Data, Offset, Magic) ||
		!ReadPQValue(Data, Offset, Version) ||
		!ReadPQValue(Data, Offset, SerializedDimension) ||
		!ReadPQValue(Data, Offset, SerializedSubvectorSize) ||
		!ReadPQValue(Data, Offset, SerializedNBits) ||
		!ReadPQValue(Data, Offset, bSerializedTrained) ||
		!ReadPQValue(Data, Offset, Count) ||
		Magic != PQIndexMagic ||
		Version != PQIndexVersion ||
		SerializedDimension != ExpectedDimension ||
		Count < 0)
	{
		return nullptr;
	}

	TUniquePtr<FPQVectorIndex> Index = MakeUnique<FPQVectorIndex>(ExpectedDimension, SerializedSubvectorSize, SerializedNBits);
	Index->bTrained = bSerializedTrained;
	for (int32 ItemIndex = 0; ItemIndex < Count; ++ItemIndex)
	{
		int64 ID = 0;
		TArray<float> Embedding;
		if (!ReadPQValue(Data, Offset, ID) || !ReadPQFloatArray(Data, Offset, ExpectedDimension, Embedding))
		{
			return nullptr;
		}
		Index->Embeddings.Add(ID, MoveTemp(Embedding));
	}

	return Index;
}

} // namespace UE::SemanticSearch
