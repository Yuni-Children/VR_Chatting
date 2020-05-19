// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CharacterTrackerComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGhostModeChanged, bool, GhostModeChanged);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnBrakingModeChanged, bool, BrakingModeChanged);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ONEIMMERSCUSTOM_API UCharacterTrackerComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCharacterTrackerComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(Replicated)
	FTransform HeadTrackerTransform;

	UPROPERTY(Replicated)
	FTransform LeftTrackerTransform;

	UPROPERTY(Replicated)
	FTransform RightTrackerTransform;

	// for smoothing
	UPROPERTY(BlueprintReadOnly, Category = "OI|GrabLocomotion", meta = (DisplayName = "HeadTransform"))
	FTransform HeadTransformCached;
	UPROPERTY(BlueprintReadOnly, Category = "OI|GrabLocomotion", meta = (DisplayName = "LeftHandTransform"))
	FTransform LeftTransformCached;
	UPROPERTY(BlueprintReadOnly, Category = "OI|GrabLocomotion", meta = (DisplayName = "RightHandTransform"))
	FTransform RightTransformCached;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated, Category = "OI|GrabLocomotion")
	float EyeHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated, Category = "OI|GrabLocomotion")
	float Wingspan;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated, Category = "OI|GrabLocomotion")
	float EyeOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Replicated, Category = "OI|GrabLocomotion")
	float BodyOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	float EyeHeightExtension;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool LockHeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool bQuantizedReplication;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	bool bIgnoreAdjustServerLoc;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "OI|GrabLocomotion")
	float NetworkSimulatedSmoothTime;

	UPROPERTY(BlueprintReadWrite, Category = "OI|GrabLocomotion")
	UPrimitiveComponent* CollisionComponent;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_GhostMode, Category = "OI|GrabLocomotion")
	bool GhostMode;

	UPROPERTY(BlueprintAssignable, Category = "OI|GrabLocomotion")
	FOnGhostModeChanged OnGhostModeChanged;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_BrakingMode, Category = "OI|GrabLocomotion")
	bool BrakingMode;

	UPROPERTY(BlueprintAssignable, Category = "OI|GrabLocomotion")
	FOnBrakingModeChanged OnBrakingModeChanged;

	UPROPERTY(BlueprintReadWrite, Category = "OI|GrabLocomotion")
	bool bManualCameraControl;
	
	UPROPERTY(BlueprintReadWrite, Category = "OI|GrabLocomotion")
	FTransform ManualCameraTransform;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetHeadWorldTransform() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetTrackerWorldTransform(const FTransform& InTrans) const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetTrackerParentComponentSpaceTransform(const FTransform& InTrans, const FTransform& Offset) const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetLeftWorldTransform() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetRightWorldTransform() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FRotator GetBodyRotation() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FRotator GetHeadRotation() const;

	UFUNCTION(BlueprintPure, Category = "OI|GrabLocomotion")
	const FTransform GetNeckTransform() const;

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetHeadTransform(const FTransform& InTrans);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousConsumeXRCameraTranslation(ACharacter* CharacterOwner);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetLeftTransform(const FTransform& InTrans, const bool WorldSpace);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetRightTransform(const FTransform& InTrans, const bool WorldSpace);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetHandTransforms(const FTransform& InLeft, const bool IsLeftWorldSpace, const FTransform& InRight, const bool IsRightWorldSpace);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetTransforms(const FTransform& InHead, const FTransform& InLeft, const FTransform& InRight, const bool WorldSpace);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AddDeltaLoc(const FVector& InDeltaLoc);

	UFUNCTION(BlueprintCallable, meta = (DeprecatedFunction, DeprecationMessage = "function integrated inside. This one doesn't do anything."), Category = "OI|GrabLocomotion")
	void AutonomousMoveOwnerActor();

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetOwnerVelocity(const FVector& InVel, const bool bAddToCurrent = false);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetGhostMode(const bool InGhostMode);

	UFUNCTION(BlueprintCallable, Category = "OI|GrabLocomotion")
	void AutonomousSetBrakingMode(const bool InBrakingMode);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "OI|GrabLocomotion")
	void ServerSetEyeHeight(const float inEyeHeight);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "OI|GrabLocomotion")
	void ServerSetWingSpan(const float InWingSpan);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "OI|GrabLocomotion")
	void ServerSetEyeOffset(const float InEyeOffset);

	UFUNCTION(BlueprintCallable, Server, Reliable, WithValidation, Category = "OI|GrabLocomotion")
	void ServerSetBodyOffset(const float InBodyOffset);

	UFUNCTION(BlueprintCallable, meta = (DeprecatedFunction, DeprecationMessage = "function integrated inside. This one doesn't do anything."), Category = "OI|GrabLocomotion")
	void UpdateRelatedTransforms(const float Delta);

	// USceneComponent interface
	virtual bool HasAnySockets() const override;
	virtual FTransform GetSocketTransform(FName InSocketName, ERelativeTransformSpace TransformSpace = RTS_World) const override;
	virtual void QuerySupportedSockets(TArray<FComponentSocketDescription>& OutSockets) const override;
	// End of USceneComponent interface

	/** The name of the socket at the end of the spring arm (looking back towards the spring arm origin) */
	static const FName SocketName;

private:

	UFUNCTION(Server, unreliable, WithValidation)
	void ServerFastSyncTransforms(
		const FVector_NetQuantize10 & InLoc,
		const FVector_NetQuantize10& InHeadPos, const FVector_NetQuantizeNormal& InHeadRot,
		const FVector_NetQuantize10& InLeftPos, const FVector_NetQuantizeNormal& InLeftRot,
		const FVector_NetQuantize10& InRightPos, const FVector_NetQuantizeNormal& InRightRot);

	UFUNCTION(Server, unreliable, WithValidation)
	void ServerSyncTransforms(
		const FVector & InLoc,
		const FTransform& InHead,
		const FTransform& InLeft,
		const FTransform& InRight);

	void LocalSetHeadTransform(const FTransform& InTrans);
	void LocalSetLeftTransform(const FTransform& InTrans);
	void LocalSetRightTransform(const FTransform& InTrans);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetOwnerVelocity(const FVector& InVel, const bool bAddToCurrent = false);


	UFUNCTION()
	void OnRep_GhostMode(bool InGhostMode);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetGhostMode(bool InGhostMode);

	void UpdateGhostMode();
	void UpdateRelativeTransforms();
	void UpdateCachedTransforms(const float DeltaTime);


	UFUNCTION()
	void OnRep_BrakingMode(bool InBrakingMode);

	UFUNCTION(Server, Reliable, WithValidation)
	void ServerSetBrakingMode(bool InBrakingMode);


	FTransform PrevNeckTrans;

	FVector DeltaLoc;
	//FVector TestPrev;

	mutable bool bPrevManual;
	mutable FVector PivotLocForManual;

	USkeletalMeshComponent* BodyMesh;
};
