// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Private/StereoLayerWidgetComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoLayerWidgetComponent() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UStereoLayerWidgetComponent_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UStereoLayerWidgetComponent();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void UStereoLayerWidgetComponent::StaticRegisterNativesUStereoLayerWidgetComponent()
	{
	}
	UClass* Z_Construct_UClass_UStereoLayerWidgetComponent_NoRegister()
	{
		return UStereoLayerWidgetComponent::StaticClass();
	}
	struct Z_Construct_UClass_UStereoLayerWidgetComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoDrawMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoDrawMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLiveTransform_MetaData[];
#endif
		static void NewProp_bLiveTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLiveTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStereoLayerEnabled_MetaData[];
#endif
		static void NewProp_bStereoLayerEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStereoLayerEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bQuadPreserveTextureRatio_MetaData[];
#endif
		static void NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bQuadPreserveTextureRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoAlphaChannel_MetaData[];
#endif
		static void NewProp_bNoAlphaChannel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoAlphaChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportsDepth_MetaData[];
#endif
		static void NewProp_bSupportsDepth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportsDepth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLiveTexture_MetaData[];
#endif
		static void NewProp_bLiveTexture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLiveTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Priority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "StereoLayerWidgetComponent.h" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_NoDrawMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_NoDrawMaterial = { "NoDrawMaterial", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerWidgetComponent, NoDrawMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_NoDrawMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_NoDrawMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bLiveTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform = { "bLiveTransform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bStereoLayerEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled = { "bStereoLayerEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "True if the quad should internally set it's Y value based on the set texture's dimensions" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bQuadPreserveTextureRatio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio = { "bQuadPreserveTextureRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "True if the texture should not use its own alpha channel (1.0 will be substituted)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bNoAlphaChannel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel = { "bNoAlphaChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "True if the stereo layer needs to support depth intersections with the scene geometry, if available on the platform" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bSupportsDepth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth = { "bSupportsDepth", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "True if the stereo layer texture needs to update itself every frame(scene capture, video, etc.)" },
	};
#endif
	void Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture_SetBit(void* Obj)
	{
		((UStereoLayerWidgetComponent*)Obj)->bLiveTexture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture = { "bLiveTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UStereoLayerWidgetComponent), &Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_Priority_MetaData[] = {
		{ "Category", "StereoLayerWidget" },
		{ "ModuleRelativePath", "Private/StereoLayerWidgetComponent.h" },
		{ "ToolTip", "Render priority among all stereo layers, higher priority render on top of lower priority *" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStereoLayerWidgetComponent, Priority), METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_Priority_MetaData, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_Priority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_NoDrawMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bStereoLayerEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bQuadPreserveTextureRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bNoAlphaChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bSupportsDepth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_bLiveTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::NewProp_Priority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStereoLayerWidgetComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::ClassParams = {
		&UStereoLayerWidgetComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStereoLayerWidgetComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStereoLayerWidgetComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStereoLayerWidgetComponent, 4088501914);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UStereoLayerWidgetComponent>()
	{
		return UStereoLayerWidgetComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStereoLayerWidgetComponent(Z_Construct_UClass_UStereoLayerWidgetComponent, &UStereoLayerWidgetComponent::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UStereoLayerWidgetComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStereoLayerWidgetComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
