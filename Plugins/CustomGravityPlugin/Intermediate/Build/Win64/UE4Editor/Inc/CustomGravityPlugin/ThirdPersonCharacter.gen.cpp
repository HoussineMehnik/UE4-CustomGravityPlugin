// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/ThirdPersonCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeThirdPersonCharacter() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_AThirdPersonCharacter();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
// End Cross Module References
	static UEnum* EMeshOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EMeshOrientation"));
		}
		return Singleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EMeshOrientation::Type>()
	{
		return EMeshOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMeshOrientation(EMeshOrientation_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EMeshOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Hash() { return 914503606U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMeshOrientation"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMeshOrientation::EMO_Movement", (int64)EMeshOrientation::EMO_Movement },
				{ "EMeshOrientation::EMO_Camera", (int64)EMeshOrientation::EMO_Camera },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EMO_Camera.DisplayName", "Camera Direction" },
				{ "EMO_Camera.Name", "EMeshOrientation::EMO_Camera" },
				{ "EMO_Movement.DisplayName", "Movement Direction" },
				{ "EMO_Movement.Name", "EMeshOrientation::EMO_Movement" },
				{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				nullptr,
				"EMeshOrientation",
				"EMeshOrientation::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AThirdPersonCharacter::StaticRegisterNativesAThirdPersonCharacter()
	{
	}
	UClass* Z_Construct_UClass_AThirdPersonCharacter_NoRegister()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AThirdPersonCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateMeshOnlyWhenMoving_MetaData[];
#endif
		static void NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateMeshOnlyWhenMoving;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinVelocityToRotateMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinVelocityToRotateMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInstantRotation_MetaData[];
#endif
		static void NewProp_bInstantRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInstantRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AThirdPersonCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACustomPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/ThirdPersonCharacter.h" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/**\n\x09* Set Mesh Orientation.\n\x09* rotate the Character toward the direction of :\n\x09* -Movement Direction\n\x09* -Camera Direction\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Set Mesh Orientation.\nrotate the Character toward the direction of :\n-Movement Direction\n-Camera Direction" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation = { "MeshOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, MeshOrientation), Z_Construct_UEnum_CustomGravityPlugin_EMeshOrientation, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/**\n\x09* if true , rotate the mesh only when the custom pawn is moving .\n\x09*/" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , rotate the mesh only when the custom pawn is moving ." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bRotateMeshOnlyWhenMoving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving = { "bRotateMeshOnlyWhenMoving", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/**Minimum Movement speed needed to orient the mesh toward the desired direction*/" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Minimum Movement speed needed to orient the mesh toward the desired direction" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh = { "MinVelocityToRotateMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, MinVelocityToRotateMesh), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "Comment", "/** \n\x09* if true , instantly rotate the character mesh toward the desired rotation. \n\x09* if false , smoothly rotate the character mesh toward the desired rotation. \n\x09*/" },
		{ "editcondition", "bRotateMeshOnlyWhenMoving" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "if true , instantly rotate the character mesh toward the desired rotation.\nif false , smoothly rotate the character mesh toward the desired rotation." },
	};
#endif
	void Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit(void* Obj)
	{
		((AThirdPersonCharacter*)Obj)->bInstantRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation = { "bInstantRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AThirdPersonCharacter), &Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Custom Pawn : Mesh Rotation Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Controls how smooth the rotation is done , editable if InstantRotation is false  */" },
		{ "editcondition", "!bInstantRotation" },
		{ "ModuleRelativePath", "Public/Pawns/ThirdPersonCharacter.h" },
		{ "ToolTip", "Controls how smooth the rotation is done , editable if InstantRotation is false" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AThirdPersonCharacter, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MeshOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bRotateMeshOnlyWhenMoving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_MinVelocityToRotateMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_bInstantRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AThirdPersonCharacter_Statics::NewProp_RotationInterpSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AThirdPersonCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AThirdPersonCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams = {
		&AThirdPersonCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AThirdPersonCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AThirdPersonCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AThirdPersonCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AThirdPersonCharacter, 3319574388);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<AThirdPersonCharacter>()
	{
		return AThirdPersonCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AThirdPersonCharacter(Z_Construct_UClass_AThirdPersonCharacter, &AThirdPersonCharacter::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("AThirdPersonCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AThirdPersonCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
