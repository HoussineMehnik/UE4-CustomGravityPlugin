// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomGravityPlugin/Public/Pawns/CustomPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomPawn() {}
// Cross Module References
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_ACustomPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_CustomGravityPlugin();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	CUSTOMGRAVITYPLUGIN_API UClass* Z_Construct_UClass_UCustomMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACustomPawn::execGetCurrentRightDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentRightDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execGetCurrentForwardDirection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetCurrentForwardDirection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execDisableDebugging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableDebugging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execEnableDebugging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableDebugging();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execAddCameraYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraYawInput(Z_Param_UpdateRate,Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execAddCameraPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_UpdateRate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCameraPitchInput(Z_Param_UpdateRate,Z_Param_ScaleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execAddRightMovementInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRightMovementInput(Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execAddForwardMovementInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleValue);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForwardMovementInput(Z_Param_ScaleValue,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execStopSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopSprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execSprint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Sprint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACustomPawn::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	void ACustomPawn::StaticRegisterNativesACustomPawn()
	{
		UClass* Class = ACustomPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCameraPitchInput", &ACustomPawn::execAddCameraPitchInput },
			{ "AddCameraYawInput", &ACustomPawn::execAddCameraYawInput },
			{ "AddForwardMovementInput", &ACustomPawn::execAddForwardMovementInput },
			{ "AddRightMovementInput", &ACustomPawn::execAddRightMovementInput },
			{ "DisableDebugging", &ACustomPawn::execDisableDebugging },
			{ "EnableDebugging", &ACustomPawn::execEnableDebugging },
			{ "GetCurrentForwardDirection", &ACustomPawn::execGetCurrentForwardDirection },
			{ "GetCurrentRightDirection", &ACustomPawn::execGetCurrentRightDirection },
			{ "Jump", &ACustomPawn::execJump },
			{ "Sprint", &ACustomPawn::execSprint },
			{ "StopSprint", &ACustomPawn::execStopSprint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics
	{
		struct CustomPawn_eventAddCameraPitchInput_Parms
		{
			float UpdateRate;
			float ScaleValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddCameraPitchInput_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddCameraPitchInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::NewProp_UpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/**\n\x09* Add input (affecting Pitch) to the SpringArm relative rotation.\n\x09* The added value is the product of UpdateRate & ScaleValue.\n\x09*/" },
		{ "CPP_Default_ScaleValue", "0.000000" },
		{ "CPP_Default_UpdateRate", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Add input (affecting Pitch) to the SpringArm relative rotation.\nThe added value is the product of UpdateRate & ScaleValue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "AddCameraPitchInput", nullptr, nullptr, sizeof(CustomPawn_eventAddCameraPitchInput_Parms), Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics
	{
		struct CustomPawn_eventAddCameraYawInput_Parms
		{
			float UpdateRate;
			float ScaleValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateRate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::NewProp_UpdateRate = { "UpdateRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddCameraYawInput_Parms, UpdateRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddCameraYawInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::NewProp_UpdateRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::NewProp_ScaleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/**\n\x09* Add input (affecting Yaw) to the SpringArm relative rotation.\n\x09* The added value is the product of UpdateRate & ScaleValue.\n\x09*/" },
		{ "CPP_Default_ScaleValue", "0.000000" },
		{ "CPP_Default_UpdateRate", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Add input (affecting Yaw) to the SpringArm relative rotation.\nThe added value is the product of UpdateRate & ScaleValue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "AddCameraYawInput", nullptr, nullptr, sizeof(CustomPawn_eventAddCameraYawInput_Parms), Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_AddCameraYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_AddCameraYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics
	{
		struct CustomPawn_eventAddForwardMovementInput_Parms
		{
			float ScaleValue;
			bool bForce;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddForwardMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((CustomPawn_eventAddForwardMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomPawn_eventAddForwardMovementInput_Parms), &Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_ScaleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/** Called to move custom pawn Forward and Backward */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_ScaleValue", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Called to move custom pawn Forward and Backward" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "AddForwardMovementInput", nullptr, nullptr, sizeof(CustomPawn_eventAddForwardMovementInput_Parms), Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics
	{
		struct CustomPawn_eventAddRightMovementInput_Parms
		{
			float ScaleValue;
			bool bForce;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleValue;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_ScaleValue = { "ScaleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventAddRightMovementInput_Parms, ScaleValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((CustomPawn_eventAddRightMovementInput_Parms*)Obj)->bForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomPawn_eventAddRightMovementInput_Parms), &Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_ScaleValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/** Called to move custom pawn Left and Right */" },
		{ "CPP_Default_bForce", "false" },
		{ "CPP_Default_ScaleValue", "1.000000" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Called to move custom pawn Left and Right" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "AddRightMovementInput", nullptr, nullptr, sizeof(CustomPawn_eventAddRightMovementInput_Parms), Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_AddRightMovementInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_AddRightMovementInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Debuging" },
		{ "Comment", "/** Called to disable CustomPawn & MovementComponent debugging. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Called to disable CustomPawn & MovementComponent debugging." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "DisableDebugging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_DisableDebugging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_DisableDebugging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Debuging" },
		{ "Comment", "/** Called to enable CustomPawn & MovementComponent debugging. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Called to enable CustomPawn & MovementComponent debugging." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "EnableDebugging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_EnableDebugging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_EnableDebugging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics
	{
		struct CustomPawn_eventGetCurrentForwardDirection_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventGetCurrentForwardDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn" },
		{ "Comment", "/**Returns Current Forward Movement Direction. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Returns Current Forward Movement Direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "GetCurrentForwardDirection", nullptr, nullptr, sizeof(CustomPawn_eventGetCurrentForwardDirection_Parms), Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics
	{
		struct CustomPawn_eventGetCurrentRightDirection_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomPawn_eventGetCurrentRightDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn" },
		{ "Comment", "/**Returns Current Right Movement Direction. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Returns Current Right Movement Direction." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "GetCurrentRightDirection", nullptr, nullptr, sizeof(CustomPawn_eventGetCurrentRightDirection_Parms), Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_Jump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_Jump_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/** Handle jump action. */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Handle jump action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_Sprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_Sprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/** Handle sprint action. */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Handle sprint action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_Sprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "Sprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_Sprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_Sprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_Sprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_Sprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACustomPawn_StopSprint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACustomPawn_StopSprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|CustomPawn|Input" },
		{ "Comment", "/** Handle stopping sprint action. */" },
		{ "Keywords", "AddInput" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Handle stopping sprint action." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACustomPawn_StopSprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACustomPawn, nullptr, "StopSprint", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACustomPawn_StopSprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACustomPawn_StopSprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACustomPawn_StopSprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACustomPawn_StopSprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACustomPawn_NoRegister()
	{
		return ACustomPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACustomPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitchMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitchMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraPitchMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CameraPitchMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GizmoRootComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GizmoRootComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForwardArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UpArrowComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomGravityPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACustomPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACustomPawn_AddCameraPitchInput, "AddCameraPitchInput" }, // 2411785045
		{ &Z_Construct_UFunction_ACustomPawn_AddCameraYawInput, "AddCameraYawInput" }, // 2722996088
		{ &Z_Construct_UFunction_ACustomPawn_AddForwardMovementInput, "AddForwardMovementInput" }, // 1810092342
		{ &Z_Construct_UFunction_ACustomPawn_AddRightMovementInput, "AddRightMovementInput" }, // 908230342
		{ &Z_Construct_UFunction_ACustomPawn_DisableDebugging, "DisableDebugging" }, // 1542932325
		{ &Z_Construct_UFunction_ACustomPawn_EnableDebugging, "EnableDebugging" }, // 2456465787
		{ &Z_Construct_UFunction_ACustomPawn_GetCurrentForwardDirection, "GetCurrentForwardDirection" }, // 752052635
		{ &Z_Construct_UFunction_ACustomPawn_GetCurrentRightDirection, "GetCurrentRightDirection" }, // 3098914939
		{ &Z_Construct_UFunction_ACustomPawn_Jump, "Jump" }, // 348391556
		{ &Z_Construct_UFunction_ACustomPawn_Sprint, "Sprint" }, // 1375383787
		{ &Z_Construct_UFunction_ACustomPawn_StopSprint, "StopSprint" }, // 2814162188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pawns/CustomPawn.h" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMin_MetaData[] = {
		{ "Category", "Custom Pawn : Camera Settings" },
		{ "Comment", "/** Minimum view Pitch, in degrees. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Minimum view Pitch, in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMin = { "CameraPitchMin", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, CameraPitchMin), METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMax_MetaData[] = {
		{ "Category", "Custom Pawn : Camera Settings" },
		{ "Comment", "/** Maximum view Pitch, in degrees. */" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Maximum view Pitch, in degrees." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMax = { "CameraPitchMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, CameraPitchMax), METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_CapsuleComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** The CapsuleComponent being used for movement collision (by CharacterMovement).*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "The CapsuleComponent being used for movement collision (by CharacterMovement)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_CapsuleComponent = { "CapsuleComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, CapsuleComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CapsuleComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_CapsuleComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** The camera boom. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "The camera boom." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** the main camera associated with this Pawn . */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "the main camera associated with this Pawn ." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_MovementComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** Movement component used for movement. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Movement component used for movement." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_MovementComponent = { "MovementComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, MovementComponent), Z_Construct_UClass_UCustomMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_MovementComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_MovementComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_PawnMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** Skeletal mesh associated with this Pawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Skeletal mesh associated with this Pawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_PawnMesh = { "PawnMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, PawnMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_PawnMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_PawnMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_GizmoRootComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/** Gizmo used as debug arrows root component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Gizmo used as debug arrows root component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_GizmoRootComponent = { "GizmoRootComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, GizmoRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_GizmoRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_GizmoRootComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_ForwardArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/**Forward Arrow Component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Forward Arrow Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_ForwardArrowComponent = { "ForwardArrowComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, ForwardArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_ForwardArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_ForwardArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_RightArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/**Right Arrow Component*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Right Arrow Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_RightArrowComponent = { "RightArrowComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, RightArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_RightArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_RightArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomPawn_Statics::NewProp_UpArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Custom Pawn" },
		{ "Comment", "/**Up Arrow Component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Pawns/CustomPawn.h" },
		{ "ToolTip", "Up Arrow Component." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACustomPawn_Statics::NewProp_UpArrowComponent = { "UpArrowComponent", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACustomPawn, UpArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::NewProp_UpArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::NewProp_UpArrowComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_CameraPitchMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_CapsuleComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_MovementComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_PawnMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_GizmoRootComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_ForwardArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_RightArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomPawn_Statics::NewProp_UpArrowComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACustomPawn_Statics::ClassParams = {
		&ACustomPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACustomPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACustomPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACustomPawn, 866728677);
	template<> CUSTOMGRAVITYPLUGIN_API UClass* StaticClass<ACustomPawn>()
	{
		return ACustomPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACustomPawn(Z_Construct_UClass_ACustomPawn, &ACustomPawn::StaticClass, TEXT("/Script/CustomGravityPlugin"), TEXT("ACustomPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
