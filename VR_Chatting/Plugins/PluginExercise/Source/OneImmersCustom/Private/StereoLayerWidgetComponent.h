// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetComponent.h"
#include "StereoLayerWidgetComponent.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class UStereoLayerWidgetComponent : public UWidgetComponent
{
	GENERATED_UCLASS_BODY()

	virtual UMaterialInterface* GetMaterial(int32 ElementIndex) const override;


//protected:
//
//	/** Allows subclasses to control if the widget should be drawn.  Called right before we draw the widget. */
//	virtual bool ShouldDrawWidget() const override;

public:
	//virtual bool IsVisible() const;


	//~ Begin UObject Interface
	void BeginDestroy() override;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;


private:
	bool IsInStereoLayerMode() const;

	/** Dirty state determines whether the stereo layer needs updating **/
	bool bIsDirty;

	/** Texture needs to be marked for update **/
	bool bTextureNeedsUpdate;

	/** IStereoLayer id, 0 is unassigned **/
	uint32 LayerId;

	/** Last transform is cached to determine if the new frames transform has changed **/
	FTransform LastTransform;

	/** Last frames visiblity state **/
	bool bLastVisible;
	   
	FTransform GetRelativeTransformFromCamera();

public:

	/** Render priority among all stereo layers, higher priority render on top of lower priority **/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StereoLayerWidget")
	int32 Priority;

	/** True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StereoLayerWidget")
	uint32 bLiveTexture : 1;

	/** True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StereoLayerWidget")
	uint32 bSupportsDepth : 1;

	/** True if the texture should not use its own alpha channel (1.0 will be substituted) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StereoLayerWidget")
	uint32 bNoAlphaChannel : 1;

	/** True if the quad should internally set it's Y value based on the set texture's dimensions */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StereoLayerWidget")
	uint32 bQuadPreserveTextureRatio : 1;

	/** True if the quad should internally set it's Y value based on the set texture's dimensions */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StereoLayerWidget")
	uint32 bStereoLayerEnabled : 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "StereoLayerWidget")
	uint32 bLiveTransform : 1;

protected:

	UPROPERTY()
	UMaterialInterface* NoDrawMaterial;
};
