// Fill out your copyright notice in the Description page of Project Settings.

#include "BillboardWidgetComponent.h"
#include "OneImmersCustom.h"

#include "Misc/EngineVersionComparison.h"

UBillboardWidgetComponent::UBillboardWidgetComponent() : LockZAxis(true)
{

}


void UBillboardWidgetComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
#if !UE_SERVER
	const float RenderTimeThreshold = .5f;

	if (!IsRunningDedicatedServer())
	{
		if (IsVisible())
		{
#if UE_VERSION_OLDER_THAN(4, 23, 0)
			float tmpLastRenderTime = LastRenderTime;
#else
			float tmpLastRenderTime = GetLastRenderTime();
#endif

			if (TickWhenOffscreen || GetWorld()->TimeSince(tmpLastRenderTime) <= RenderTimeThreshold)
			{
				if ((GetCurrentTime() - LastWidgetRenderTime) >= RedrawTime)
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

						//UE_LOG(LogOneImmersCustom, Log, TEXT("Location %3.2f, %3.2f, %3.2f"), DirToCamera.X, DirToCamera.Y, DirToCamera.Z);
					}
				}
			}
		}
	}
#endif // !UE_SERVER

	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}