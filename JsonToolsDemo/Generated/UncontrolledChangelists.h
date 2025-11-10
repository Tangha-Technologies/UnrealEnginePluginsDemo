// Auto-generated from JSON file
#pragma once

USTRUCT(BlueprintType)
struct FChangelists
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Guid;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Description;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString> Files;

};


USTRUCT(BlueprintType)
struct FUncontrolledchangelists
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double Version = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FChangelists> Changelists;

};
