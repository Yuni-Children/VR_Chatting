// Fill out your copyright notice in the Description page of Project Settings.


#include "AvatarAnimInstance.h"
#include "CharacterTrackerComponent.h"


UAvatarAnimInstance::UAvatarAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

void FAvatarAnimInstanceProxy::PreUpdate(UAnimInstance * InAnimInstance, float DeltaSeconds)
{
	Super::PreUpdate(InAnimInstance, DeltaSeconds);

	if (AActor* Owner = InAnimInstance->GetOwningActor())
	{
		if (UCharacterTrackerComponent* Tracker = Owner->FindComponentByClass<UCharacterTrackerComponent>())
		{
			const UAvatarAnimInstance* AvatarAnimInstance = CastChecked<UAvatarAnimInstance>(InAnimInstance);

			Scale = FVector(Tracker->EyeHeight / AvatarAnimInstance->DefaultEyeHeight);
			WingSpanScale = FVector(Tracker->Wingspan / AvatarAnimInstance->DefaultWingSpan);

			HeadRotation = FRotator(FQuat(InAnimInstance->GetOwningComponent()->RelativeRotation.GetInverse()) * FQuat(Tracker->GetHeadRotation()) * FQuat(InAnimInstance->GetOwningComponent()->RelativeRotation));

			LeftHand = AvatarAnimInstance->LControllerOffset * Tracker->GetTrackerParentComponentSpaceTransform(Tracker->LeftTransformCached, AvatarAnimInstance->MeshOffsetInverse);
			RightHand = AvatarAnimInstance->RControllerOffset * Tracker->GetTrackerParentComponentSpaceTransform(Tracker->RightTransformCached, AvatarAnimInstance->MeshOffsetInverse);

		}
	}
}
