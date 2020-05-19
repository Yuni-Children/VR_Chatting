// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Private/BillboardObjectComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBillboardObjectComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UBillboardObjectComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UBillboardObjectComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
// End Cross Module References
	void UBillboardObjectComponent::StaticRegisterNativesUBillboardObjectComponent()
	{
	}
	UClass* Z_Construct_UClass_UBillboardObjectComponent_NoRegister()
	{
		return UBillboardObjectComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBillboardObjectComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UBillboardObjectComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardObjectComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "BillboardObjectComponent.h" },
		{ "ModuleRelativePath", "Private/BillboardObjectComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis_MetaData[] = {
		{ "Category", "OI|Billboard" },
		{ "ModuleRelativePath", "Private/BillboardObjectComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis_SetBit(void* Obj)
	{
		((UBillboardObjectComponent*)Obj)->LockZAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis = { "LockZAxis", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBillboardObjectComponent), &Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBillboardObjectComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBillboardObjectComponent_Statics::NewProp_LockZAxis,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBillboardObjectComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBillboardObjectComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBillboardObjectComponent_Statics::ClassParams = {
		&UBillboardObjectComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBillboardObjectComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UBillboardObjectComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBillboardObjectComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBillboardObjectComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBillboardObjectComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBillboardObjectComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBillboardObjectComponent, 3606642986);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UBillboardObjectComponent>()
	{
		return UBillboardObjectComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBillboardObjectComponent(Z_Construct_UClass_UBillboardObjectComponent, &UBillboardObjectComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UBillboardObjectComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBillboardObjectComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
