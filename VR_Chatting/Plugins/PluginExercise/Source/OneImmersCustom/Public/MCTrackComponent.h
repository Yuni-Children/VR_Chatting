// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MCTrackComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ONEIMMERSCUSTOM_API UMCTrackerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMCTrackerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void Grab();

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void Release();

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void RetrieveDeltaLoc(FVector& DeltaLoc);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	const FVector GetAvgVelocity();

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FVector GetAnchorLoc() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	void GetTrackerTransform(FTransform & OutTrans, bool & IsFixed) const;

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void FixInWorldSpace(const FTransform& InTrans);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "OI|GrabLocomotion")
	int NumTrackedVelocity;

	UPROPERTY(BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool FixedInWorld;

	UPROPERTY(BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool IsGrabbed;

private:
	void UpdateHandVelocity(float Delta);

	FTransform FixedInWorldTransform;

	FVector GrabbedLocation;
	FVector CurrentTrackedLoc;

	TArray<FVector> TrackedVelocityArray;

};
