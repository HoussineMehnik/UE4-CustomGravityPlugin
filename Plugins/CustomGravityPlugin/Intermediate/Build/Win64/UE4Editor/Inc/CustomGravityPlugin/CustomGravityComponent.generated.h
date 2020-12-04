// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGravityInfo;
struct FVector;
class APlanetActor;
class UPrimitiveComponent;
#ifdef CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h
#error "CustomGravityComponent.generated.h already included, missing '#pragma once' in CustomGravityComponent.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomGravityComponent_generated_h

#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_SPARSE_DATA
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo); \
	DECLARE_FUNCTION(execGetCurrentGravityPower); \
	DECLARE_FUNCTION(execGetCurrentGravityDirection); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execClearCurrentPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetGravityType); \
	DECLARE_FUNCTION(execSetGravityScale);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentGravityInfo); \
	DECLARE_FUNCTION(execGetCurrentGravityPower); \
	DECLARE_FUNCTION(execGetCurrentGravityDirection); \
	DECLARE_FUNCTION(execGetCurrentPlanet); \
	DECLARE_FUNCTION(execGetUpdatedComponent); \
	DECLARE_FUNCTION(execSetUpdatedComponent); \
	DECLARE_FUNCTION(execClearCurrentPlanet); \
	DECLARE_FUNCTION(execSetCurrentPlanet); \
	DECLARE_FUNCTION(execSetGravityType); \
	DECLARE_FUNCTION(execSetGravityScale);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCustomGravityComponent(); \
	friend struct Z_Construct_UClass_UCustomGravityComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomGravityComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(UCustomGravityComponent)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomGravityComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomGravityComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public:


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomGravityComponent(UCustomGravityComponent&&); \
	NO_API UCustomGravityComponent(const UCustomGravityComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomGravityComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomGravityComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCustomGravityComponent)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GravityScale() { return STRUCT_OFFSET(UCustomGravityComponent, GravityScale); } \
	FORCEINLINE static uint32 __PPO__CustomGravityInfo() { return STRUCT_OFFSET(UCustomGravityComponent, CustomGravityInfo); } \
	FORCEINLINE static uint32 __PPO__GravityType() { return STRUCT_OFFSET(UCustomGravityComponent, GravityType); } \
	FORCEINLINE static uint32 __PPO__PlanetActor() { return STRUCT_OFFSET(UCustomGravityComponent, PlanetActor); }


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_14_PROLOG
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_RPC_WRAPPERS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_INCLASS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_INCLASS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class UCustomGravityComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Components_CustomGravityComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
