// Fill out your copyright notice in the Description page of Project Settings.

#include "MCTrackComponent.h"


// Sets default values for this component's properties
UMCTrackerComponent::UMCTrackerComponent() : NumTrackedVelocity(20.0f)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMCTrackerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMCTrackerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	UpdateHandVelocity(DeltaTime);
}

void UMCTrackerComponent::Grab()
{
	IsGrabbed = true;
	GrabbedLocation = CurrentTrackedLoc = GetAnchorLoc();
	TrackedVelocityArray.Reset();
}

void UMCTrackerComponent::Release()
{
	FixedInWorld = false;
	IsGrabbed = false;
}

void UMCTrackerComponent::RetrieveDeltaLoc(FVector & DeltaLoc)
{
	FVector tmp = GetAnchorLoc();
	DeltaLoc = GrabbedLocation - tmp;
	if (!FixedInWorld)
		DeltaLoc = FVector::VectorPlaneProject(DeltaLoc, FVector(0, 0, 1.f));
	GrabbedLocation = tmp;
}

const FVector UMCTrackerComponent::GetAvgVelocity()
{
	FVector Sum(0.f);
	FVector Average(0.f);

	if (TrackedVelocityArray.Num() > 0)
	{
		for (int32 VecIdx = 0; VecIdx<TrackedVelocityArray.Num(); VecIdx++)
		{
			Sum += TrackedVelocityArray[VecIdx];
		}

		Average = Sum / ((float)TrackedVelocityArray.Num());

		if (!FixedInWorld)
			Average = FVector::VectorPlaneProject(Average, FVector(0, 0, 1.f));
	}

	return Average;
}

void UMCTrackerComponent::UpdateHandVelocity(float Delta)
{
	if (IsGrabbed)
	{
		FVector tmp = GetOwner()->GetRootComponent()->GetRelativeTransform().GetTranslation();
		TrackedVelocityArray.Add((CurrentTrackedLoc - tmp) / Delta);
		CurrentTrackedLoc = tmp;


		if (TrackedVelocityArray.Num() > NumTrackedVelocity)
		{
			TrackedVelocityArray.RemoveAt(0);
		}
	}
}


const FVector UMCTrackerComponent::GetAnchorLoc() const
{
	FVector Offset(10, 0, 0);
	FTransform tmpTransform = GetOwner()->GetRootComponent()->GetRelativeTransform();
	return tmpTransform.GetRotation().RotateVector(Offset) + tmpTransform.GetTranslation();
}

void UMCTrackerComponent::GetTrackerTransform(FTransform & OutTrans, bool & IsFixed) const
{
	OutTrans = FixedInWorld ? FixedInWorldTransform : GetOwner()->GetRootComponent()->GetRelativeTransform();
	IsFixed = FixedInWorld;
}

void UMCTrackerComponent::FixInWorldSpace(const FTransform& InTrans)
{
	FixedInWorld = true;
	FixedInWorldTransform = InTrans;
}

