// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/FirstPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirstPersonCharacter() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AFirstPersonCharacter();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AFirstPersonCharacter::StaticRegisterNativesAFirstPersonCharacter()
	{
	}
	UClass* Z_Construct_UClass_AFirstPersonCharacter_NoRegister()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFirstPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_GunSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GunMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GunMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Shooter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Shooter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirstPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/FirstPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData[] = {
		{ "Category", "Custom Pawn : Gun Socket" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName = { "GunSocketName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, GunSocketName), METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn" },
		{ "Comment", "/** Gun Skeletal mesh associated with this Pawn . */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ToolTip", "Gun Skeletal mesh associated with this Pawn ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh = { "GunMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, GunMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Base Pawn" },
		{ "Comment", "/** Shooter ( Holds Shoot Transform information . */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/FirstPersonCharacter.h" },
		{ "ToolTip", "Shooter ( Holds Shoot Transform information ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter = { "Shooter", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFirstPersonCharacter, Shooter), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_GunMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFirstPersonCharacter_Statics::NewProp_Shooter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirstPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirstPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams = {
		&AFirstPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirstPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirstPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirstPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirstPersonCharacter, 984180742);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<AFirstPersonCharacter>()
	{
		return AFirstPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirstPersonCharacter(Z_Construct_UClass_AFirstPersonCharacter, &AFirstPersonCharacter::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("AFirstPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirstPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
