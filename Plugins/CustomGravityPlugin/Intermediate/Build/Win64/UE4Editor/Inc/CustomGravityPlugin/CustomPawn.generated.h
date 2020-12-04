// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h
#error "CustomPawn.generated.h already included, missing '#pragma once' in CustomPawn.h"
#endif
#define CUSTOMGRAVITYPLUGIN_CustomPawn_generated_h

#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_SPARSE_DATA
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection); \
	DECLARE_FUNCTION(execGetCurrentForwardDirection); \
	DECLARE_FUNCTION(execDisableDebugging); \
	DECLARE_FUNCTION(execEnableDebugging); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execJump);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentRightDirection); \
	DECLARE_FUNCTION(execGetCurrentForwardDirection); \
	DECLARE_FUNCTION(execDisableDebugging); \
	DECLARE_FUNCTION(execEnableDebugging); \
	DECLARE_FUNCTION(execAddCameraYawInput); \
	DECLARE_FUNCTION(execAddCameraPitchInput); \
	DECLARE_FUNCTION(execAddRightMovementInput); \
	DECLARE_FUNCTION(execAddForwardMovementInput); \
	DECLARE_FUNCTION(execStopSprint); \
	DECLARE_FUNCTION(execSprint); \
	DECLARE_FUNCTION(execJump);


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACustomPawn(); \
	friend struct Z_Construct_UClass_ACustomPawn_Statics; \
public: \
	DECLARE_CLASS(ACustomPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(ACustomPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACustomPawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public:


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACustomPawn(ACustomPawn&&); \
	NO_API ACustomPawn(const ACustomPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACustomPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACustomPawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACustomPawn)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CapsuleComponent() { return STRUCT_OFFSET(ACustomPawn, CapsuleComponent); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ACustomPawn, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACustomPawn, Camera); } \
	FORCEINLINE static uint32 __PPO__MovementComponent() { return STRUCT_OFFSET(ACustomPawn, MovementComponent); } \
	FORCEINLINE static uint32 __PPO__PawnMesh() { return STRUCT_OFFSET(ACustomPawn, PawnMesh); } \
	FORCEINLINE static uint32 __PPO__GizmoRootComponent() { return STRUCT_OFFSET(ACustomPawn, GizmoRootComponent); } \
	FORCEINLINE static uint32 __PPO__ForwardArrowComponent() { return STRUCT_OFFSET(ACustomPawn, ForwardArrowComponent); } \
	FORCEINLINE static uint32 __PPO__RightArrowComponent() { return STRUCT_OFFSET(ACustomPawn, RightArrowComponent); } \
	FORCEINLINE static uint32 __PPO__UpArrowComponent() { return STRUCT_OFFSET(ACustomPawn, UpArrowComponent); }


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_14_PROLOG
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_RPC_WRAPPERS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_INCLASS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_INCLASS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class ACustomPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_CustomPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
