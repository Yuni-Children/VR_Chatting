// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Animation/AnimInstanceProxy.h"
#include "AvatarAnimInstance.generated.h"


USTRUCT(BlueprintType)
struct FAvatarAnimInstanceProxy : public FAnimInstanceProxy
{

	GENERATED_BODY()

	FAvatarAnimInstanceProxy()
		: FAnimInstanceProxy()
		, Scale(1.0f), WingSpanScale(1.0f), HeadRotation(), LeftHand(), RightHand()

	{
	}

	FAvatarAnimInstanceProxy(UAnimInstance* Instance);

	virtual void PreUpdate(UAnimInstance* InAnimInstance, float DeltaSeconds) override;

protected:

	UPROPERTY(Transient, BlueprintReadonly, Category = "AvatarInstance")
	FVector Scale;

	UPROPERTY(Transient, BlueprintReadonly, Category = "AvatarInstance")
	FVector WingSpanScale;

	UPROPERTY(Transient, BlueprintReadonly, Category = "AvatarInstance")
	FRotator HeadRotation;

	UPROPERTY(Transient, BlueprintReadonly, Category = "AvatarInstance")
	FTransform LeftHand;

	UPROPERTY(Transient, BlueprintReadonly, Category = "AvatarInstance")
	FTransform RightHand;	
};

UCLASS(Transient, Blueprintable)
class ONEIMMERSCUSTOM_API UAvatarAnimInstance : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

private:

	UPROPERTY(Transient, BlueprintReadOnly, Category = "AvatarInstance", meta = (AllowPrivateAccess = "true"))
	FAvatarAnimInstanceProxy Proxy;

	virtual FAnimInstanceProxy* CreateAnimInstanceProxy() override
	{
		return &Proxy;
	}

	virtual void DestroyAnimInstanceProxy(FAnimInstanceProxy* InProxy) override
	{

	}

	friend struct FAvatarAnimInstanceProxy;

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AvatarInstance")
	FTransform MeshOffsetInverse;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AvatarInstance")
	FTransform LControllerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AvatarInstance")
	FTransform RControllerOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AvatarInstance")
	float DefaultEyeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AvatarInstance")
	float DefaultWingSpan;


};
