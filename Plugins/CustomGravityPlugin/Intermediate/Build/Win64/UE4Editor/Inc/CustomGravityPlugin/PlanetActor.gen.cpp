// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Actors/PlanetActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlanetActor() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EForceMode();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static UEnum* ECollisionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("ECollisionType"));
		}
		return Singleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<ECollisionType>()
	{
		return ECollisionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollisionType(ECollisionType_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("ECollisionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Hash() { return 2722169536U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_ECollisionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollisionType"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_ECollisionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollisionType::ECol_Mesh", (int64)ECollisionType::ECol_Mesh },
				{ "ECollisionType::ECol_Sphere", (int64)ECollisionType::ECol_Sphere },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ECol_Mesh.DisplayName", "Mesh Collision" },
				{ "ECol_Mesh.Name", "ECollisionType::ECol_Mesh" },
				{ "ECol_Sphere.DisplayName", "Sphere Collision" },
				{ "ECol_Sphere.Name", "ECollisionType::ECol_Sphere" },
				{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				nullptr,
				"ECollisionType",
				"ECollisionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(APlanetActor::execGetGravityinfo)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGravityInfo*)Z_Param__Result=P_THIS->GetGravityinfo(Z_Param_Out_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execGetGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_Out_TargetLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execSetForceMode)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_newForceMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceMode(EForceMode::Type(Z_Param_newForceMode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlanetActor::execSetGravityPower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityPower(Z_Param_NewGravity);
		P_NATIVE_END;
	}
	void APlanetActor::StaticRegisterNativesAPlanetActor()
	{
		UClass* Class = APlanetActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravityDirection", &APlanetActor::execGetGravityDirection },
			{ "GetGravityinfo", &APlanetActor::execGetGravityinfo },
			{ "SetForceMode", &APlanetActor::execSetForceMode },
			{ "SetGravityPower", &APlanetActor::execSetGravityPower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics
	{
		struct PlanetActor_eventGetGravityDirection_Parms
		{
			FVector TargetLocation;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/**Returns a specific gravity direction based on the target location*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Returns a specific gravity direction based on the target location" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(PlanetActor_eventGetGravityDirection_Parms), Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics
	{
		struct PlanetActor_eventGetGravityinfo_Parms
		{
			FVector TargetLocation;
			FGravityInfo ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventGetGravityinfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/** Get the current planet gravity information.\n\x09* NB : Needs a target location. \n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Get the current planet gravity information.\nNB : Needs a target location." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "GetGravityinfo", nullptr, nullptr, sizeof(PlanetActor_eventGetGravityinfo_Parms), Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_GetGravityinfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_GetGravityinfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetForceMode_Statics
	{
		struct PlanetActor_eventSetForceMode_Parms
		{
			TEnumAsByte<EForceMode::Type> newForceMode;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newForceMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode = { "newForceMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventSetForceMode_Parms, newForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::NewProp_newForceMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/** Update planet force mode*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Update planet force mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "SetForceMode", nullptr, nullptr, sizeof(PlanetActor_eventSetForceMode_Parms), Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetForceMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_SetForceMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics
	{
		struct PlanetActor_eventSetGravityPower_Parms
		{
			float NewGravity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity = { "NewGravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlanetActor_eventSetGravityPower_Parms, NewGravity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::NewProp_NewGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlanetActor" },
		{ "Comment", "/**Change planet gravity power. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Change planet gravity power." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlanetActor, nullptr, "SetGravityPower", nullptr, nullptr, sizeof(PlanetActor_eventSetGravityPower_Parms), Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlanetActor_SetGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlanetActor_SetGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlanetActor_NoRegister()
	{
		return APlanetActor::StaticClass();
	}
	struct Z_Construct_UClass_APlanetActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CollisionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSphereCollisionIsSelected_MetaData[];
#endif
		static void NewProp_bSphereCollisionIsSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSphereCollisionIsSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollisionRaduis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SphereCollisionRaduis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanetMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetMeshScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanetMeshScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ForceMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUseStepping_MetaData[];
#endif
		static void NewProp_bShouldUseStepping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUseStepping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanetRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SphereCollision_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SphereCollision;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlanetActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlanetActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlanetActor_GetGravityDirection, "GetGravityDirection" }, // 2713674822
		{ &Z_Construct_UFunction_APlanetActor_GetGravityinfo, "GetGravityinfo" }, // 589463661
		{ &Z_Construct_UFunction_APlanetActor_SetForceMode, "SetForceMode" }, // 451564541
		{ &Z_Construct_UFunction_APlanetActor_SetGravityPower, "SetGravityPower" }, // 610051988
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/PlanetActor.h" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet collision type : \n\x09* - Mesh Collision.\n\x09* - Sphere Collision.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet collision type :\n- Mesh Collision.\n- Sphere Collision." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType = { "CollisionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, CollisionType), Z_Construct_UEnum_CustomGravityPlugin_ECollisionType, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**\n\x09* Cannot be edited.\n\x09* True , if CollisonType is set to \"Sphere Collision\".\n\x09* False , if CollisonType is set to \"Sphere Collision\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Cannot be edited.\nTrue , if CollisonType is set to \"Sphere Collision\".\nFalse , if CollisonType is set to \"Sphere Collision\"." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bSphereCollisionIsSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected = { "bSphereCollisionIsSelected", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Collision Sphere Radius.\n\x09* Editable when CollisonType is set to \"Sphere Collision\"\n\x09*/" },
		{ "editcondition", "bSphereCollisionIsSelected" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Collision Sphere Radius.\nEditable when CollisonType is set to \"Sphere Collision\"" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis = { "SphereCollisionRaduis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, SphereCollisionRaduis), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**Planet Static Mesh*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Static Mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh = { "PlanetMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, PlanetMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**Planet Mesh scale*/" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Mesh scale" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale = { "PlanetMeshScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, PlanetMeshScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet force mode : Acceleration or Force. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet force mode : Acceleration or Force." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode = { "ForceMode", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, ForceMode), Z_Construct_UEnum_CustomGravityPlugin_EForceMode, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/** Planet gravity power. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet gravity power." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower = { "GravityPower", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, GravityPower), METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData[] = {
		{ "Category", "Planet Actor : General Settings" },
		{ "Comment", "/**If true, forces sub-stepping. */" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "If true, forces sub-stepping." },
	};
#endif
	void Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit(void* Obj)
	{
		((APlanetActor*)Obj)->bShouldUseStepping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping = { "bShouldUseStepping", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlanetActor), &Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** The root component of the planet*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "The root component of the planet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent = { "PlanetRootComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, PlanetRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/**Planet MeshComponet*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet MeshComponet" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Planet Sphere Collision. \n\x09* Created only when CollisonType is set to \"Sphere Collision\". \n\x09* Otherwise the component is unregistered.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/PlanetActor.h" },
		{ "ToolTip", "Planet Sphere Collision.\nCreated only when CollisonType is set to \"Sphere Collision\".\nOtherwise the component is unregistered." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision = { "SphereCollision", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlanetActor, SphereCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlanetActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_CollisionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bSphereCollisionIsSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollisionRaduis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetMeshScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_ForceMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_GravityPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_bShouldUseStepping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_PlanetRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_MeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlanetActor_Statics::NewProp_SphereCollision,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlanetActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlanetActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlanetActor_Statics::ClassParams = {
		&APlanetActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlanetActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlanetActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlanetActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlanetActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlanetActor, 3740915581);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<APlanetActor>()
	{
		return APlanetActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlanetActor(Z_Construct_UClass_APlanetActor, &APlanetActor::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("APlanetActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlanetActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
