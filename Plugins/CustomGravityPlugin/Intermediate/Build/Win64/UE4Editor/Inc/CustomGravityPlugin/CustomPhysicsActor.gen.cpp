// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Actors/CustomPhysicsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPhysicsActor() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPhysicsActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPhysicsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomGravityComponent_NoRegister();
// End Cross Module References
	void ACustomPhysicsActor::StaticRegisterNativesACustomPhysicsActor()
	{
	}
	UClass* Z_Construct_UClass_ACustomPhysicsActor_NoRegister()
	{
		return ACustomPhysicsActor::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPhysicsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GravityComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPhysicsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/CustomPhysicsActor.h" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomPhysicsActor" },
		{ "Comment", "/** StaticMesh Component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ToolTip", "StaticMesh Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPhysicsActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomPhysicsActor" },
		{ "Comment", "/** Gravity Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/CustomPhysicsActor.h" },
		{ "ToolTip", "Gravity Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent = { "GravityComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPhysicsActor, GravityComponent), Z_Construct_UClass_UCustomGravityComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPhysicsActor_Statics::NewProp_GravityComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPhysicsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPhysicsActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomPhysicsActor_Statics::ClassParams = {
		&ACustomPhysicsActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPhysicsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomPhysicsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomPhysicsActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomPhysicsActor, 2637090171);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<ACustomPhysicsActor>()
	{
		return ACustomPhysicsActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomPhysicsActor(Z_Construct_UClass_ACustomPhysicsActor, &ACustomPhysicsActor::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("ACustomPhysicsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPhysicsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
