// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "CustomGravityManager.generated.h"

/** Enumerates available custom gravity types. */
UENUM(BlueprintType)
namespace EGravityType
{
	enum  Type
	{
		EGT_Default 	UMETA(DisplayName = "Default Gravity"),
		EGT_Point 	UMETA(DisplayName = "Point Gravity"),
		EGT_Custom 	UMETA(DisplayName = "Custom Gravity"),
		EGT_GlobalCustom 	UMETA(DisplayName = "Global Custom Gravity")
	};

}

/** Type of force applied to a body using Custom Gravity. */
UENUM(BlueprintType)
namespace EForceMode
{
	enum Type
	{
		EFM_Acceleration 	UMETA(DisplayName = "Acceleration"),
		EFM_Force 	UMETA(DisplayName = "Force")
	};
}


/** Struct to hold information about the "Gravity Type" . */
USTRUCT(BlueprintType)
struct  CUSTOMGRAVITYPLUGIN_API FGravityInfo
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GravityPower;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FVector GravityDirection;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EForceMode::Type> ForceMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bForceSubStepping;

	FGravityInfo()
	{
		GravityPower = 980.0f;
		GravityDirection = FVector(0.0f, 0.0f, -1.0f);
		ForceMode = EForceMode::EFM_Acceleration;
		bForceSubStepping = true;
	}

	FGravityInfo(float NewGravityPower, FVector NewGravityDirection, EForceMode::Type NewForceMode, bool bShouldUseStepping)
	{
		GravityPower = NewGravityPower;
		GravityDirection = NewGravityDirection;
		ForceMode = NewForceMode;
		bForceSubStepping = bShouldUseStepping;
	}

};


UCLASS()
class CUSTOMGRAVITYPLUGIN_API UCustomGravityManager : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		

public:


	/**
	* Default UObject constructor.
	*/
	UCustomGravityManager();

	/** Change Global Custom Gravity power. 
	* This change will affect all physics object using a CustomGravityComponent with GravityType set to "Global Custom Gravity". 
	*/
	UFUNCTION(BlueprintCallable, Category = "Global Custom Gravity", meta = (DisplayName = "Set Global Custom Gravity Power"))
		static void SetGlobalCustomGravityPower(float NewGravityPower);

	/** Change Global Custom Gravity direction. 
	* This change will affect all physics object using a CustomGravityComponent with GravityType set to "Global Custom Gravity". 
	*/
	UFUNCTION(BlueprintCallable, Category = "Global Custom Gravity", meta = (DisplayName = "Set Global Custom Gravity Direction"))
		static void SetGlobalCustomGravityDirection(const FVector& NewGravityDirection);

	/** Change Global Custom Gravity force mode. 
	* 	* This change will affect all physics object using a CustomGravityComponent with GravityType set to "Global Custom Gravity". 
	*/
	UFUNCTION(BlueprintCallable, Category = "Global Custom Gravity", meta = (DisplayName = "Set Global Custom Gravity Force Mode"))
		static void SetGlobalCustomGravityForceMode(EForceMode::Type NewForceMode);

	/** Change Global Custom Gravity information. 
	* This change will affect all physics object using a CustomGravityComponent with GravityType set to "Global Custom Gravity". 
	*/
	UFUNCTION(BlueprintCallable, Category = "Global Custom Gravity", meta = (DisplayName = "Set Global Custom Gravity Info"))
		static void SetGlobalCustomGravityInfo(const FGravityInfo& NewGravityInfo);

	/** returns Global Custom Gravity power */
	UFUNCTION(BlueprintPure, Category = "Global Custom Gravity", meta = (DisplayName = "Global Custom Gravity Power"))
		static float GetGlobalCustomGravityPower();

	/** returns Global Custom Gravity direction */
	UFUNCTION(BlueprintPure, Category = "Global Custom Gravity", meta = (DisplayName = "Global Custom Gravity Direction"))
		static FVector GetGlobalCustomGravityDirection();

	/** returns Global Custom Gravity force mode */
	UFUNCTION(BlueprintPure, Category = "Global Custom Gravity", meta = (DisplayName = "Global Custom Gravity ForceMode"))
		static TEnumAsByte<EForceMode::Type>  GetGlobalCustomGravityForceMode();

	/** returns Global Custom Gravity information */
	UFUNCTION(BlueprintPure, Category = "Global Custom Gravity", meta = (DisplayName = "Global Custom Gravity Info"))
		static FGravityInfo  GetGlobalCustomGravityInfo();

	/** Converts a GravityInfo struct value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "ToString (GravityInfo)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
		static FString Conv_GravityInfoToString(FGravityInfo InGravityInfo);

	/** Converts a GravityType enum value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "ToString (GravityType)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
		static FString Conv_GravityTypeToString(EGravityType::Type InGravityType);

	/** Converts a ForceMode enum value to a string */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "ToString (ForceMode)", CompactNodeTitle = "->", BlueprintAutocast), Category = "Utilities|String")
		static FString Conv_ForceModeToString(EForceMode::Type InForceMode);

protected:

	/** Global Custom Gravity Information. */
	static FGravityInfo GlobalCustomGravityInfo;

};
