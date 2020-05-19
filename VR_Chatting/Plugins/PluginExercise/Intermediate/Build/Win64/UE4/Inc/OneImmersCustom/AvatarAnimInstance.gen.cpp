// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Public/AvatarAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarAnimInstance() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UScriptStruct* Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UAvatarAnimInstance_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UAvatarAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
class UScriptStruct* FAvatarAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONEIMMERSCUSTOM_API uint32 Get_Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy, Z_Construct_UPackage__Script_OneImmersCustom(), TEXT("AvatarAnimInstanceProxy"), sizeof(FAvatarAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> ONEIMMERSCUSTOM_API UScriptStruct* StaticStruct<FAvatarAnimInstanceProxy>()
{
	return FAvatarAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAvatarAnimInstanceProxy(FAvatarAnimInstanceProxy::StaticStruct, TEXT("/Script/OneImmersCustom"), TEXT("AvatarAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_OneImmersCustom_StaticRegisterNativesFAvatarAnimInstanceProxy
{
	FScriptStruct_OneImmersCustom_StaticRegisterNativesFAvatarAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AvatarAnimInstanceProxy")),new UScriptStruct::TCppStructOps<FAvatarAnimInstanceProxy>);
	}
} ScriptStruct_OneImmersCustom_StaticRegisterNativesFAvatarAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WingSpanScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WingSpanScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAvatarAnimInstanceProxy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarAnimInstanceProxy, RightHand), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_RightHand_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarAnimInstanceProxy, LeftHand), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_LeftHand_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_HeadRotation_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_HeadRotation = { "HeadRotation", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarAnimInstanceProxy, HeadRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_HeadRotation_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_HeadRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_WingSpanScale_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_WingSpanScale = { "WingSpanScale", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarAnimInstanceProxy, WingSpanScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_WingSpanScale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_WingSpanScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAvatarAnimInstanceProxy, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_RightHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_LeftHand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_HeadRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_WingSpanScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::NewProp_Scale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"AvatarAnimInstanceProxy",
		sizeof(FAvatarAnimInstanceProxy),
		alignof(FAvatarAnimInstanceProxy),
		Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OneImmersCustom();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AvatarAnimInstanceProxy"), sizeof(FAvatarAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy_Hash() { return 1956107785U; }
	void UAvatarAnimInstance::StaticRegisterNativesUAvatarAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UAvatarAnimInstance_NoRegister()
	{
		return UAvatarAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWingSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultWingSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEyeHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultEyeHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RControllerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RControllerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LControllerOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LControllerOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOffsetInverse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshOffsetInverse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Proxy_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Proxy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AvatarAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultWingSpan_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultWingSpan = { "DefaultWingSpan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, DefaultWingSpan), METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultWingSpan_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultWingSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultEyeHeight_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultEyeHeight = { "DefaultEyeHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, DefaultEyeHeight), METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultEyeHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultEyeHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_RControllerOffset_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_RControllerOffset = { "RControllerOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, RControllerOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_RControllerOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_RControllerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_LControllerOffset_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_LControllerOffset = { "LControllerOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, LControllerOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_LControllerOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_LControllerOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_MeshOffsetInverse_MetaData[] = {
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_MeshOffsetInverse = { "MeshOffsetInverse", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, MeshOffsetInverse), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_MeshOffsetInverse_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_MeshOffsetInverse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_Proxy_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AvatarInstance" },
		{ "ModuleRelativePath", "Public/AvatarAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_Proxy = { "Proxy", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAvatarAnimInstance, Proxy), Z_Construct_UScriptStruct_FAvatarAnimInstanceProxy, METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_Proxy_MetaData, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_Proxy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvatarAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultWingSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_DefaultEyeHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_RControllerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_LControllerOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_MeshOffsetInverse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvatarAnimInstance_Statics::NewProp_Proxy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarAnimInstance_Statics::ClassParams = {
		&UAvatarAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvatarAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAvatarAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarAnimInstance, 930640106);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UAvatarAnimInstance>()
	{
		return UAvatarAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarAnimInstance(Z_Construct_UClass_UAvatarAnimInstance, &UAvatarAnimInstance::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UAvatarAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
