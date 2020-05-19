// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BillboardObjectComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), ShowCategories = (LOD))
class UBillboardObjectComponent : public USceneComponent
{
	GENERATED_BODY()

public:

	// Sets default values for this component's properties
	UBillboardObjectComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|Billboard")
	bool LockZAxis;
};
