// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Public/OneImmersVRCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneImmersVRCameraComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UOneImmersVRCameraComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UOneImmersVRCameraComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
// End Cross Module References
	void UOneImmersVRCameraComponent::StaticRegisterNativesUOneImmersVRCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UOneImmersVRCameraComponent_NoRegister()
	{
		return UOneImmersVRCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOneImmersVRCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "CameraOptions Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "OneImmersVRCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/OneImmersVRCameraComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneImmersVRCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::ClassParams = {
		&UOneImmersVRCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOneImmersVRCameraComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOneImmersVRCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOneImmersVRCameraComponent, 3785796635);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UOneImmersVRCameraComponent>()
	{
		return UOneImmersVRCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOneImmersVRCameraComponent(Z_Construct_UClass_UOneImmersVRCameraComponent, &UOneImmersVRCameraComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UOneImmersVRCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneImmersVRCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
