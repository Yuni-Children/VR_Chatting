// Fill out your copyright notice in the Description page of Project Settings.


#include "StereoLayerWidgetComponent.h"

#include "IStereoLayers.h"
#include "Camera/CameraComponent.h"
#include "UObject/ConstructorHelpers.h"


UStereoLayerWidgetComponent::UStereoLayerWidgetComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, bIsDirty(true)
	, bTextureNeedsUpdate(false)
	, LayerId(0)
	, LastTransform(FTransform::Identity)
	, bLastVisible(false)
	, Priority(0)
	, bLiveTexture(false)
	, bSupportsDepth(false)
	, bNoAlphaChannel(false)
	, bQuadPreserveTextureRatio(false)
	, bStereoLayerEnabled(false)
	, bLiveTransform(false)
{
	PrimaryComponentTick.bCanEverTick = true;
	//PrimaryComponentTick.TickGroup = TG_PostPhysics;

	// Masked material instances
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> NoDrawMaterial_Finder(TEXT("/OneImmersCustom/Materials/Widget3DPassThrough_NoDraw"));
	NoDrawMaterial = NoDrawMaterial_Finder.Object;
}

UMaterialInterface * UStereoLayerWidgetComponent::GetMaterial(int32 ElementIndex) const
{
	if (IsInStereoLayerMode())
	{
		return NoDrawMaterial;
	}
	else
	{
		return Super::GetMaterial(ElementIndex);
	}
}

//bool UStereoLayerWidgetComponent::ShouldDrawWidget() const
//{
//	//const float RenderTimeThreshold = .5f;
//	//if (Super::IsVisible())
//	//{
//	//	// If we don't tick when off-screen, don't bother ticking if it hasn't been rendered recently
//	//	if (TickWhenOffscreen || GetWorld()->TimeSince(LastRenderTime) <= RenderTimeThreshold)
//	//	{
//	//		if ((GetCurrentTime() - LastWidgetRenderTime) >= RedrawTime)
//	//		{
//	//			return bManuallyRedraw ? bRedrawRequested : true;
//	//		}
//	//	}
//	//}
//
//	//return false;
//
//	return Super::ShouldDrawWidget();
//}
//
//bool UStereoLayerWidgetComponent::IsVisible() const
//{
//	//return Super::IsVisible() && !IsInStereoLayerMode();
//	return Super::IsVisible();
//}

bool UStereoLayerWidgetComponent::IsInStereoLayerMode() const
{
	return bStereoLayerEnabled && GEngine && GEngine->XRSystem.IsValid() && GetWorld() && !GIsEditor && GetWorld()->WorldType != EWorldType::Editor && GEngine->StereoRenderingDevice.IsValid() && GEngine->StereoRenderingDevice->GetStereoLayers() != nullptr;
}

void UStereoLayerWidgetComponent::BeginDestroy()
{
	Super::BeginDestroy();

	IStereoLayers* StereoLayers;
	if (LayerId && GEngine->StereoRenderingDevice.IsValid() && (StereoLayers = GEngine->StereoRenderingDevice->GetStereoLayers()) != nullptr)
	{
		StereoLayers->DestroyLayer(LayerId);
		LayerId = 0;
	}
}

void UStereoLayerWidgetComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
#if !UE_SERVER
	if (!IsRunningDedicatedServer())
	{
		if (IsInStereoLayerMode())
		{
			UTexture* Tex = (UTexture *)RenderTarget;

			{
				IStereoLayers* StereoLayers = GEngine->StereoRenderingDevice->GetStereoLayers();

				FTransform Transform;

				// If the transform changed dirty the layer and push the new transform
				if (!bIsDirty && bLastVisible != bVisible)
				{
					bIsDirty = true;
					Transform = GetRelativeTransformFromCamera();
				} 
				else if (bLiveTexture)
				{
					Transform = GetRelativeTransformFromCamera();

					if (FMemory::Memcmp(&LastTransform, &Transform, sizeof(Transform)) != 0)
					{
						bIsDirty = true;
					}
				}


				bool bCurrVisible = bVisible;

				if (!Tex || !Tex->Resource)
				{
					bCurrVisible = false;
				}

				if (bIsDirty)
				{
					if (!bCurrVisible)
					{
						if (LayerId)
						{
							StereoLayers->DestroyLayer(LayerId);
							LayerId = 0;
						}
					}
					else
					{
						IStereoLayers::FLayerDesc LayerDsec;
						LayerDsec.Priority = Priority;
						LayerDsec.QuadSize = DrawSize;
						LayerDsec.UVRect = FBox2D(FVector2D(0.0f, 0.0f), FVector2D(1.0f, 1.0f));
						LayerDsec.Transform = FTransform(FRotator(0.0f, -180.0f, 0.0f)) * Transform;
						if (Tex)
						{
							LayerDsec.Texture = Tex->Resource->TextureRHI;
						}

						LayerDsec.Flags |= (bLiveTexture) ? IStereoLayers::LAYER_FLAG_TEX_CONTINUOUS_UPDATE : 0;
						LayerDsec.Flags |= (bNoAlphaChannel) ? IStereoLayers::LAYER_FLAG_TEX_NO_ALPHA_CHANNEL : 0;
						LayerDsec.Flags |= (bQuadPreserveTextureRatio) ? IStereoLayers::LAYER_FLAG_QUAD_PRESERVE_TEX_RATIO : 0;
						LayerDsec.Flags |= (bSupportsDepth) ? IStereoLayers::LAYER_FLAG_SUPPORT_DEPTH : 0;

						LayerDsec.PositionType = IStereoLayers::FaceLocked;
						LayerDsec.ShapeType = IStereoLayers::QuadLayer;

						if (LayerId)
						{
							StereoLayers->SetLayerDesc(LayerId, LayerDsec);
						}
						else
						{
							LayerId = StereoLayers->CreateLayer(LayerDsec);
						}
					}
					LastTransform = Transform;
					bLastVisible = bCurrVisible;
					bIsDirty = false;
				}

				if (bTextureNeedsUpdate && LayerId)
				{
					StereoLayers->MarkTextureForUpdate(LayerId);
					bTextureNeedsUpdate = false;
				}
			}
		}

	}
#endif // !UE_SERVER

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

FTransform UStereoLayerWidgetComponent::GetRelativeTransformFromCamera()
{
	FTransform Transform = GetRelativeTransform();

	//@TODO: CAMERA: How does this work for stereo and/or split-screen?
	APlayerController* PlayerController = nullptr;
	if (GetWorld() && GetWorld()->GetGameInstance())
	{
		PlayerController = GetWorld()->GetGameInstance()->GetFirstLocalPlayerController();

		if (PlayerController && PlayerController->GetPawn() && PlayerController->PlayerCameraManager)
		{
			TInlineComponentArray<UCameraComponent*> Cameras;
			PlayerController->GetPawn()->GetComponents<UCameraComponent>(/*out*/ Cameras);
			for (UCameraComponent* CameraComponent : Cameras)
			{
				if (CameraComponent->bIsActive)
				{
					Transform = GetComponentTransform().GetRelativeTransform(CameraComponent->GetComponentTransform());

					//UE_LOG(LogOneImmersCustom, Log, TEXT("Transform %s"), *Transform.ToString());


					break;
				}
			}

			//Transform = //PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentTransform().GetRelativeTransform(GetComponentTransform());
			//	//
			//	GetComponentTransform().GetRelativeTransform(PlayerController->GetPawn()->GetActorTransform());
			//Transform = GetComponentTransform().GetRelativeTransform(PlayerController->PlayerCameraManager->GetRootComponent()->GetComponentTransform());
			//Transform = GetComponentTransform().GetRelativeTransform(FTransform(MinimalViewInfo.Rotation, MinimalViewInfo.Location));
			//Transform = GetComponentTransform();
		}
	}

	return Transform;
}

