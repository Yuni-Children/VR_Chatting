// Fill out your copyright notice in the Description page of Project Settings.

#include "BillboardObjectComponent.h"
#include "OneImmersCustom.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

UBillboardObjectComponent::UBillboardObjectComponent() : LockZAxis(true)
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UBillboardObjectComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
#if !UE_SERVER
	const float RenderTimeThreshold = .5f;

	if (!IsRunningDedicatedServer())
	{
		if (IsVisible())
		{
			//if (GetWorld()->TimeSince(LastRenderTime) <= RenderTimeThreshold)
			{
			//	if ((GetCurrentTime() - LastWidgetRenderTime) >= RedrawTime)
				{
					//@TODO: CAMERA: How does this work for stereo and/or split-screen?
					APlayerController* PlayerController = nullptr;
					if (GetWorld() && GetWorld()->GetGameInstance())
					{
						PlayerController = GetWorld()->GetGameInstance()->GetFirstLocalPlayerController();
					}

					// Orient the Z axis toward the camera
					if (PlayerController && PlayerController->PlayerCameraManager)
					{						
						// Direction of the camera
						FVector DirToCamera = PlayerController->PlayerCameraManager->GetCameraLocation() - GetComponentLocation();
						DirToCamera.Normalize();

						if (LockZAxis)
						{
							SetWorldRotation(FRotationMatrix::MakeFromZX(FVector(0, 0, 1), DirToCamera).Rotator(), false, nullptr, ETeleportType::TeleportPhysics);
						}
						else
						{	
							SetWorldRotation(FRotationMatrix::MakeFromXZ(DirToCamera, FVector(0, 0, 1)).Rotator(), false, nullptr, ETeleportType::TeleportPhysics);
						}

						//UE_LOG(LogTemp, Warning, TEXT("Location %3.2f, %3.2f, %3.2f"), DirToCamera.X, DirToCamera.Y, DirToCamera.Z);
					}
				}
			}
		}
	}
#endif // !UE_SERVER

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}