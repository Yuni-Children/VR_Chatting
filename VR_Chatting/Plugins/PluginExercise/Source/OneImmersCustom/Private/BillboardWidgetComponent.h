// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "BillboardWidgetComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent), ShowCategories = (LOD))
class UBillboardWidgetComponent : public UWidgetComponent
{
	GENERATED_BODY()

public:

	// Sets default values for this component's properties
	UBillboardWidgetComponent();

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool LockZAxis;

};
