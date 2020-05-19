// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FTransform;
struct FVector_NetQuantize10;
struct FVector_NetQuantizeNormal;
class ACharacter;
struct FRotator;
#ifdef ONEIMMERSCUSTOM_CharacterTrackerComponent_generated_h
#error "CharacterTrackerComponent.generated.h already included, missing '#pragma once' in CharacterTrackerComponent.h"
#endif
#define ONEIMMERSCUSTOM_CharacterTrackerComponent_generated_h

#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_10_DELEGATE \
struct _Script_OneImmersCustom_eventOnBrakingModeChanged_Parms \
{ \
	bool BrakingModeChanged; \
}; \
static inline void FOnBrakingModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnBrakingModeChanged, bool BrakingModeChanged) \
{ \
	_Script_OneImmersCustom_eventOnBrakingModeChanged_Parms Parms; \
	Parms.BrakingModeChanged=BrakingModeChanged ? true : false; \
	OnBrakingModeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_9_DELEGATE \
struct _Script_OneImmersCustom_eventOnGhostModeChanged_Parms \
{ \
	bool GhostModeChanged; \
}; \
static inline void FOnGhostModeChanged_DelegateWrapper(const FMulticastScriptDelegate& OnGhostModeChanged, bool GhostModeChanged) \
{ \
	_Script_OneImmersCustom_eventOnGhostModeChanged_Parms Parms; \
	Parms.GhostModeChanged=GhostModeChanged ? true : false; \
	OnGhostModeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_RPC_WRAPPERS \
	virtual bool ServerSetBrakingMode_Validate(bool ); \
	virtual void ServerSetBrakingMode_Implementation(bool InBrakingMode); \
	virtual bool ServerSetGhostMode_Validate(bool ); \
	virtual void ServerSetGhostMode_Implementation(bool InGhostMode); \
	virtual bool ServerSetOwnerVelocity_Validate(FVector const& , bool ); \
	virtual void ServerSetOwnerVelocity_Implementation(FVector const& InVel, bool bAddToCurrent); \
	virtual bool ServerSyncTransforms_Validate(FVector const& , FTransform const& , FTransform const& , FTransform const& ); \
	virtual void ServerSyncTransforms_Implementation(FVector const& InLoc, FTransform const& InHead, FTransform const& InLeft, FTransform const& InRight); \
	virtual bool ServerFastSyncTransforms_Validate(FVector_NetQuantize10 const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& ); \
	virtual void ServerFastSyncTransforms_Implementation(FVector_NetQuantize10 const& InLoc, FVector_NetQuantize10 const& InHeadPos, FVector_NetQuantizeNormal const& InHeadRot, FVector_NetQuantize10 const& InLeftPos, FVector_NetQuantizeNormal const& InLeftRot, FVector_NetQuantize10 const& InRightPos, FVector_NetQuantizeNormal const& InRightRot); \
	virtual bool ServerSetBodyOffset_Validate(const float ); \
	virtual void ServerSetBodyOffset_Implementation(const float InBodyOffset); \
	virtual bool ServerSetEyeOffset_Validate(const float ); \
	virtual void ServerSetEyeOffset_Implementation(const float InEyeOffset); \
	virtual bool ServerSetWingSpan_Validate(const float ); \
	virtual void ServerSetWingSpan_Implementation(const float InWingSpan); \
	virtual bool ServerSetEyeHeight_Validate(const float ); \
	virtual void ServerSetEyeHeight_Implementation(const float inEyeHeight); \
 \
	DECLARE_FUNCTION(execServerSetBrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetBrakingMode_Validate(Z_Param_InBrakingMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetBrakingMode_Validate")); \
			return; \
		} \
		P_THIS->ServerSetBrakingMode_Implementation(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BrakingMode(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetGhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetGhostMode_Validate(Z_Param_InGhostMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetGhostMode_Validate")); \
			return; \
		} \
		P_THIS->ServerSetGhostMode_Implementation(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GhostMode(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetOwnerVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetOwnerVelocity_Validate(Z_Param_InVel,Z_Param_bAddToCurrent)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetOwnerVelocity_Validate")); \
			return; \
		} \
		P_THIS->ServerSetOwnerVelocity_Implementation(Z_Param_InVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSyncTransforms) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLoc); \
		P_GET_STRUCT(FTransform,Z_Param_InHead); \
		P_GET_STRUCT(FTransform,Z_Param_InLeft); \
		P_GET_STRUCT(FTransform,Z_Param_InRight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSyncTransforms_Validate(Z_Param_InLoc,Z_Param_InHead,Z_Param_InLeft,Z_Param_InRight)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSyncTransforms_Validate")); \
			return; \
		} \
		P_THIS->ServerSyncTransforms_Implementation(Z_Param_InLoc,Z_Param_InHead,Z_Param_InLeft,Z_Param_InRight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFastSyncTransforms) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InLoc); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InHeadPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InHeadRot); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InLeftPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InLeftRot); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InRightPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InRightRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFastSyncTransforms_Validate(Z_Param_InLoc,Z_Param_InHeadPos,Z_Param_InHeadRot,Z_Param_InLeftPos,Z_Param_InLeftRot,Z_Param_InRightPos,Z_Param_InRightRot)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFastSyncTransforms_Validate")); \
			return; \
		} \
		P_THIS->ServerFastSyncTransforms_Implementation(Z_Param_InLoc,Z_Param_InHeadPos,Z_Param_InHeadRot,Z_Param_InLeftPos,Z_Param_InLeftRot,Z_Param_InRightPos,Z_Param_InRightRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRelatedTransforms) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRelatedTransforms(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetBodyOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBodyOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetBodyOffset_Validate(Z_Param_InBodyOffset)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetBodyOffset_Validate")); \
			return; \
		} \
		P_THIS->ServerSetBodyOffset_Implementation(Z_Param_InBodyOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEyeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InEyeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEyeOffset_Validate(Z_Param_InEyeOffset)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEyeOffset_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEyeOffset_Implementation(Z_Param_InEyeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetWingSpan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWingSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetWingSpan_Validate(Z_Param_InWingSpan)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetWingSpan_Validate")); \
			return; \
		} \
		P_THIS->ServerSetWingSpan_Implementation(Z_Param_InWingSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEyeHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inEyeHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEyeHeight_Validate(Z_Param_inEyeHeight)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEyeHeight_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEyeHeight_Implementation(Z_Param_inEyeHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetBrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetBrakingMode(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetGhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetGhostMode(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetOwnerVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetOwnerVelocity(Z_Param_Out_InVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousMoveOwnerActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousMoveOwnerActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDeltaLoc) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDeltaLoc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDeltaLoc(Z_Param_Out_InDeltaLoc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InHead); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLeft); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InRight); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetTransforms(Z_Param_Out_InHead,Z_Param_Out_InLeft,Z_Param_Out_InRight,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetHandTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLeft); \
		P_GET_UBOOL(Z_Param_IsLeftWorldSpace); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InRight); \
		P_GET_UBOOL(Z_Param_IsRightWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetHandTransforms(Z_Param_Out_InLeft,Z_Param_IsLeftWorldSpace,Z_Param_Out_InRight,Z_Param_IsRightWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetRightTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetRightTransform(Z_Param_Out_InTrans,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetLeftTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetLeftTransform(Z_Param_Out_InTrans,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousConsumeXRCameraTranslation) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_CharacterOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousConsumeXRCameraTranslation(Z_Param_CharacterOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetHeadTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetHeadTransform(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeckTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetNeckTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetHeadRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBodyRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRightWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLeftWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackerParentComponentSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTrackerParentComponentSpaceTransform(Z_Param_Out_InTrans,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackerWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTrackerWorldTransform(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadWorldTransform(); \
		P_NATIVE_END; \
	}


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerSetBrakingMode_Validate(bool ); \
	virtual void ServerSetBrakingMode_Implementation(bool InBrakingMode); \
	virtual bool ServerSetGhostMode_Validate(bool ); \
	virtual void ServerSetGhostMode_Implementation(bool InGhostMode); \
	virtual bool ServerSetOwnerVelocity_Validate(FVector const& , bool ); \
	virtual void ServerSetOwnerVelocity_Implementation(FVector const& InVel, bool bAddToCurrent); \
	virtual bool ServerSyncTransforms_Validate(FVector const& , FTransform const& , FTransform const& , FTransform const& ); \
	virtual void ServerSyncTransforms_Implementation(FVector const& InLoc, FTransform const& InHead, FTransform const& InLeft, FTransform const& InRight); \
	virtual bool ServerFastSyncTransforms_Validate(FVector_NetQuantize10 const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& , FVector_NetQuantize10 const& , FVector_NetQuantizeNormal const& ); \
	virtual void ServerFastSyncTransforms_Implementation(FVector_NetQuantize10 const& InLoc, FVector_NetQuantize10 const& InHeadPos, FVector_NetQuantizeNormal const& InHeadRot, FVector_NetQuantize10 const& InLeftPos, FVector_NetQuantizeNormal const& InLeftRot, FVector_NetQuantize10 const& InRightPos, FVector_NetQuantizeNormal const& InRightRot); \
	virtual bool ServerSetBodyOffset_Validate(const float ); \
	virtual void ServerSetBodyOffset_Implementation(const float InBodyOffset); \
	virtual bool ServerSetEyeOffset_Validate(const float ); \
	virtual void ServerSetEyeOffset_Implementation(const float InEyeOffset); \
	virtual bool ServerSetWingSpan_Validate(const float ); \
	virtual void ServerSetWingSpan_Implementation(const float InWingSpan); \
	virtual bool ServerSetEyeHeight_Validate(const float ); \
	virtual void ServerSetEyeHeight_Implementation(const float inEyeHeight); \
 \
	DECLARE_FUNCTION(execServerSetBrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetBrakingMode_Validate(Z_Param_InBrakingMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetBrakingMode_Validate")); \
			return; \
		} \
		P_THIS->ServerSetBrakingMode_Implementation(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_BrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_BrakingMode(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetGhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetGhostMode_Validate(Z_Param_InGhostMode)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetGhostMode_Validate")); \
			return; \
		} \
		P_THIS->ServerSetGhostMode_Implementation(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnRep_GhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnRep_GhostMode(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetOwnerVelocity) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetOwnerVelocity_Validate(Z_Param_InVel,Z_Param_bAddToCurrent)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetOwnerVelocity_Validate")); \
			return; \
		} \
		P_THIS->ServerSetOwnerVelocity_Implementation(Z_Param_InVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSyncTransforms) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_InLoc); \
		P_GET_STRUCT(FTransform,Z_Param_InHead); \
		P_GET_STRUCT(FTransform,Z_Param_InLeft); \
		P_GET_STRUCT(FTransform,Z_Param_InRight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSyncTransforms_Validate(Z_Param_InLoc,Z_Param_InHead,Z_Param_InLeft,Z_Param_InRight)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSyncTransforms_Validate")); \
			return; \
		} \
		P_THIS->ServerSyncTransforms_Implementation(Z_Param_InLoc,Z_Param_InHead,Z_Param_InLeft,Z_Param_InRight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerFastSyncTransforms) \
	{ \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InLoc); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InHeadPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InHeadRot); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InLeftPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InLeftRot); \
		P_GET_STRUCT(FVector_NetQuantize10,Z_Param_InRightPos); \
		P_GET_STRUCT(FVector_NetQuantizeNormal,Z_Param_InRightRot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerFastSyncTransforms_Validate(Z_Param_InLoc,Z_Param_InHeadPos,Z_Param_InHeadRot,Z_Param_InLeftPos,Z_Param_InLeftRot,Z_Param_InRightPos,Z_Param_InRightRot)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerFastSyncTransforms_Validate")); \
			return; \
		} \
		P_THIS->ServerFastSyncTransforms_Implementation(Z_Param_InLoc,Z_Param_InHeadPos,Z_Param_InHeadRot,Z_Param_InLeftPos,Z_Param_InLeftRot,Z_Param_InRightPos,Z_Param_InRightRot); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRelatedTransforms) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Delta); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRelatedTransforms(Z_Param_Delta); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetBodyOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InBodyOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetBodyOffset_Validate(Z_Param_InBodyOffset)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetBodyOffset_Validate")); \
			return; \
		} \
		P_THIS->ServerSetBodyOffset_Implementation(Z_Param_InBodyOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEyeOffset) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InEyeOffset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEyeOffset_Validate(Z_Param_InEyeOffset)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEyeOffset_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEyeOffset_Implementation(Z_Param_InEyeOffset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetWingSpan) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_InWingSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetWingSpan_Validate(Z_Param_InWingSpan)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetWingSpan_Validate")); \
			return; \
		} \
		P_THIS->ServerSetWingSpan_Implementation(Z_Param_InWingSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execServerSetEyeHeight) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_inEyeHeight); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		if (!P_THIS->ServerSetEyeHeight_Validate(Z_Param_inEyeHeight)) \
		{ \
			RPC_ValidateFailed(TEXT("ServerSetEyeHeight_Validate")); \
			return; \
		} \
		P_THIS->ServerSetEyeHeight_Implementation(Z_Param_inEyeHeight); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetBrakingMode) \
	{ \
		P_GET_UBOOL(Z_Param_InBrakingMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetBrakingMode(Z_Param_InBrakingMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetGhostMode) \
	{ \
		P_GET_UBOOL(Z_Param_InGhostMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetGhostMode(Z_Param_InGhostMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetOwnerVelocity) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InVel); \
		P_GET_UBOOL(Z_Param_bAddToCurrent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetOwnerVelocity(Z_Param_Out_InVel,Z_Param_bAddToCurrent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousMoveOwnerActor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousMoveOwnerActor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddDeltaLoc) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InDeltaLoc); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddDeltaLoc(Z_Param_Out_InDeltaLoc); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InHead); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLeft); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InRight); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetTransforms(Z_Param_Out_InHead,Z_Param_Out_InLeft,Z_Param_Out_InRight,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetHandTransforms) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLeft); \
		P_GET_UBOOL(Z_Param_IsLeftWorldSpace); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InRight); \
		P_GET_UBOOL(Z_Param_IsRightWorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetHandTransforms(Z_Param_Out_InLeft,Z_Param_IsLeftWorldSpace,Z_Param_Out_InRight,Z_Param_IsRightWorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetRightTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetRightTransform(Z_Param_Out_InTrans,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetLeftTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_UBOOL(Z_Param_WorldSpace); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetLeftTransform(Z_Param_Out_InTrans,Z_Param_WorldSpace); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousConsumeXRCameraTranslation) \
	{ \
		P_GET_OBJECT(ACharacter,Z_Param_CharacterOwner); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousConsumeXRCameraTranslation(Z_Param_CharacterOwner); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAutonomousSetHeadTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AutonomousSetHeadTransform(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNeckTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetNeckTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetHeadRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBodyRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=P_THIS->GetBodyRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRightWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetRightWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLeftWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetLeftWorldTransform(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackerParentComponentSpaceTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Offset); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTrackerParentComponentSpaceTransform(Z_Param_Out_InTrans,Z_Param_Out_Offset); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTrackerWorldTransform) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_InTrans); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetTrackerWorldTransform(Z_Param_Out_InTrans); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWorldTransform) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FTransform*)Z_Param__Result=P_THIS->GetHeadWorldTransform(); \
		P_NATIVE_END; \
	}


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_EVENT_PARMS \
	struct CharacterTrackerComponent_eventServerFastSyncTransforms_Parms \
	{ \
		FVector_NetQuantize10 InLoc; \
		FVector_NetQuantize10 InHeadPos; \
		FVector_NetQuantizeNormal InHeadRot; \
		FVector_NetQuantize10 InLeftPos; \
		FVector_NetQuantizeNormal InLeftRot; \
		FVector_NetQuantize10 InRightPos; \
		FVector_NetQuantizeNormal InRightRot; \
	}; \
	struct CharacterTrackerComponent_eventServerSetBodyOffset_Parms \
	{ \
		float InBodyOffset; \
	}; \
	struct CharacterTrackerComponent_eventServerSetBrakingMode_Parms \
	{ \
		bool InBrakingMode; \
	}; \
	struct CharacterTrackerComponent_eventServerSetEyeHeight_Parms \
	{ \
		float inEyeHeight; \
	}; \
	struct CharacterTrackerComponent_eventServerSetEyeOffset_Parms \
	{ \
		float InEyeOffset; \
	}; \
	struct CharacterTrackerComponent_eventServerSetGhostMode_Parms \
	{ \
		bool InGhostMode; \
	}; \
	struct CharacterTrackerComponent_eventServerSetOwnerVelocity_Parms \
	{ \
		FVector InVel; \
		bool bAddToCurrent; \
	}; \
	struct CharacterTrackerComponent_eventServerSetWingSpan_Parms \
	{ \
		float InWingSpan; \
	}; \
	struct CharacterTrackerComponent_eventServerSyncTransforms_Parms \
	{ \
		FVector InLoc; \
		FTransform InHead; \
		FTransform InLeft; \
		FTransform InRight; \
	};


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_CALLBACK_WRAPPERS
#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterTrackerComponent(); \
	friend struct Z_Construct_UClass_UCharacterTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OneImmersCustom"), NO_API) \
	DECLARE_SERIALIZER(UCharacterTrackerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterTrackerComponent(); \
	friend struct Z_Construct_UClass_UCharacterTrackerComponent_Statics; \
public: \
	DECLARE_CLASS(UCharacterTrackerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/OneImmersCustom"), NO_API) \
	DECLARE_SERIALIZER(UCharacterTrackerComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterTrackerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterTrackerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTrackerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterTrackerComponent(UCharacterTrackerComponent&&); \
	NO_API UCharacterTrackerComponent(const UCharacterTrackerComponent&); \
public:


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterTrackerComponent(UCharacterTrackerComponent&&); \
	NO_API UCharacterTrackerComponent(const UCharacterTrackerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterTrackerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterTrackerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCharacterTrackerComponent)


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET
#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_12_PROLOG \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_EVENT_PARMS


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_RPC_WRAPPERS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_CALLBACK_WRAPPERS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_INCLASS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_CALLBACK_WRAPPERS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_INCLASS_NO_PURE_DECLS \
	senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONEIMMERSCUSTOM_API UClass* StaticClass<class UCharacterTrackerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID senal_voice_Plugins_PluginExercise_Source_OneImmersCustom_Public_CharacterTrackerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
