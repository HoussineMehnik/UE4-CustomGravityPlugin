// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FGravityInfo;
#ifdef CUSTOMGRAVITYPLUGIN_PlanetActor_generated_h
#error "PlanetActor.generated.h already included, missing '#pragma once' in PlanetActor.h"
#endif
#define CUSTOMGRAVITYPLUGIN_PlanetActor_generated_h

#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_SPARSE_DATA
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGravityinfo); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execSetForceMode); \
	DECLARE_FUNCTION(execSetGravityPower);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGravityinfo); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execSetForceMode); \
	DECLARE_FUNCTION(execSetGravityPower);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlanetActor(); \
	friend struct Z_Construct_UClass_APlanetActor_Statics; \
public: \
	DECLARE_CLASS(APlanetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APlanetActor)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_INCLASS \
private: \
	static void StaticRegisterNativesAPlanetActor(); \
	friend struct Z_Construct_UClass_APlanetActor_Statics; \
public: \
	DECLARE_CLASS(APlanetActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APlanetActor)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlanetActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanetActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanetActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanetActor(APlanetActor&&); \
	NO_API APlanetActor(const APlanetActor&); \
public:


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlanetActor(APlanetActor&&); \
	NO_API APlanetActor(const APlanetActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlanetActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlanetActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlanetActor)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlanetRootComponent() { return STRUCT_OFFSET(APlanetActor, PlanetRootComponent); } \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(APlanetActor, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__SphereCollision() { return STRUCT_OFFSET(APlanetActor, SphereCollision); }


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_21_PROLOG
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_RPC_WRAPPERS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_INCLASS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_INCLASS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class APlanetActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Actors_PlanetActor_h


#define FOREACH_ENUM_ECOLLISIONTYPE(op) \
	op(ECollisionType::ECol_Mesh) \
	op(ECollisionType::ECol_Sphere) 

enum class ECollisionType : uint8;
template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<ECollisionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
