// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Public/MCTrackComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMCTrackComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UMCTrackerComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UMCTrackerComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_Grab();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_Release();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc();
// End Cross Module References
	void UMCTrackerComponent::StaticRegisterNativesUMCTrackerComponent()
	{
		UClass* Class = UMCTrackerComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FixInWorldSpace", &UMCTrackerComponent::execFixInWorldSpace },
			{ "GetAnchorLoc", &UMCTrackerComponent::execGetAnchorLoc },
			{ "GetAvgVelocity", &UMCTrackerComponent::execGetAvgVelocity },
			{ "GetTrackerTransform", &UMCTrackerComponent::execGetTrackerTransform },
			{ "Grab", &UMCTrackerComponent::execGrab },
			{ "Release", &UMCTrackerComponent::execRelease },
			{ "RetrieveDeltaLoc", &UMCTrackerComponent::execRetrieveDeltaLoc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics
	{
		struct MCTrackerComponent_eventFixInWorldSpace_Parms
		{
			FTransform InTrans;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InTrans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::NewProp_InTrans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::NewProp_InTrans = { "InTrans", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MCTrackerComponent_eventFixInWorldSpace_Parms, InTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::NewProp_InTrans_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::NewProp_InTrans_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::NewProp_InTrans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "FixInWorldSpace", sizeof(MCTrackerComponent_eventFixInWorldSpace_Parms), Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics
	{
		struct MCTrackerComponent_eventGetAnchorLoc_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MCTrackerComponent_eventGetAnchorLoc_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "GetAnchorLoc", sizeof(MCTrackerComponent_eventGetAnchorLoc_Parms), Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics
	{
		struct MCTrackerComponent_eventGetAvgVelocity_Parms
		{
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MCTrackerComponent_eventGetAvgVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "GetAvgVelocity", sizeof(MCTrackerComponent_eventGetAvgVelocity_Parms), Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics
	{
		struct MCTrackerComponent_eventGetTrackerTransform_Parms
		{
			FTransform OutTrans;
			bool IsFixed;
		};
		static void NewProp_IsFixed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsFixed;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTrans;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_IsFixed_SetBit(void* Obj)
	{
		((MCTrackerComponent_eventGetTrackerTransform_Parms*)Obj)->IsFixed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_IsFixed = { "IsFixed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MCTrackerComponent_eventGetTrackerTransform_Parms), &Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_IsFixed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_OutTrans = { "OutTrans", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MCTrackerComponent_eventGetTrackerTransform_Parms, OutTrans), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_IsFixed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::NewProp_OutTrans,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "GetTrackerTransform", sizeof(MCTrackerComponent_eventGetTrackerTransform_Parms), Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "Grab", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_Grab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_Grab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_Release_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_Release_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_Release_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "Release", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_Release_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_Release_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_Release()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_Release_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics
	{
		struct MCTrackerComponent_eventRetrieveDeltaLoc_Parms
		{
			FVector DeltaLoc;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DeltaLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::NewProp_DeltaLoc = { "DeltaLoc", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MCTrackerComponent_eventRetrieveDeltaLoc_Parms, DeltaLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::NewProp_DeltaLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMCTrackerComponent, nullptr, "RetrieveDeltaLoc", sizeof(MCTrackerComponent_eventRetrieveDeltaLoc_Parms), Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMCTrackerComponent_NoRegister()
	{
		return UMCTrackerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMCTrackerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGrabbed_MetaData[];
#endif
		static void NewProp_IsGrabbed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGrabbed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixedInWorld_MetaData[];
#endif
		static void NewProp_FixedInWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixedInWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTrackedVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumTrackedVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMCTrackerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMCTrackerComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMCTrackerComponent_FixInWorldSpace, "FixInWorldSpace" }, // 1659036827
		{ &Z_Construct_UFunction_UMCTrackerComponent_GetAnchorLoc, "GetAnchorLoc" }, // 449609073
		{ &Z_Construct_UFunction_UMCTrackerComponent_GetAvgVelocity, "GetAvgVelocity" }, // 2573222619
		{ &Z_Construct_UFunction_UMCTrackerComponent_GetTrackerTransform, "GetTrackerTransform" }, // 2274066982
		{ &Z_Construct_UFunction_UMCTrackerComponent_Grab, "Grab" }, // 710075844
		{ &Z_Construct_UFunction_UMCTrackerComponent_Release, "Release" }, // 2518965817
		{ &Z_Construct_UFunction_UMCTrackerComponent_RetrieveDeltaLoc, "RetrieveDeltaLoc" }, // 2193039182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCTrackerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "MCTrackComponent.h" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed_MetaData[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed_SetBit(void* Obj)
	{
		((UMCTrackerComponent*)Obj)->IsGrabbed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed = { "IsGrabbed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMCTrackerComponent), &Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld_MetaData[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld_SetBit(void* Obj)
	{
		((UMCTrackerComponent*)Obj)->FixedInWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld = { "FixedInWorld", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMCTrackerComponent), &Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_NumTrackedVelocity_MetaData[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/MCTrackComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_NumTrackedVelocity = { "NumTrackedVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMCTrackerComponent, NumTrackedVelocity), METADATA_PARAMS(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_NumTrackedVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_NumTrackedVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMCTrackerComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_IsGrabbed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_FixedInWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMCTrackerComponent_Statics::NewProp_NumTrackedVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMCTrackerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMCTrackerComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMCTrackerComponent_Statics::ClassParams = {
		&UMCTrackerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMCTrackerComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMCTrackerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMCTrackerComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMCTrackerComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMCTrackerComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMCTrackerComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMCTrackerComponent, 1186230400);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UMCTrackerComponent>()
	{
		return UMCTrackerComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMCTrackerComponent(Z_Construct_UClass_UMCTrackerComponent, &UMCTrackerComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UMCTrackerComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMCTrackerComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
