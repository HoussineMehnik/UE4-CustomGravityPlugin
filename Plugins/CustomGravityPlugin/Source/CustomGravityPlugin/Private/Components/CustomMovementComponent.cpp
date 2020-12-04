// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//



#include "Components/CustomMovementComponent.h"
#include "Objects/CustomGravityManager.h"
#include <Components/PrimitiveComponent.h>
#include <Components/CapsuleComponent.h>



UCustomMovementComponent::UCustomMovementComponent()
{
	// Initialization

	//Custom Movement Component

	GravityScale = 2.0f;
	bCanJump = true;
	JumpHeight = 300.0f;
	GroundHitToleranceDistance = 20.0f;
	SpeedBoostMultiplier = 2.0f;
	AirControlRatio = 0.5f;
	GravitySwitchDelay = 0.5f;
	bResetVelocityOnGravitySwitch = false;

	StandingVerticalOrientation = EVerticalOrientation::EVO_GravityDirection;
	FallingVerticalOrientation = EVerticalOrientation::EVO_GravityDirection;
	OrientationSettings = FOrientationSettings();

	DebugDrawType = EDrawDebugTrace::None;

	CustomGravityType = EGravityType::EGT_Default;
	CustomGravityInfo = FGravityInfo();
	PlanetActor = nullptr;

	SurfaceBasedGravityInfo = FGravityInfo();
	TraceShape = ETraceShape::ETS_Sphere;
	TraceChannel = ECollisionChannel::ECC_Visibility;
	TraceShapeScale = 0.75f;
	bUseCapsuleHit = false;

	bEnablePhysicsInteraction = false;
	HitForceFactor = 0.25f;
	bEnablePhysicsInteraction = true;
	bAllowDownwardForce = false;

	bDebugIsEnabled = false;

	// Floating Pawn Movement

	MaxSpeed = 500.0;
	Acceleration = 2048.0f;
	Deceleration = 2048.0f;
}

// Initializes the component
void UCustomMovementComponent::InitializeComponent()
{
	Super::InitializeComponent();

	if (UpdatedComponent == NULL){ return; }

	CapsuleComponent = Cast<UCapsuleComponent>(UpdatedComponent);

	CurrentGravityInfo = FGravityInfo();
	CurrentGravityInfo.GravityDirection = -CapsuleComponent->GetUpVector();
	CurrentOrientationInfo = FOrientationInfo();
	CurrentCapsuleRotation = UpdatedComponent->GetComponentRotation();
	CurrentTraceShapeScale = TraceShapeScale;

	TimeInAir = 0.0f;
	bIsInAir = true;
	bCanResetGravity = false;
	LastWalkSpeed = MaxSpeed;
}


// Called every frame
void UCustomMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// Stop if CapsuleComponet is invalid
	if (CapsuleComponent == NULL)
	{
		return;
	}

	// Update CurrentTraceShapeScale
	if (CurrentTraceShapeScale != TraceShapeScale)
	{
		CurrentTraceShapeScale = FMath::Clamp<float>(TraceShapeScale, 0.0f, 1.0f - KINDA_SMALL_NUMBER);
	}

	/* Local Variables */
	const EDrawDebugTrace::Type DrawDebugType = bDebugIsEnabled ? DebugDrawType.GetValue() : EDrawDebugTrace::None;
	const ECollisionChannel CollisionChannel = CapsuleComponent->GetCollisionObjectType();
	const FVector TraceStart = CapsuleComponent->GetComponentLocation();
	const float CapsuleHalfHeight = CapsuleComponent->GetScaledCapsuleHalfHeight();
	float ShapeRadius = CapsuleComponent->GetScaledCapsuleRadius() * 0.99f;
	FVector TraceEnd = TraceStart - CapsuleComponent->GetUpVector()* (CapsuleHalfHeight - ShapeRadius + GroundHitToleranceDistance + 1.0f);
	FHitResult HitResult;
	TArray<AActor*> ActorsToIgnore;

	
#pragma region Standing/Falling Definition

	/** Testing if the Capsule is in air or standing on a walkable surface*/

	UKismetSystemLibrary::SphereTraceSingle(this, TraceStart, TraceEnd, ShapeRadius, 
		UEngineTypes::ConvertToTraceType(TraceChannel), true, ActorsToIgnore, DrawDebugType, HitResult, true);
	bIsInAir = !HitResult.bBlockingHit;
	TimeInAir = bIsInAir ? TimeInAir + DeltaTime : 0.0f;
	CurrentStandingSurface = HitResult;

#pragma endregion

#pragma region Update Capsule linearDamping
	/**
	* Update Capsule linearDamping
	* If Grounded L-D is set to 1.0f , in same cases helps to stop the capsule when we are not moving
	* If falling case , stetting L-D to 0.01f , Helps to reach the wanted jump height when JumpImpulse is applied
	*/

	if (CapsuleComponent->GetLinearDamping() != 0.01f && bIsInAir)
	{
		CapsuleComponent->SetLinearDamping(0.01f);
	}
	else if (CapsuleComponent->GetLinearDamping() != 0.5f && !bIsInAir)
	{
		CapsuleComponent->SetLinearDamping(0.5f);
	}
	else if (TimeInAir > 1.0f && PlanetActor != nullptr && !bIsJumping)
	{
		CapsuleComponent->SetLinearDamping(0.5f);
	}
#pragma endregion

#pragma region Gravity Settings

	/*  Gravity Settings : Update Current Gravity info*/

	if (bResetVelocityOnGravitySwitch)
	{
		if (!bRequestImmediateUpdate)
		{
			if (bIsInAir && bCanResetGravity && TimeInAir >= GravitySwitchDelay)
			{
				StopMovementImmediately();
				bCanResetGravity = false;
			}
			else if (!bIsInAir && !bCanResetGravity)
			{
				bCanResetGravity = true;
			}
		}
	}


	if (!bIsInAir && StandingVerticalOrientation == EVerticalOrientation::EVO_SurfaceNormal)
	{

		if (bUseCapsuleHit)
		{
			if (CapsuleHitResult.IsValidBlockingHit())
			{
				CurrentTracedSurface = CapsuleHitResult;
			}
		}

		else
		{
			ShapeRadius = CapsuleComponent->GetScaledCapsuleRadius() * CurrentTraceShapeScale;
			TraceEnd = TraceStart - CapsuleComponent->GetUpVector()* (CapsuleHalfHeight + GroundHitToleranceDistance + 1.0f);

			if (TraceShape == ETraceShape::ETS_Line)
			{
				UKismetSystemLibrary::LineTraceSingle(this, TraceStart, TraceEnd, 
					UEngineTypes::ConvertToTraceType(TraceChannel), true, ActorsToIgnore, DrawDebugType, HitResult, true);
			}
			else if (TraceShape == ETraceShape::ETS_Sphere)
			{
				TraceEnd += CapsuleComponent->GetUpVector() * ShapeRadius;
				UKismetSystemLibrary::SphereTraceSingle(this, TraceStart, TraceEnd, ShapeRadius, UEngineTypes::ConvertToTraceType( TraceChannel)
					, true, ActorsToIgnore, DrawDebugType, HitResult, true);
			}
			else
			{
				TraceEnd += CapsuleComponent->GetUpVector() * ShapeRadius;
				UKismetSystemLibrary::BoxTraceSingle(this, TraceStart, TraceEnd, FVector(1, 1, 1)*ShapeRadius, CapsuleComponent->GetComponentRotation(),
					UEngineTypes::ConvertToTraceType(TraceChannel), true, ActorsToIgnore, DrawDebugType, HitResult, true);
			}

			CurrentTracedSurface = HitResult;

		}
		const bool bOnWalkableSurface = CurrentTracedSurface.IsValidBlockingHit();


		if (bOnWalkableSurface)
		{
			SurfaceBasedGravityInfo.GravityDirection = -HitResult.ImpactNormal;
			CurrentGravityInfo = SurfaceBasedGravityInfo;
			CurrentOrientationInfo = OrientationSettings.SurfaceBasedGravity;
		}

	}

	else if ((!bIsInAir && StandingVerticalOrientation == EVerticalOrientation::EVO_GravityDirection) ||
		(bIsInAir && FallingVerticalOrientation == EVerticalOrientation::EVO_GravityDirection))
	{

		if (bRequestImmediateUpdate || !bIsInAir || TimeInAir > GravitySwitchDelay)
		{
			if (bRequestImmediateUpdate == true)
			{
				CapsuleComponent->SetLinearDamping(0.01f);
				bRequestImmediateUpdate = false;
			}

			switch (CustomGravityType)
			{


			case EGravityType::EGT_Default:
			{
				if (CapsuleComponent->IsGravityEnabled() && GravityScale == 0)
				{
					CapsuleComponent->SetEnableGravity(false);
					CapsuleComponent->SetAllPhysicsLinearVelocity(FVector::ZeroVector);
				}
				else if (!CapsuleComponent->IsGravityEnabled() && GravityScale != 0)
				{
					CapsuleComponent->SetEnableGravity(true);
				}

				CurrentGravityInfo = FGravityInfo(-CapsuleComponent->GetWorld()->GetGravityZ(), -FVector::UpVector, EForceMode::EFM_Acceleration, true);
				CurrentOrientationInfo = OrientationSettings.DefaultGravity;

				UpdateCapsuleRotation(DeltaTime, -CurrentGravityInfo.GravityDirection, CurrentOrientationInfo.bIsInstant, CurrentOrientationInfo.RotationInterpSpeed);

				return;
			}


			case EGravityType::EGT_Custom:
			{
				CurrentGravityInfo = CustomGravityInfo;
				CurrentOrientationInfo = OrientationSettings.CustomGravity;
				break;
			}


			case EGravityType::EGT_GlobalCustom:
			{
				CurrentGravityInfo = UCustomGravityManager::GetGlobalCustomGravityInfo();
				CurrentOrientationInfo = OrientationSettings.GlobalCustomGravity;
				break;
			}


			case EGravityType::EGT_Point:
			{
				if (PlanetActor == NULL) { return; }
				CurrentGravityInfo = PlanetActor->GetGravityinfo(CapsuleComponent->GetComponentLocation());
				CurrentOrientationInfo = OrientationSettings.PointGravity;
				break;
			}
			}
		}
	}

#pragma endregion


	
	/** Variables definition & initialization */
	const FVector CurrentGravityDirection = CurrentGravityInfo.GravityDirection;
	const bool bUseAccelerationChange = (CurrentGravityInfo.ForceMode == EForceMode::EFM_Acceleration);
	const bool bShouldUseStepping = CurrentGravityInfo.bForceSubStepping;
	const float CurrentGravityPower = CurrentGravityInfo.GravityPower * GravityScale;

	const FVector GravityForce = CurrentGravityDirection.GetSafeNormal() * CurrentGravityPower;

	const float InterpSpeed = CurrentOrientationInfo.RotationInterpSpeed;
	const bool bOrientationIsInstant = CurrentOrientationInfo.bIsInstant;


	/************************************/
	/****************************************/

	/* Update Rotation : Orient Capsule's up vector to have the same direction as -gravityDirection */
	UpdateCapsuleRotation(DeltaTime, -CurrentGravityDirection, bOrientationIsInstant, InterpSpeed);

	/* Apply Gravity*/
	ApplyGravity(GravityForce, bShouldUseStepping, bUseAccelerationChange);
}



void UCustomMovementComponent::UpdateCapsuleRotation(float DeltaTime, const FVector& TargetUpVector, bool bInstantRot, float RotationSpeed)
{
	const FVector CapsuleUp = CapsuleComponent->GetUpVector();
	const FQuat DeltaQuat = FQuat::FindBetween(CapsuleUp, TargetUpVector);
	const FQuat TargetQuat = DeltaQuat * CapsuleComponent->GetComponentRotation().Quaternion();

	if (bInstantRot)
	{
		CapsuleComponent->SetWorldRotation(TargetQuat);
	}
	else
	{
		switch (OrientationSettings.InterpolationMode)
		{
		case EOrientationInterpolationMode::OIM_RInterpTo:
		{
			CapsuleComponent->SetWorldRotation(
				FMath::RInterpTo(CurrentCapsuleRotation, TargetQuat.Rotator(), DeltaTime, RotationSpeed));
			break;
		}
		case EOrientationInterpolationMode::OIM_Slerp:
		{
			CapsuleComponent->SetWorldRotation(
				FQuat::Slerp(CurrentCapsuleRotation.Quaternion(), TargetQuat, DeltaTime* RotationSpeed));
			break;
		}
		default:
		{
			CapsuleComponent->SetWorldRotation(TargetQuat);
			break;
		}
		}
	}

	CurrentCapsuleRotation = CapsuleComponent->GetComponentRotation();
}


void UCustomMovementComponent::ApplyGravity(const FVector& Force, bool bAllowSubstepping, bool bAccelChange)
{
	CapsuleComponent->GetBodyInstance()->AddForce(Force, bAllowSubstepping, bAccelChange);
}


void UCustomMovementComponent::DoJump()
{
	if (bIsInAir){ return; }

	const float TargetJumpHeight = JumpHeight + CapsuleComponent->GetScaledCapsuleHalfHeight();
	const FVector JumpImpulse = CapsuleComponent->GetUpVector() * FMath::Sqrt(TargetJumpHeight * 2.f * GetGravityPower());
	const bool bUseAccl = (CurrentGravityInfo.ForceMode == EForceMode::EFM_Acceleration);

	CapsuleComponent->GetBodyInstance()->AddImpulse(JumpImpulse,bUseAccl);
}

void UCustomMovementComponent::DoSprint()
{
	if (bIsInAir || bIsSprinting){ return; }

	LastWalkSpeed = MaxSpeed;
	MaxSpeed *= SpeedBoostMultiplier;
	bIsSprinting = true;
}

void UCustomMovementComponent::DoStopSprint()
{
	MaxSpeed = LastWalkSpeed;
	bIsSprinting = false;
}

void UCustomMovementComponent::StopMovementImmediately()
{
	Super::StopMovementImmediately();

	const FVector ZeroVelocity = FVector(0.f, 0.f, 0.f);
	Velocity = ZeroVelocity;

	if (CapsuleComponent != NULL)
	{
		CapsuleComponent->SetPhysicsLinearVelocity(ZeroVelocity);
	}
}

void UCustomMovementComponent::CapsuleHited(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{

	CapsuleHitResult = Hit;

	const float FallingSpeed = FMath::Abs(GetFallingSpeed());

	if (FallingSpeed > 100.0f)
	{
		FVector CurrentVelocity = CapsuleComponent->GetComponentVelocity();
		CurrentVelocity = CapsuleComponent->GetComponentTransform().InverseTransformVector(CurrentVelocity);
		CurrentVelocity.Z = 0.0f;
		CurrentVelocity = CapsuleComponent->GetComponentTransform().TransformVector(CurrentVelocity);
		CapsuleComponent->SetPhysicsLinearVelocity(CurrentVelocity);
	}

	const float OnGroundHitDot = FVector::DotProduct(HitNormal, CapsuleComponent->GetUpVector());

	if (OnGroundHitDot > 0.75f)
	{
		bIsJumping = false;
	}


	if (!bEnablePhysicsInteraction)
	{
		return;
	}

	if (OtherComp != NULL && OtherComp->IsAnySimulatingPhysics())
	{
		const FVector OtherLoc = OtherComp->GetComponentLocation();
		const FVector Loc = CapsuleComponent->GetComponentLocation();
		FVector ImpulseDir = (OtherLoc - Loc).GetSafeNormal();
		ImpulseDir = FVector::VectorPlaneProject(ImpulseDir, -CurrentGravityInfo.GravityDirection);
		ImpulseDir = (ImpulseDir + GetMovementVelocity().GetSafeNormal()) * 0.5f;
		ImpulseDir.Normalize();


		float TouchForceFactorModified = HitForceFactor;

		if (bHitForceScaledToMass)
		{
			FBodyInstance* BI = OtherComp->GetBodyInstance();
			TouchForceFactorModified *= BI ? BI->GetBodyMass() : 1.0f;
		}

		float ImpulseStrength = GetMovementVelocity().Size() * TouchForceFactorModified;

		FVector Impulse = ImpulseDir * ImpulseStrength;
		float dot = FVector::DotProduct(HitNormal, CapsuleComponent->GetUpVector());

		if (dot > 0.99f && !bAllowDownwardForce)
		{
			return;
		}

		OtherComp->AddImpulseAtLocation(Impulse, HitLocation);
	}
}




bool UCustomMovementComponent::IsMovingOnGround() const
{
	return !bIsInAir;
}

bool UCustomMovementComponent::IsFalling() const 
{
	return bIsInAir;
}

float UCustomMovementComponent::GetGravityPower() const
{
	return  CurrentGravityInfo.GravityPower* GravityScale;
}

FVector UCustomMovementComponent::GetFallingVelocity() const
{
	return CapsuleComponent->GetComponentVelocity().ProjectOnTo(-CurrentGravityInfo.GravityDirection);
}

FVector UCustomMovementComponent::GetMovementVelocity() const
{
	const FVector UpVector = CapsuleComponent ? CapsuleComponent->GetUpVector() : FVector::UpVector;
	return FVector::VectorPlaneProject(Velocity, UpVector);

}

float UCustomMovementComponent::GetFallingSpeed() const
{
	const float Direction = FVector::DotProduct(-CurrentGravityInfo.GravityDirection, GetFallingVelocity());

	return GetFallingVelocity().Size() * FMath::Sign(Direction);
}

float UCustomMovementComponent::GetCurrentWalkSpeed() const
{
	return GetMovementVelocity().Size();
}

float UCustomMovementComponent::GetInAirTime() const
{
	return TimeInAir;
}

void UCustomMovementComponent::EnableDebuging()
{
	bDebugIsEnabled = true;
}

void UCustomMovementComponent::DisableDebuging()
{
	bDebugIsEnabled = false;
}


void UCustomMovementComponent::RequestGavityImmediateUpdate()
{
	bRequestImmediateUpdate = true;
}

void UCustomMovementComponent::SetComponentOwner(class ACustomPawn* Owner)
{
	PawnOwner = Owner;
}

void UCustomMovementComponent::SetCurrentPlanet(APlanetActor* NewPlanetActor)
{
	PlanetActor = NewPlanetActor;
}

void UCustomMovementComponent::ClearPlanet()
{
	PlanetActor = nullptr;
}


APlanetActor* UCustomMovementComponent::GetCurrentPlanet() const
{
	return PlanetActor;
}

bool UCustomMovementComponent::IsSprinting() const
{
	return bIsSprinting;
}

FVector UCustomMovementComponent::GetGravityDirection() const
{
	return CurrentGravityInfo.GravityDirection;
}

