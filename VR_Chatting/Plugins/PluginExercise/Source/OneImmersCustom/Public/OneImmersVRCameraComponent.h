// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "OneImmersVRCameraComponent.generated.h"

/**
 * 
 */
UCLASS(HideCategories = (CameraOptions), Blueprintable, ClassGroup = Camera, meta = (BlueprintSpawnableComponent))
class ONEIMMERSCUSTOM_API UOneImmersVRCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
	
	
public:
	/** Default constuctor. */
	UOneImmersVRCameraComponent();

	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView);
	
};
