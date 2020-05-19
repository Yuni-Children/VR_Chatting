// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Public/GrabLocomotionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrabLocomotionComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UGrabLocomotionComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UGrabLocomotionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
// End Cross Module References
	void UGrabLocomotionComponent::StaticRegisterNativesUGrabLocomotionComponent()
	{
	}
	UClass* Z_Construct_UClass_UGrabLocomotionComponent_NoRegister()
	{
		return UGrabLocomotionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGrabLocomotionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGrabLocomotionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGrabLocomotionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GrabLocomotionComponent.h" },
		{ "ModuleRelativePath", "Public/GrabLocomotionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGrabLocomotionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGrabLocomotionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGrabLocomotionComponent_Statics::ClassParams = {
		&UGrabLocomotionComponent::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGrabLocomotionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGrabLocomotionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGrabLocomotionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGrabLocomotionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGrabLocomotionComponent, 2800668455);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UGrabLocomotionComponent>()
	{
		return UGrabLocomotionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGrabLocomotionComponent(Z_Construct_UClass_UGrabLocomotionComponent, &UGrabLocomotionComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UGrabLocomotionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGrabLocomotionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
