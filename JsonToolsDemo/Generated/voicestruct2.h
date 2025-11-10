// Auto-generated from JSON file
#pragma once

USTRUCT(BlueprintType)
struct FAllrecorddata
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double VoiceId = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString RecordDate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	double VoiceLength = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString LocalStorePath;

};


USTRUCT(BlueprintType)
struct FVoicestruct2
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString UserUniqueId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FAllrecorddata> AllRecordData;

};
