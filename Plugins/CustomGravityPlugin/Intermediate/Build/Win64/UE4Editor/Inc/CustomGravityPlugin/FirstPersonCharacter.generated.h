// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CUSTOMGRAVITYPLUGIN_FirstPersonCharacter_generated_h
#error "FirstPersonCharacter.generated.h already included, missing '#pragma once' in FirstPersonCharacter.h"
#endif
#define CUSTOMGRAVITYPLUGIN_FirstPersonCharacter_generated_h

#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_SPARSE_DATA
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_RPC_WRAPPERS
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAFirstPersonCharacter(); \
	friend struct Z_Construct_UClass_AFirstPersonCharacter_Statics; \
public: \
	DECLARE_CLASS(AFirstPersonCharacter, ACustomPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomGravityPlugin"), NO_API) \
	DECLARE_SERIALIZER(AFirstPersonCharacter)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public:


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFirstPersonCharacter(AFirstPersonCharacter&&); \
	NO_API AFirstPersonCharacter(const AFirstPersonCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFirstPersonCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFirstPersonCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFirstPersonCharacter)


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GunMesh() { return STRUCT_OFFSET(AFirstPersonCharacter, GunMesh); } \
	FORCEINLINE static uint32 __PPO__Shooter() { return STRUCT_OFFSET(AFirstPersonCharacter, Shooter); }


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_10_PROLOG
#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_RPC_WRAPPERS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_INCLASS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_PRIVATE_PROPERTY_OFFSET \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_SPARSE_DATA \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_INCLASS_NO_PURE_DECLS \
	Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<class AFirstPersonCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Custom_Gravity_Project_4_26_Plugins_CustomGravityPlugin_Source_CustomGravityPlugin_Public_Pawns_FirstPersonCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
