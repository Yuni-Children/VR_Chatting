// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OneImmersCustom/Public/OneImmersBlueprintFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneImmersBlueprintFunctionLibrary() {}
// Cross Module References
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_NoRegister();
	ONEIMMERSCUSTOM_API UClass* Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_OneImmersCustom();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter();
	ONEIMMERSCUSTOM_API UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings();
	ENGINE_API UClass* Z_Construct_UClass_AWorldSettings_NoRegister();
// End Cross Module References
	void UOneImmersBlueprintFunctionLibrary::StaticRegisterNativesUOneImmersBlueprintFunctionLibrary()
	{
		UClass* Class = UOneImmersBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AngularDistance", &UOneImmersBlueprintFunctionLibrary::execAngularDistance },
			{ "DelayGarbageCollection", &UOneImmersBlueprintFunctionLibrary::execDelayGarbageCollection },
			{ "DoGarbageCollection", &UOneImmersBlueprintFunctionLibrary::execDoGarbageCollection },
			{ "GetStatCounter", &UOneImmersBlueprintFunctionLibrary::execGetStatCounter },
			{ "GetWorldSettings", &UOneImmersBlueprintFunctionLibrary::execGetWorldSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics
	{
		struct OneImmersBlueprintFunctionLibrary_eventAngularDistance_Parms
		{
			FRotator A;
			FRotator B;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_B;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventAngularDistance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventAngularDistance_Parms, B), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventAngularDistance_Parms, A), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, nullptr, "AngularDistance", sizeof(OneImmersBlueprintFunctionLibrary_eventAngularDistance_Parms), Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, nullptr, "DelayGarbageCollection", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics
	{
		struct OneImmersBlueprintFunctionLibrary_eventDoGarbageCollection_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventDoGarbageCollection_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, nullptr, "DoGarbageCollection", sizeof(OneImmersBlueprintFunctionLibrary_eventDoGarbageCollection_Parms), Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics
	{
		struct OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms
		{
			UObject* WorldContextObject;
			FName StatGroup;
			FName StatName;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_StatGroup = { "StatGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms, StatGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_StatGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, nullptr, "GetStatCounter", sizeof(OneImmersBlueprintFunctionLibrary_eventGetStatCounter_Parms), Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics
	{
		struct OneImmersBlueprintFunctionLibrary_eventGetWorldSettings_Parms
		{
			UObject* WorldContextObject;
			AWorldSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetWorldSettings_Parms, ReturnValue), Z_Construct_UClass_AWorldSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OneImmersBlueprintFunctionLibrary_eventGetWorldSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "OI|GrabLocomotion" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, nullptr, "GetWorldSettings", sizeof(OneImmersBlueprintFunctionLibrary_eventGetWorldSettings_Parms), Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_NoRegister()
	{
		return UOneImmersBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_OneImmersCustom,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_AngularDistance, "AngularDistance" }, // 2163988992
		{ &Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DelayGarbageCollection, "DelayGarbageCollection" }, // 2324102719
		{ &Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_DoGarbageCollection, "DoGarbageCollection" }, // 3530407251
		{ &Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetStatCounter, "GetStatCounter" }, // 37930317
		{ &Z_Construct_UFunction_UOneImmersBlueprintFunctionLibrary_GetWorldSettings, "GetWorldSettings" }, // 3443485705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OneImmersBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/OneImmersBlueprintFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneImmersBlueprintFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::ClassParams = {
		&UOneImmersBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOneImmersBlueprintFunctionLibrary, 262944271);
	template<> ONEIMMERSCUSTOM_API UClass* StaticClass<UOneImmersBlueprintFunctionLibrary>()
	{
		return UOneImmersBlueprintFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOneImmersBlueprintFunctionLibrary(Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary, &UOneImmersBlueprintFunctionLibrary::StaticClass, TEXT("/Script/OneImmersCustom"), TEXT("UOneImmersBlueprintFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneImmersBlueprintFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
