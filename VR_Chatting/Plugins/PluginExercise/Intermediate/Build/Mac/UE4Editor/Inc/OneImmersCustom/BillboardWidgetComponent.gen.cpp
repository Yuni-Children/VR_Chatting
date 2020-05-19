// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Private/BillboardWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardWidgetComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UBillboardWidgetComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UBillboardWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
// End Cross Module References
	void UBillboardWidgetComponent::StaticRegisterNativesUBillboardWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UBillboardWidgetComponent_NoRegister()
	{
		return UBillboardWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBillboardWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LockZAxis_MetaData[];
#endif
		static void NewProp_LockZAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LockZAxis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBillboardWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting Mesh Mobility Trigger" },
		{ "IncludePath", "BillboardWidgetComponent.h" },
		{ "ModuleRelativePath", "Private/BillboardWidgetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis_MetaData[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Private/BillboardWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis_SetBit(void* Obj)
	{
		((UBillboardWidgetComponent*)Obj)->LockZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis = { "LockZAxis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBillboardWidgetComponent), &Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBillboardWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardWidgetComponent_Statics::NewProp_LockZAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBillboardWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBillboardWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBillboardWidgetComponent_Statics::ClassParams = {
		&UBillboardWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBillboardWidgetComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBillboardWidgetComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBillboardWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBillboardWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBillboardWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBillboardWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBillboardWidgetComponent, 1848922538);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UBillboardWidgetComponent>()
	{
		return UBillboardWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBillboardWidgetComponent(Z_Construct_UClass_UBillboardWidgetComponent, &UBillboardWidgetComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UBillboardWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBillboardWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
