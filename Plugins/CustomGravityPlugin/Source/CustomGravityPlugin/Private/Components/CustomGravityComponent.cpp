// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//



#include "Components/CustomGravityComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include <GameFramework/PhysicsVolume.h>


// Sets default values for this component's properties
UCustomGravityComponent::UCustomGravityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// InitializeComponent virtual void can be called
	bWantsInitializeComponent = true;

	// Initialization
	bAutoActivate = true;
	GravityScale = 1.0f;
	GravityType = EGravityType::EGT_Default;
	CustomGravityInfo = FGravityInfo();
	PlanetActor = nullptr;
}


// Initializes the component
void UCustomGravityComponent::InitializeComponent()
{
	Super::InitializeComponent();

	if (UpdatedComponent != NULL)
	{
		return;
	}

	UpdatedComponent = GetOwner()->FindComponentByClass<UPrimitiveComponent>();
	CurrentGravityInfo = FGravityInfo();

}


// Called every frame
void UCustomGravityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Stop if UpdatedComponent is invalid

	if (UpdatedComponent == NULL)
	{
		return;
	}

	// Update Current Gravity info

	if (GravityType == EGravityType::EGT_Default)
	{
		if (UpdatedComponent->IsGravityEnabled() && GravityScale == 0)
		{
			UpdatedComponent->SetEnableGravity(false);
			UpdatedComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
		}
		else if (!UpdatedComponent->IsGravityEnabled() && GravityScale != 0)
		{
			UpdatedComponent->SetEnableGravity(true);
		}
		CurrentGravityInfo = FGravityInfo(-UpdatedComponent->GetPhysicsVolume()->GetGravityZ(), -FVector::UpVector, EForceMode::EFM_Acceleration, true);
		return;
	}

	else if (GravityType == EGravityType::EGT_Custom)
	{
		CurrentGravityInfo = CustomGravityInfo;
	}

	else if (GravityType == EGravityType::EGT_GlobalCustom)
	{
		CurrentGravityInfo = UCustomGravityManager::GetGlobalCustomGravityInfo();
	}

	else if (GravityType == EGravityType::EGT_Point)
	{
		if (PlanetActor == NULL){ return; }

		CurrentGravityInfo = PlanetActor->GetGravityinfo(UpdatedComponent->GetComponentLocation());
	}


	// Disable gravity if enabled
	if (UpdatedComponent->IsGravityEnabled())
	{
		UpdatedComponent->SetEnableGravity(false);
	}


	// Calculate Gravity Force
	const FVector CurrentGravityDirection = CurrentGravityInfo.GravityDirection;
	const bool bUseAccelerationChange = (CurrentGravityInfo.ForceMode == EForceMode::EFM_Acceleration);
	const bool bShouldUseStepping = CurrentGravityInfo.bForceSubStepping;
	const float CurrentGravityPower = CurrentGravityInfo.GravityPower * GravityScale;

	const FVector GravityForce = CurrentGravityDirection.GetSafeNormal() * CurrentGravityPower;

	// Apply Gravity Force
	UpdatedComponent->BodyInstance.AddForce(GravityForce, bShouldUseStepping, bUseAccelerationChange);
}

void UCustomGravityComponent::SetGravityScale(float NewGravityScale)
{
	GravityScale = NewGravityScale;
}

void UCustomGravityComponent::SetGravityType(EGravityType::Type NewGravityType)
{
	GravityType = NewGravityType;
}


void UCustomGravityComponent::SetUpdatedComponent(UPrimitiveComponent* NewUpdatedComponent)
{
	if (NewUpdatedComponent)
	{
		UpdatedComponent = NewUpdatedComponent;
	}
}

void UCustomGravityComponent::SetCurrentPlanet(class APlanetActor* NewPlanet)
{
	PlanetActor = NewPlanet;
}


void UCustomGravityComponent::ClearCurrentPlanet()
{
	if (PlanetActor == nullptr)
	{
		return;
	}

	PlanetActor = nullptr;
}

UPrimitiveComponent* UCustomGravityComponent::GetUpdatedComponent() const
{
	return UpdatedComponent;
}

APlanetActor* UCustomGravityComponent::GetCurrentPlanet() const
{
	return PlanetActor;
}

FVector UCustomGravityComponent::GetCurrentGravityDirection() const
{
	return CurrentGravityInfo.GravityDirection;
}

float UCustomGravityComponent::GetCurrentGravityPower() const
{
	return CurrentGravityInfo.GravityPower;
}

FGravityInfo UCustomGravityComponent::GetCurrentGravityInfo() const
{
	return CurrentGravityInfo;
}
