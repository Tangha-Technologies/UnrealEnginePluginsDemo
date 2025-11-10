// Auto-generated from JSON file
#pragma once

USTRUCT(BlueprintType)
struct FArmortypes
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FType> Type;

};

USTRUCT(BlueprintType)
struct FType
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Id;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Type;

};


USTRUCT(BlueprintType)
struct FArmortypes
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FArmortypes ArmorTypes;

};
