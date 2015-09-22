// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .


#include "CustomGravityPluginPrivatePCH.h"

//Initialization
FGravityInfo UCustomGravityManager::GlobalCustomGravityInfo = FGravityInfo();


UCustomGravityManager::UCustomGravityManager()
{
	//
}

void UCustomGravityManager::SetGlobalCustomGravityPower(float NewGravityPower)
{
	GlobalCustomGravityInfo.GravityPower = NewGravityPower;
}

void UCustomGravityManager::SetGlobalCustomGravityDirection(const FVector& NewGravityDirection)
{
	GlobalCustomGravityInfo.GravityDirection = NewGravityDirection;
}

void UCustomGravityManager::SetGlobalCustomGravityForceMode(EForceMode::Type NewForceMode)
{
	GlobalCustomGravityInfo.ForceMode = NewForceMode;
}

void UCustomGravityManager::SetGlobalCustomGravityInfo(const FGravityInfo& NewGravityInfo)
{
	GlobalCustomGravityInfo = NewGravityInfo;
}

float UCustomGravityManager::GetGlobalCustomGravityPower()
{
	return GlobalCustomGravityInfo.GravityPower;
}

FVector UCustomGravityManager::GetGlobalCustomGravityDirection()
{
	return GlobalCustomGravityInfo.GravityDirection.GetSafeNormal();

}

TEnumAsByte<EForceMode::Type> UCustomGravityManager::GetGlobalCustomGravityForceMode()
{
	return GlobalCustomGravityInfo.ForceMode;
}

FGravityInfo UCustomGravityManager::GetGlobalCustomGravityInfo()
{
	return GlobalCustomGravityInfo;
}

FString UCustomGravityManager::Conv_GravityInfoToString(FGravityInfo GravityInfo)
{
	
	const FString GravityPowerStr = FString::SanitizeFloat(GravityInfo.GravityPower);
	const FString DirectionStr = GravityInfo.GravityDirection.GetSafeNormal().ToString();
	const FString GravityTypeStr = UCustomGravityManager::Conv_ForceModeToString(GravityInfo.ForceMode);
	const FString SubSteppingStr = GravityInfo.bForceSubStepping ? "ForceSubStepping : Enabled" : "ForceSubStepping : Disabled";

		return TEXT("<  ") + 
			GravityPowerStr + TEXT("  ,  ") + 
			DirectionStr + TEXT("  ,  ") + 
			GravityTypeStr + TEXT("  ,  ") + 
			SubSteppingStr + 
			TEXT("  >");
}

FString UCustomGravityManager::Conv_GravityTypeToString(EGravityType::Type InGravityType)
{
	switch (InGravityType)
	{
	case EGravityType::EGT_Default:
		return TEXT("Default");
	case EGravityType::EGT_Point:
		return TEXT("Point(Planet)");
	case EGravityType::EGT_Custom:
		return TEXT("Custom");
	case EGravityType::EGT_GlobalCustom:
		return TEXT("Global Custom");
	}

	return TEXT("ERROR !");
}

FString UCustomGravityManager::Conv_ForceModeToString(EForceMode::Type InForceMode)
{
	return  InForceMode == EForceMode::EFM_Acceleration ? "Acceleration" : "Force";
}
