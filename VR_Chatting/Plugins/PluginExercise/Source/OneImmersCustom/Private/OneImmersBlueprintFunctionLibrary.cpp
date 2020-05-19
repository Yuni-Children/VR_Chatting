// Fill out your copyright notice in the Description page of Project Settings.

#include "OneImmersBlueprintFunctionLibrary.h"
#include "Engine/Engine.h"

#include "Stats/StatsData.h"
#include "Kismet/GameplayStatics.h"





float UOneImmersBlueprintFunctionLibrary::AngularDistance(FRotator A, FRotator B)
{
	FQuat AQuat(A);
	FQuat BQuat(B);

	return AQuat.AngularDistance(BQuat);
}

AWorldSettings* UOneImmersBlueprintFunctionLibrary::GetWorldSettings(UObject* WorldContextObject)
{
	UWorld* World = WorldContextObject->GetWorld();
	return World != nullptr ? World->GetWorldSettings() : nullptr;
}

void UOneImmersBlueprintFunctionLibrary::DoGarbageCollection(UObject* WorldContextObject)
{
	GEngine->ForceGarbageCollection(true);
}

void UOneImmersBlueprintFunctionLibrary::DelayGarbageCollection()
{
	GEngine->DelayGarbageCollection();
}

float UOneImmersBlueprintFunctionLibrary::GetStatCounter(UObject* WorldContextObject, FName StatGroup, FName StatName)
{
#if STATS
	if (FGameThreadStatsData* StatsData = FLatestGameThreadStatsData::Get().Latest)
	{
		const FString GroupNameString = FString(TEXT("STATGROUP_")) + StatGroup.ToString();
		const FName GroupNameFull = FName(*GroupNameString, EFindName::FNAME_Find);

		const FString StatNameString = FString(TEXT("STAT_")) + StatName.ToString();
		const FName StatNameFull = FName(*StatNameString, EFindName::FNAME_Find);

		int32 index = StatsData->GroupNames.Find(GroupNameFull);

		if (index != INDEX_NONE)
		{
			FActiveStatGroupInfo& StatGroupInfo = StatsData->ActiveStatGroups[index];
			for (auto& CounterIt : StatGroupInfo.CountersAggregate)
			{
				FComplexStatMessage& StatMessage = CounterIt;
				if (StatMessage.GetShortName() == StatNameFull)
				{
					return StatMessage.GetValue_double(EComplexStatField::IncAve);
					break;
				}
			}
		}
	}
#endif

	return 0.0f;

}
