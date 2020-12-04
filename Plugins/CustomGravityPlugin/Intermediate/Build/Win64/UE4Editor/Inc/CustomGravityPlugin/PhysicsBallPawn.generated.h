// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_PhysicsBallPawn_generated_h
#error "PhysicsBallPawn.generated.h already included, missing '#pragma once' in PhysicsBallPawn.h"
#endif
#define CUSTOMGRAVITYPLUGIN_PhysicsBallPawn_generated_h

#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_SPARSE_DATA
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddForwardTorque); \
	DECLARE_FUNCTION(execAddRightTorque);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJump); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddForwardTorque); \
	DECLARE_FUNCTION(execAddRightTorque);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsBallPawn(); \
	friend struct Z_Construct_UClass_APhysicsBallPawn_Statics; \
public: \
	DECLARE_CLASS(APhysicsBallPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBallPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsBallPawn(); \
	friend struct Z_Construct_UClass_APhysicsBallPawn_Statics; \
public: \
	DECLARE_CLASS(APhysicsBallPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(APhysicsBallPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsBallPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsBallPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBallPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBallPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBallPawn(APhysicsBallPawn&&); \
	NO_API APhysicsBallPawn(const APhysicsBallPawn&); \
public:


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsBallPawn(APhysicsBallPawn&&); \
	NO_API APhysicsBallPawn(const APhysicsBallPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsBallPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsBallPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsBallPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(APhysicsBallPawn, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringRoot() { return STRUCT_OFFSET(APhysicsBallPawn, SpringRoot); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(APhysicsBallPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(APhysicsBallPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__GravityComponent() { return STRUCT_OFFSET(APhysicsBallPawn, GravityComponent); }


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_10_PROLOG
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_RPC_WRAPPERS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_INCLASS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_INCLASS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class APhysicsBallPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_PhysicsBallPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
