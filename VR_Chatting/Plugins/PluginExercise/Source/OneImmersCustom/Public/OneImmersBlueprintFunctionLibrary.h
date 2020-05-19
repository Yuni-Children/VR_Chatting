// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/WorldSettings.h"
#include "OneImmersBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class ONEIMMERSCUSTOM_API UOneImmersBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	
public:
	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	static float AngularDistance(FRotator A, FRotator B);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static AWorldSettings* GetWorldSettings(UObject* WorldContextObject);
	
	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static void DoGarbageCollection(UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	static void DelayGarbageCollection();

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion", meta = (HidePin = "WorldContextObject", DefaultToSelf = "WorldContextObject"))
	static float GetStatCounter(UObject* WorldContextObject, FName StatGroup, FName StatName);
};
