// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class AWorldSettings;
struct FRotator;
#ifdef ONEIMMERSCUSTOM_OneImmersBlueprintFunctionLibrary_generated_h
#error "OneImmersBlueprintFunctionLibrary.generated.h already included, missing '#pragma once' in OneImmersBlueprintFunctionLibrary.h"
#endif
#define ONEIMMERSCUSTOM_OneImmersBlueprintFunctionLibrary_generated_h

#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStatCounter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::GetStatCounter(Z_Param_WorldContextObject,Z_Param_StatGroup,Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDelayGarbageCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOneImmersBlueprintFunctionLibrary::DelayGarbageCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoGarbageCollection) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOneImmersBlueprintFunctionLibrary::DoGarbageCollection(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldSettings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWorldSettings**)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::GetWorldSettings(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngularDistance) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::AngularDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStatCounter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatGroup); \
		P_GET_PROPERTY(UNameProperty,Z_Param_StatName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::GetStatCounter(Z_Param_WorldContextObject,Z_Param_StatGroup,Z_Param_StatName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDelayGarbageCollection) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOneImmersBlueprintFunctionLibrary::DelayGarbageCollection(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoGarbageCollection) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UOneImmersBlueprintFunctionLibrary::DoGarbageCollection(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldSettings) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AWorldSettings**)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::GetWorldSettings(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAngularDistance) \
	{ \
		P_GET_STRUCT(FRotator,Z_Param_A); \
		P_GET_STRUCT(FRotator,Z_Param_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UOneImmersBlueprintFunctionLibrary::AngularDistance(Z_Param_A,Z_Param_B); \
		P_NATIVE_END; \
	}


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOneImmersBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOneImmersBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OneImmersCustom"), NO_API) \
	DECLARE_SERIALIZER(UOneImmersBlueprintFunctionLibrary)


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUOneImmersBlueprintFunctionLibrary(); \
	friend struct Z_Construct_UClass_UOneImmersBlueprintFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UOneImmersBlueprintFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OneImmersCustom"), NO_API) \
	DECLARE_SERIALIZER(UOneImmersBlueprintFunctionLibrary)


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneImmersBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneImmersBlueprintFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneImmersBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneImmersBlueprintFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOneImmersBlueprintFunctionLibrary(UOneImmersBlueprintFunctionLibrary&&); \
	NO_API UOneImmersBlueprintFunctionLibrary(const UOneImmersBlueprintFunctionLibrary&); \
public:


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOneImmersBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOneImmersBlueprintFunctionLibrary(UOneImmersBlueprintFunctionLibrary&&); \
	NO_API UOneImmersBlueprintFunctionLibrary(const UOneImmersBlueprintFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOneImmersBlueprintFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOneImmersBlueprintFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOneImmersBlueprintFunctionLibrary)


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET
#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_13_PROLOG
#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_RPC_WRAPPERS \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_INCLASS \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_PRIVATE_PROPERTY_OFFSET \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_INCLASS_NO_PURE_DECLS \
	senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONEIMMERSCUSTOM_API UClass* StaticClass<class UOneImmersBlueprintFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID senal_voice_2_Plugins_PluginExercise_Source_OneImmersCustom_Public_OneImmersBlueprintFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
