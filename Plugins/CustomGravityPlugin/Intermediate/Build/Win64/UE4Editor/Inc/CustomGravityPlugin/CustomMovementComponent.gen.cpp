// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Components/CustomMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMovementComponent() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_ETraceShape();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOrientationSettings();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FOrientationInfo();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_APlanetActor_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDrawDebugTrace();
	CUSTOMGRAVITYPLUGIN_API UEnum* Z_Construct_UEnum_CustomGravityPlugin_EGravityType();
	CUSTOMGRAVITYPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGravityInfo();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* ETraceShape_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_ETraceShape, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("ETraceShape"));
		}
		return Singleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<ETraceShape::Type>()
	{
		return ETraceShape_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETraceShape(ETraceShape_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("ETraceShape"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_ETraceShape_Hash() { return 4055073971U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_ETraceShape()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETraceShape"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_ETraceShape_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETraceShape::ETS_Sphere", (int64)ETraceShape::ETS_Sphere },
				{ "ETraceShape::ETS_Box", (int64)ETraceShape::ETS_Box },
				{ "ETraceShape::ETS_Line", (int64)ETraceShape::ETS_Line },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETS_Box.DisplayName", "Box" },
				{ "ETS_Box.Name", "ETraceShape::ETS_Box" },
				{ "ETS_Line.DisplayName", "Line" },
				{ "ETS_Line.Name", "ETraceShape::ETS_Line" },
				{ "ETS_Sphere.DisplayName", "Sphere" },
				{ "ETS_Sphere.Name", "ETraceShape::ETS_Sphere" },
				{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				nullptr,
				"ETraceShape",
				"ETraceShape::Type",
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
	static UEnum* EVerticalOrientation_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EVerticalOrientation"));
		}
		return Singleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EVerticalOrientation::Type>()
	{
		return EVerticalOrientation_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVerticalOrientation(EVerticalOrientation_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EVerticalOrientation"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation_Hash() { return 2162833170U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVerticalOrientation"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVerticalOrientation::EVO_GravityDirection", (int64)EVerticalOrientation::EVO_GravityDirection },
				{ "EVerticalOrientation::EVO_SurfaceNormal", (int64)EVerticalOrientation::EVO_SurfaceNormal },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EVO_GravityDirection.DisplayName", "Gravity Direction" },
				{ "EVO_GravityDirection.Name", "EVerticalOrientation::EVO_GravityDirection" },
				{ "EVO_SurfaceNormal.DisplayName", "Surface Normal" },
				{ "EVO_SurfaceNormal.Name", "EVerticalOrientation::EVO_SurfaceNormal" },
				{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				nullptr,
				"EVerticalOrientation",
				"EVerticalOrientation::Type",
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
	static UEnum* EOrientationInterpolationMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("EOrientationInterpolationMode"));
		}
		return Singleton;
	}
	template<> CUSTOMGRAVITYPLUGIN_API UEnum* StaticEnum<EOrientationInterpolationMode::Type>()
	{
		return EOrientationInterpolationMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOrientationInterpolationMode(EOrientationInterpolationMode_StaticEnum, TEXT("/Script/CustomGravityPlugin"), TEXT("EOrientationInterpolationMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode_Hash() { return 3137404059U; }
	UEnum* Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOrientationInterpolationMode"), 0, Get_Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOrientationInterpolationMode::OIM_RInterpTo", (int64)EOrientationInterpolationMode::OIM_RInterpTo },
				{ "EOrientationInterpolationMode::OIM_Slerp", (int64)EOrientationInterpolationMode::OIM_Slerp },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
				{ "OIM_RInterpTo.DisplayName", "Rotator Interpolation" },
				{ "OIM_RInterpTo.Name", "EOrientationInterpolationMode::OIM_RInterpTo" },
				{ "OIM_Slerp.DisplayName", "Quaternion Slerp" },
				{ "OIM_Slerp.Name", "EOrientationInterpolationMode::OIM_Slerp" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
				nullptr,
				"EOrientationInterpolationMode",
				"EOrientationInterpolationMode::Type",
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
class UScriptStruct* FOrientationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMGRAVITYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOrientationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrientationSettings, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("OrientationSettings"), sizeof(FOrientationSettings), Get_Z_Construct_UScriptStruct_FOrientationSettings_Hash());
	}
	return Singleton;
}
template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<FOrientationSettings>()
{
	return FOrientationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOrientationSettings(FOrientationSettings::StaticStruct, TEXT("/Script/CustomGravityPlugin"), TEXT("OrientationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationSettings
{
	FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OrientationSettings")),new UScriptStruct::TCppStructOps<FOrientationSettings>);
	}
} ScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationSettings;
	struct Z_Construct_UScriptStruct_FOrientationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InterpolationMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalCustomGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GlobalCustomGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceBasedGravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceBasedGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrientationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_InterpolationMode_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_InterpolationMode = { "InterpolationMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, InterpolationMode), Z_Construct_UEnum_CustomGravityPlugin_EOrientationInterpolationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_InterpolationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_InterpolationMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_DefaultGravity_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_DefaultGravity = { "DefaultGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, DefaultGravity), Z_Construct_UScriptStruct_FOrientationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_DefaultGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_DefaultGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_PointGravity_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_PointGravity = { "PointGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, PointGravity), Z_Construct_UScriptStruct_FOrientationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_PointGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_PointGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_CustomGravity_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_CustomGravity = { "CustomGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, CustomGravity), Z_Construct_UScriptStruct_FOrientationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_CustomGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_CustomGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_GlobalCustomGravity_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_GlobalCustomGravity = { "GlobalCustomGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, GlobalCustomGravity), Z_Construct_UScriptStruct_FOrientationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_GlobalCustomGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_GlobalCustomGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_SurfaceBasedGravity_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_SurfaceBasedGravity = { "SurfaceBasedGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationSettings, SurfaceBasedGravity), Z_Construct_UScriptStruct_FOrientationInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_SurfaceBasedGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_SurfaceBasedGravity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrientationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_InterpolationMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_DefaultGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_PointGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_CustomGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_GlobalCustomGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationSettings_Statics::NewProp_SurfaceBasedGravity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrientationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		&NewStructOps,
		"OrientationSettings",
		sizeof(FOrientationSettings),
		alignof(FOrientationSettings),
		Z_Construct_UScriptStruct_FOrientationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrientationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOrientationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OrientationSettings"), sizeof(FOrientationSettings), Get_Z_Construct_UScriptStruct_FOrientationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOrientationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOrientationSettings_Hash() { return 120982675U; }
class UScriptStruct* FOrientationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMGRAVITYPLUGIN_API uint32 Get_Z_Construct_UScriptStruct_FOrientationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOrientationInfo, Z_Construct_UPackage__Script_CustomGravityPlugin(), TEXT("OrientationInfo"), sizeof(FOrientationInfo), Get_Z_Construct_UScriptStruct_FOrientationInfo_Hash());
	}
	return Singleton;
}
template<> CUSTOMGRAVITYPLUGIN_API UScriptStruct* StaticStruct<FOrientationInfo>()
{
	return FOrientationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOrientationInfo(FOrientationInfo::StaticStruct, TEXT("/Script/CustomGravityPlugin"), TEXT("OrientationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationInfo
{
	FScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OrientationInfo")),new UScriptStruct::TCppStructOps<FOrientationInfo>);
	}
} ScriptStruct_CustomGravityPlugin_StaticRegisterNativesFOrientationInfo;
	struct Z_Construct_UScriptStruct_FOrientationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInstant_MetaData[];
#endif
		static void NewProp_bIsInstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationInterpSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOrientationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant_SetBit(void* Obj)
	{
		((FOrientationInfo*)Obj)->bIsInstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant = { "bIsInstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOrientationInfo), &Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_RotationInterpSpeed_MetaData[] = {
		{ "Category", "Orientation Settings" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_RotationInterpSpeed = { "RotationInterpSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOrientationInfo, RotationInterpSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_RotationInterpSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_RotationInterpSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOrientationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_bIsInstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOrientationInfo_Statics::NewProp_RotationInterpSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOrientationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
		nullptr,
		&NewStructOps,
		"OrientationInfo",
		sizeof(FOrientationInfo),
		alignof(FOrientationInfo),
		Z_Construct_UScriptStruct_FOrientationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOrientationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOrientationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOrientationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOrientationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CustomGravityPlugin();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OrientationInfo"), sizeof(FOrientationInfo), Get_Z_Construct_UScriptStruct_FOrientationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOrientationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOrientationInfo_Hash() { return 4079751403U; }
	DEFINE_FUNCTION(UCustomMovementComponent::execGetInAirTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInAirTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetCurrentWalkSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentWalkSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetFallingSpeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFallingSpeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetMovementVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetMovementVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetFallingVelocity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFallingVelocity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execIsSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetCurrentPlanet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APlanetActor**)Z_Param__Result=P_THIS->GetCurrentPlanet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetGravityDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execGetGravityPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execClearPlanet)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPlanet();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execSetCurrentPlanet)
	{
		P_GET_OBJECT(APlanetActor,Z_Param_NewPlanetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentPlanet(Z_Param_NewPlanetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execSetComponentOwner)
	{
		P_GET_OBJECT(ACustomPawn,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetComponentOwner(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execRequestGavityImmediateUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestGavityImmediateUpdate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMovementComponent::execCapsuleHited)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_UBOOL(Z_Param_bSelfMoved);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CapsuleHited(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	void UCustomMovementComponent::StaticRegisterNativesUCustomMovementComponent()
	{
		UClass* Class = UCustomMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CapsuleHited", &UCustomMovementComponent::execCapsuleHited },
			{ "ClearPlanet", &UCustomMovementComponent::execClearPlanet },
			{ "GetCurrentPlanet", &UCustomMovementComponent::execGetCurrentPlanet },
			{ "GetCurrentWalkSpeed", &UCustomMovementComponent::execGetCurrentWalkSpeed },
			{ "GetFallingSpeed", &UCustomMovementComponent::execGetFallingSpeed },
			{ "GetFallingVelocity", &UCustomMovementComponent::execGetFallingVelocity },
			{ "GetGravityDirection", &UCustomMovementComponent::execGetGravityDirection },
			{ "GetGravityPower", &UCustomMovementComponent::execGetGravityPower },
			{ "GetInAirTime", &UCustomMovementComponent::execGetInAirTime },
			{ "GetMovementVelocity", &UCustomMovementComponent::execGetMovementVelocity },
			{ "IsSprinting", &UCustomMovementComponent::execIsSprinting },
			{ "RequestGavityImmediateUpdate", &UCustomMovementComponent::execRequestGavityImmediateUpdate },
			{ "SetComponentOwner", &UCustomMovementComponent::execSetComponentOwner },
			{ "SetCurrentPlanet", &UCustomMovementComponent::execSetCurrentPlanet },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics
	{
		struct CustomMovementComponent_eventCapsuleHited_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static void NewProp_bSelfMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_OtherComp_MetaData)) };
	void Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
	{
		((CustomMovementComponent_eventCapsuleHited_Parms*)Obj)->bSelfMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomMovementComponent_eventCapsuleHited_Parms), &Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventCapsuleHited_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_MyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_bSelfMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Called when the collision capsule touches another primitive component\n\x09* Handles physics interaction logic\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Called when the collision capsule touches another primitive component\nHandles physics interaction logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "CapsuleHited", nullptr, nullptr, sizeof(CustomMovementComponent_eventCapsuleHited_Parms), Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**Set Current Planet Reference to null*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Set Current Planet Reference to null" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "ClearPlanet", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics
	{
		struct CustomMovementComponent_eventGetCurrentPlanet_Parms
		{
			APlanetActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetCurrentPlanet_Parms, ReturnValue), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/** Returns APlanetActor reference. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Returns APlanetActor reference." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetCurrentPlanet", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetCurrentPlanet_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics
	{
		struct CustomMovementComponent_eventGetCurrentWalkSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetCurrentWalkSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**\n\x09* Get current falling speed.\n\x09* Equal movement velocity's length\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get current falling speed.\nEqual movement velocity's length" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetCurrentWalkSpeed", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetCurrentWalkSpeed_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics
	{
		struct CustomMovementComponent_eventGetFallingSpeed_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetFallingSpeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**\n\x09* Get current falling speed.\n\x09* Equal Falling Velocity's length multiplied by direction (float)\n\x09* if direction > 0 => jumping\n\x09* if direction < 0 => falling\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get current falling speed.\nEqual Falling Velocity's length multiplied by direction (float)\nif direction > 0 => jumping\nif direction < 0 => falling" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetFallingSpeed", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetFallingSpeed_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics
	{
		struct CustomMovementComponent_eventGetFallingVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetFallingVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**\n\x09* Get the falling velocity.\n\x09* Capsule component velocity  projected on -CurrentGravityDirection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get the falling velocity.\nCapsule component velocity  projected on -CurrentGravityDirection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetFallingVelocity", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetFallingVelocity_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics
	{
		struct CustomMovementComponent_eventGetGravityDirection_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/** Returns current applied gravity direction. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Returns current applied gravity direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetGravityDirection_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics
	{
		struct CustomMovementComponent_eventGetGravityPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetGravityPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/** Get the current applied gravity power.\n\x09* Equals to Gravity Power multiplied by Gravity Scale.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get the current applied gravity power.\nEquals to Gravity Power multiplied by Gravity Scale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetGravityPower", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetGravityPower_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics
	{
		struct CustomMovementComponent_eventGetInAirTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetInAirTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**\n\x09* Get how much time the pawn is falling (in seconds)\n\x09* when moving on ground , it is set to 0;\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get how much time the pawn is falling (in seconds)\nwhen moving on ground , it is set to 0;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetInAirTime", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetInAirTime_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics
	{
		struct CustomMovementComponent_eventGetMovementVelocity_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventGetMovementVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**\n\x09* Get movement velocity.\n\x09* custom movement component velocity  projected on horizontal plane (plane normal = Capsule up vector).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Get movement velocity.\ncustom movement component velocity  projected on horizontal plane (plane normal = Capsule up vector)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "GetMovementVelocity", nullptr, nullptr, sizeof(CustomMovementComponent_eventGetMovementVelocity_Parms), Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics
	{
		struct CustomMovementComponent_eventIsSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomMovementComponent_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomMovementComponent_eventIsSprinting_Parms), &Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/** If Custom Pawn is sprinting or not. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If Custom Pawn is sprinting or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "IsSprinting", nullptr, nullptr, sizeof(CustomMovementComponent_eventIsSprinting_Parms), Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_IsSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_IsSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/* Change Immediately Gravity Info */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Change Immediately Gravity Info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "RequestGavityImmediateUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics
	{
		struct CustomMovementComponent_eventSetComponentOwner_Parms
		{
			ACustomPawn* Owner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventSetComponentOwner_Parms, Owner), Z_Construct_UClass_ACustomPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/** Update the custom pawn that owns this component. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Update the custom pawn that owns this component." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "SetComponentOwner", nullptr, nullptr, sizeof(CustomMovementComponent_eventSetComponentOwner_Parms), Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics
	{
		struct CustomMovementComponent_eventSetCurrentPlanet_Parms
		{
			APlanetActor* NewPlanetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlanetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::NewProp_NewPlanetActor = { "NewPlanetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMovementComponent_eventSetCurrentPlanet_Parms, NewPlanetActor), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::NewProp_NewPlanetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|CustomMovementComponent" },
		{ "Comment", "/**Update Current Planet Reference*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Update Current Planet Reference" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMovementComponent, nullptr, "SetCurrentPlanet", nullptr, nullptr, sizeof(CustomMovementComponent_eventSetCurrentPlanet_Parms), Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister()
	{
		return UCustomMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanJump_MetaData[];
#endif
		static void NewProp_bCanJump_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanJump;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundHitToleranceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundHitToleranceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedBoostMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedBoostMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AirControlRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AirControlRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravitySwitchDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravitySwitchDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetVelocityOnGravitySwitch_MetaData[];
#endif
		static void NewProp_bResetVelocityOnGravitySwitch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetVelocityOnGravitySwitch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandingVerticalOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StandingVerticalOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallingVerticalOrientation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FallingVerticalOrientation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrientationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OrientationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DebugDrawType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DebugDrawType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGravityType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CustomGravityType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomGravityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomGravityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlanetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlanetActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceBasedGravityInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceBasedGravityInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseCapsuleHit_MetaData[];
#endif
		static void NewProp_bUseCapsuleHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseCapsuleHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceShape;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TraceShapeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TraceShapeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePhysicsInteraction_MetaData[];
#endif
		static void NewProp_bEnablePhysicsInteraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePhysicsInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitForceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitForceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHitForceScaledToMass_MetaData[];
#endif
		static void NewProp_bHitForceScaledToMass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHitForceScaledToMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowDownwardForce_MetaData[];
#endif
		static void NewProp_bAllowDownwardForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowDownwardForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStandingSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentStandingSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTracedSurface_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentTracedSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleHitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapsuleHitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMovementComponent_CapsuleHited, "CapsuleHited" }, // 3849831430
		{ &Z_Construct_UFunction_UCustomMovementComponent_ClearPlanet, "ClearPlanet" }, // 783378452
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetCurrentPlanet, "GetCurrentPlanet" }, // 2726347433
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetCurrentWalkSpeed, "GetCurrentWalkSpeed" }, // 892707830
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetFallingSpeed, "GetFallingSpeed" }, // 1396971950
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetFallingVelocity, "GetFallingVelocity" }, // 880056305
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 959725384
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetGravityPower, "GetGravityPower" }, // 2926895149
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetInAirTime, "GetInAirTime" }, // 2965589579
		{ &Z_Construct_UFunction_UCustomMovementComponent_GetMovementVelocity, "GetMovementVelocity" }, // 2221403161
		{ &Z_Construct_UFunction_UCustomMovementComponent_IsSprinting, "IsSprinting" }, // 2884285963
		{ &Z_Construct_UFunction_UCustomMovementComponent_RequestGavityImmediateUpdate, "RequestGavityImmediateUpdate" }, // 2305771956
		{ &Z_Construct_UFunction_UCustomMovementComponent_SetComponentOwner, "SetComponentOwner" }, // 853837288
		{ &Z_Construct_UFunction_UCustomMovementComponent_SetCurrentPlanet, "SetCurrentPlanet" }, // 2118930141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/CustomMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravityScale_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/**\n\x09*Custom Gravity Scale.\n\x09*Gravity is multiplied by this amount for the Component Owner (Pawn).\n\x09*In DefaultGravity case : 0 = No Gravity , Other value than 0 = Default Gravity is enabled\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Custom Gravity Scale.\nGravity is multiplied by this amount for the Component Owner (Pawn).\nIn DefaultGravity case : 0 = No Gravity , Other value than 0 = Default Gravity is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, GravityScale), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/** If true, Pawn can jump. */" },
		{ "DisplayName", "Can Jump" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If true, Pawn can jump." },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bCanJump = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump = { "bCanJump", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/** Desired jump height */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Desired jump height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_JumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GroundHitToleranceDistance_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Maximum acceptable distance for custom pawn capsule/sphere to walk above a surface. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Maximum acceptable distance for custom pawn capsule/sphere to walk above a surface." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GroundHitToleranceDistance = { "GroundHitToleranceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, GroundHitToleranceDistance), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GroundHitToleranceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GroundHitToleranceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SpeedBoostMultiplier_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When sprinting, multiplier applied to Max Walk Speed */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "When sprinting, multiplier applied to Max Walk Speed" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SpeedBoostMultiplier = { "SpeedBoostMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, SpeedBoostMultiplier), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SpeedBoostMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SpeedBoostMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_AirControlRatio_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* When falling, amount of lateral movement control available to the character.\n\x09* 0 = no control, 1 = full control at max speed of MaxWalkSpeed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "When falling, amount of lateral movement control available to the character.\n0 = no control, 1 = full control at max speed of MaxWalkSpeed." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_AirControlRatio = { "AirControlRatio", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, AirControlRatio), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_AirControlRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_AirControlRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravitySwitchDelay_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When falling, amount of  time before switch from StandingOrientation to FallingOrientation.*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "When falling, amount of  time before switch from StandingOrientation to FallingOrientation." },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravitySwitchDelay = { "GravitySwitchDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, GravitySwitchDelay), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravitySwitchDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravitySwitchDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/** If true, set the pawn's velocity to Zero before changing the gravity direction */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If true, set the pawn's velocity to Zero before changing the gravity direction" },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bResetVelocityOnGravitySwitch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch = { "bResetVelocityOnGravitySwitch", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_StandingVerticalOrientation_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/**Determine pawn's vertical orientation when is moving on ground*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Determine pawn's vertical orientation when is moving on ground" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_StandingVerticalOrientation = { "StandingVerticalOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, StandingVerticalOrientation), Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_StandingVerticalOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_StandingVerticalOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_FallingVerticalOrientation_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/**Determine pawn's vertical orientation when is falling*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Determine pawn's vertical orientation when is falling" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_FallingVerticalOrientation = { "FallingVerticalOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, FallingVerticalOrientation), Z_Construct_UEnum_CustomGravityPlugin_EVerticalOrientation, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_FallingVerticalOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_FallingVerticalOrientation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OrientationSettings_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/**\n\x09*Orientation Settings for each gravity mode:\n\x09*-IsInstant : If true , the orientation is instant;\n\x09*-RotationInterpSpeed : Orientation speed , if IsInstant is false;\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Orientation Settings for each gravity mode:\n-IsInstant : If true , the orientation is instant;\n-RotationInterpSpeed : Orientation speed , if IsInstant is false;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OrientationSettings = { "OrientationSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, OrientationSettings), Z_Construct_UScriptStruct_FOrientationSettings, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OrientationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OrientationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_DebugDrawType_MetaData[] = {
		{ "Category", "Custom Movement Component : General Settings" },
		{ "Comment", "/**Traces Debug Draw Type*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Traces Debug Draw Type" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_DebugDrawType = { "DebugDrawType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, DebugDrawType), Z_Construct_UEnum_Engine_EDrawDebugTrace, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_DebugDrawType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_DebugDrawType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityType_MetaData[] = {
		{ "Category", "Custom Movement Component : Custom Gravity" },
		{ "Comment", "/** Gravity Type\n\x09* Used if Vertical Orientation is set to \"Gravity Direction\"\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Gravity Type\nUsed if Vertical Orientation is set to \"Gravity Direction\"" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityType = { "CustomGravityType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, CustomGravityType), Z_Construct_UEnum_CustomGravityPlugin_EGravityType, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityInfo_MetaData[] = {
		{ "Category", "Custom Movement Component : Custom Gravity" },
		{ "Comment", "/** Custom gravity Information , if \"Custom Gravity Type\" is set to \"Custom Gravity\".*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Custom gravity Information , if \"Custom Gravity Type\" is set to \"Custom Gravity\"." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityInfo = { "CustomGravityInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, CustomGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_PlanetActor_MetaData[] = {
		{ "Category", "Custom Movement Component : Custom Gravity" },
		{ "Comment", "/**Planet Actor Reference .\n\x09* Needed when \"Custom Gravity Type\" is set to \"Point Gravity\"\n\x09* If \"Point Gravity\" is selected and \"Planet Actor\" is null , No gravity will be applied.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Planet Actor Reference .\nNeeded when \"Custom Gravity Type\" is set to \"Point Gravity\"\nIf \"Point Gravity\" is selected and \"Planet Actor\" is null , No gravity will be applied." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_PlanetActor = { "PlanetActor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, PlanetActor), Z_Construct_UClass_APlanetActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_PlanetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_PlanetActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SurfaceBasedGravityInfo_MetaData[] = {
		{ "Category", "Custom Movement Component : Surface Based Gravity" },
		{ "Comment", "/** Surface Based Gravity Information , if Vertical Orientation is set to \"Surface Normal\".*/" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Surface Based Gravity Information , if Vertical Orientation is set to \"Surface Normal\"." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SurfaceBasedGravityInfo = { "SurfaceBasedGravityInfo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, SurfaceBasedGravityInfo), Z_Construct_UScriptStruct_FGravityInfo, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SurfaceBasedGravityInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SurfaceBasedGravityInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit_MetaData[] = {
		{ "Category", "Custom Movement Component : Surface Based Gravity" },
		{ "Comment", "/** If enabled, custom pawn's capsule hit results with be used instead of trace hit results. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If enabled, custom pawn's capsule hit results with be used instead of trace hit results." },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bUseCapsuleHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit = { "bUseCapsuleHit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShape_MetaData[] = {
		{ "Category", "Custom Movement Component : Surface Based Gravity" },
		{ "Comment", "/**\n\x09* Editable if UseCapsuleHit is set to true .\n\x09* Trace shape used to test the surface the custom pawn is standing on .\n\x09*/" },
		{ "editcondition", "!bUseCapsuleHit" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Editable if UseCapsuleHit is set to true .\nTrace shape used to test the surface the custom pawn is standing on ." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShape = { "TraceShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, TraceShape), Z_Construct_UEnum_CustomGravityPlugin_ETraceShape, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShape_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Custom Movement Component : Surface Based Gravity" },
		{ "Comment", "/**Trace Collision Channel .\n\x09* Default value \"Pawn\" same as the capsule collision objectType.\n\x09* Useful to change it from \"Pawn\" , if we want to not follow some surfaces normal even if the capsule is standing on \"\n\x09*/" },
		{ "editcondition", "!bUseCapsuleHit" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Trace Collision Channel .\nDefault value \"Pawn\" same as the capsule collision objectType.\nUseful to change it from \"Pawn\" , if we want to not follow some surfaces normal even if the capsule is standing on \"" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShapeScale_MetaData[] = {
		{ "Category", "Custom Movement Component : Surface Based Gravity" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09* Trace Shape Scale (between 0 and 1) .\n\x09* 0.0f means shape radius/extent equal to 0.0f\n\x09* 1.0 means shape radius/extent equal to custom pawn's capsule radius.\n\x09*/" },
		{ "editcondition", "!bUseCapsuleHit" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Trace Shape Scale (between 0 and 1) .\n0.0f means shape radius/extent equal to 0.0f\n1.0 means shape radius/extent equal to custom pawn's capsule radius." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShapeScale = { "TraceShapeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, TraceShapeScale), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShapeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShapeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_MetaData[] = {
		{ "Category", "Custom Movement Component : Physics Interaction" },
		{ "Comment", "/** If enabled, the player will interact with physics objects when walking into them. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If enabled, the player will interact with physics objects when walking into them." },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bEnablePhysicsInteraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction = { "bEnablePhysicsInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HitForceFactor_MetaData[] = {
		{ "Category", "Custom Movement Component : Physics Interaction" },
		{ "Comment", "/** Force to apply to physics objects that are touched by the player. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Force to apply to physics objects that are touched by the player." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HitForceFactor = { "HitForceFactor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, HitForceFactor), METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HitForceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HitForceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass_MetaData[] = {
		{ "Category", "Custom Movement Component : Physics Interaction" },
		{ "Comment", "/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If enabled, the TouchForceFactor is applied per kg mass of the affected object." },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bHitForceScaledToMass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass = { "bHitForceScaledToMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce_MetaData[] = {
		{ "Category", "Custom Movement Component : Physics Interaction" },
		{ "Comment", "/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */" },
		{ "editcondition", "bEnablePhysicsInteraction" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "If enabled, the TouchForceFactor is applied per kg mass of the affected object." },
	};
#endif
	void Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce_SetBit(void* Obj)
	{
		((UCustomMovementComponent*)Obj)->bAllowDownwardForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce = { "bAllowDownwardForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCustomMovementComponent), &Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentStandingSurface_MetaData[] = {
		{ "Category", "Custom Movement Component" },
		{ "Comment", "/** Information about the surface the custom pawn is standing on. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Information about the surface the custom pawn is standing on." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentStandingSurface = { "CurrentStandingSurface", nullptr, (EPropertyFlags)0x0010008000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, CurrentStandingSurface), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentStandingSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentStandingSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentTracedSurface_MetaData[] = {
		{ "Category", "Custom Movement Component" },
		{ "Comment", "/** Information about the surface the custom pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Information about the surface the custom pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentTracedSurface = { "CurrentTracedSurface", nullptr, (EPropertyFlags)0x0010008000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, CurrentTracedSurface), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentTracedSurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentTracedSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHitResult_MetaData[] = {
		{ "Category", "Custom Movement Component" },
		{ "Comment", "/** Information about the surface the pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal. */" },
		{ "ModuleRelativePath", "Public/Components/CustomMovementComponent.h" },
		{ "ToolTip", "Information about the surface the pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHitResult = { "CapsuleHitResult", nullptr, (EPropertyFlags)0x0010008000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCustomMovementComponent, CapsuleHitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bCanJump,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_JumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GroundHitToleranceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SpeedBoostMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_AirControlRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_GravitySwitchDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bResetVelocityOnGravitySwitch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_StandingVerticalOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_FallingVerticalOrientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_OrientationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_DebugDrawType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CustomGravityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_PlanetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_SurfaceBasedGravityInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bUseCapsuleHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_TraceShapeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bEnablePhysicsInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_HitForceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bHitForceScaledToMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_bAllowDownwardForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentStandingSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CurrentTracedSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomMovementComponent_Statics::NewProp_CapsuleHitResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams = {
		&UCustomMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomMovementComponent, 3859782503);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<UCustomMovementComponent>()
	{
		return UCustomMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomMovementComponent(Z_Construct_UClass_UCustomMovementComponent, &UCustomMovementComponent::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("UCustomMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
