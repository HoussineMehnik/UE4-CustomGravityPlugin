// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#pragma once
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "CustomMovementComponent.generated.h"





UENUM(BlueprintType)
namespace EOrientationInterpolationMode
{
	enum  Type
	{
		OIM_RInterpTo 	UMETA(DisplayName = "Rotator Interpolation"),
		OIM_Slerp	UMETA(DisplayName = "Quaternion Slerp")
	};
}



UENUM(BlueprintType)
namespace EVerticalOrientation
{
	enum  Type
	{
		EVO_GravityDirection 	UMETA(DisplayName = "Gravity Direction"),
		EVO_SurfaceNormal	UMETA(DisplayName = "Surface Normal")
	};
}




UENUM(BlueprintType)
namespace ETraceShape
{
	enum  Type
	{
		ETS_Sphere	UMETA(DisplayName = "Sphere"),
		ETS_Box	UMETA(DisplayName = "Box"),
		ETS_Line 	UMETA(DisplayName = "Line")
	};
}


USTRUCT(BlueprintType)
struct FOrientationInfo
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		bool bIsInstant;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		float RotationInterpSpeed;

	FOrientationInfo()
	{
		bIsInstant = false;
		RotationInterpSpeed = 5.0f;
	}
	FOrientationInfo(bool _isInstant, float _interpSpeed)
	{
		bIsInstant = _isInstant;
		RotationInterpSpeed = _interpSpeed;
	}
};



USTRUCT(BlueprintType)
struct FOrientationSettings
{
	GENERATED_USTRUCT_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		TEnumAsByte<EOrientationInterpolationMode::Type> InterpolationMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		FOrientationInfo DefaultGravity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		FOrientationInfo PointGravity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		FOrientationInfo CustomGravity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		FOrientationInfo GlobalCustomGravity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Orientation Settings")
		FOrientationInfo SurfaceBasedGravity;

	FOrientationSettings()
		: InterpolationMode(EOrientationInterpolationMode::OIM_Slerp)
	{

	}
};






UCLASS()
class  CUSTOMGRAVITYPLUGIN_API UCustomMovementComponent : public UFloatingPawnMovement
{
	GENERATED_BODY()

public:



	/**
	* Default UObject constructor.
	*/
	UCustomMovementComponent();

	//Begin UActorComponent Interface
	virtual void InitializeComponent() override;
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	//End UActorComponent Interface


	//BEGIN UMovementComponent Interface
	virtual bool IsMovingOnGround() const override;
	virtual bool IsFalling() const override;
	virtual void StopMovementImmediately() override;
	//END UMovementComponent Interface

	/**
	* Called when the collision capsule touches another primitive component
	* Handles physics interaction logic	*/
	UFUNCTION()
		virtual void CapsuleHited(class UPrimitiveComponent* MyComp,
	class AActor* Other,
	class UPrimitiveComponent* OtherComp,
	bool bSelfMoved,
	FVector HitLocation,
	FVector HitNormal, FVector
	NormalImpulse,
	const FHitResult& Hit);

	virtual void UpdateCapsuleRotation(float DeltaTime, const FVector& TargetUpVector, bool bInstantRot, float RotationSpeed);
	virtual void ApplyGravity(const FVector& Force, bool bAllowSubstepping, bool bAccelChange);
	virtual void DoJump();
	virtual void DoSprint();
	virtual void DoStopSprint();
	virtual void EnableDebuging();
	virtual void DisableDebuging();

	/**
	*Custom Gravity Scale.
	*Gravity is multiplied by this amount for the Component Owner (Pawn).
	*In DefaultGravity case : 0 = No Gravity , Other value than 0 = Default Gravity is enabled
	*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		float GravityScale;

	/** If true, Pawn can jump. */
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite, DisplayName = "Can Jump")
		bool bCanJump;

	/** Desired jump height */
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		float JumpHeight = 300.f;

	/** Maximum acceptable distance for custom pawn capsule/sphere to walk above a surface. */
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", UIMin = "0"))
		float GroundHitToleranceDistance;

	/** When sprinting, multiplier applied to Max Walk Speed */
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", UIMin = "0"))
		float SpeedBoostMultiplier;

	/**
	* When falling, amount of lateral movement control available to the character.
	* 0 = no control, 1 = full control at max speed of MaxWalkSpeed.
	*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float AirControlRatio;

	/** When falling, amount of  time before switch from StandingOrientation to FallingOrientation.*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", UIMin = "0"))
		float GravitySwitchDelay;

	/** If true, set the pawn's velocity to Zero before changing the gravity direction */
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		bool bResetVelocityOnGravitySwitch;

	/**Determine pawn's vertical orientation when is moving on ground*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EVerticalOrientation::Type> StandingVerticalOrientation;

	/**Determine pawn's vertical orientation when is falling*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EVerticalOrientation::Type> FallingVerticalOrientation;

	/**
	*Orientation Settings for each gravity mode:
	*-IsInstant : If true , the orientation is instant;
	*-RotationInterpSpeed : Orientation speed , if IsInstant is false;
	*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		FOrientationSettings OrientationSettings;

	/**Traces Debug Draw Type*/
	UPROPERTY(Category = "Custom Movement Component : General Settings", EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EDrawDebugTrace::Type> DebugDrawType;

	/** Gravity Type
	* Used if Vertical Orientation is set to "Gravity Direction"
	*/
	UPROPERTY(Category = "Custom Movement Component : Custom Gravity", EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EGravityType::Type> CustomGravityType;

	/** Custom gravity Information , if "Custom Gravity Type" is set to "Custom Gravity".*/
	UPROPERTY(Category = "Custom Movement Component : Custom Gravity", EditAnywhere, BlueprintReadWrite)
		FGravityInfo CustomGravityInfo;

	/**Planet Actor Reference .
	* Needed when "Custom Gravity Type" is set to "Point Gravity"
	* If "Point Gravity" is selected and "Planet Actor" is null , No gravity will be applied.
	*/
	UPROPERTY(Category = "Custom Movement Component : Custom Gravity", EditAnywhere, BlueprintReadWrite)
		APlanetActor* PlanetActor;

	/** Surface Based Gravity Information , if Vertical Orientation is set to "Surface Normal".*/
	UPROPERTY(Category = "Custom Movement Component : Surface Based Gravity", EditAnywhere, BlueprintReadWrite)
		FGravityInfo SurfaceBasedGravityInfo;

	/** If enabled, custom pawn's capsule hit results with be used instead of trace hit results. */
	UPROPERTY(Category = "Custom Movement Component : Surface Based Gravity", EditAnywhere, BlueprintReadWrite)
		bool bUseCapsuleHit;
	/**
	* Editable if UseCapsuleHit is set to true .
	* Trace shape used to test the surface the custom pawn is standing on .
	*/
	UPROPERTY(Category = "Custom Movement Component : Surface Based Gravity", EditAnywhere, BlueprintReadWrite, meta = (editcondition = "!bUseCapsuleHit"))
		TEnumAsByte<ETraceShape::Type> TraceShape;

	/**Trace Collision Channel .
	* Default value "Pawn" same as the capsule collision objectType.
	* Useful to change it from "Pawn" , if we want to not follow some surfaces normal even if the capsule is standing on "
	*/
	UPROPERTY(Category = "Custom Movement Component : Surface Based Gravity", EditAnywhere, BlueprintReadWrite, meta = (editcondition = "!bUseCapsuleHit"))
		TEnumAsByte<ECollisionChannel> TraceChannel;

	/**
	* Trace Shape Scale (between 0 and 1) .
	* 0.0f means shape radius/extent equal to 0.0f
	* 1.0 means shape radius/extent equal to custom pawn's capsule radius.
	*/
	UPROPERTY(Category = "Custom Movement Component : Surface Based Gravity", EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"), meta = (editcondition = "!bUseCapsuleHit"))
		float TraceShapeScale;

	/** If enabled, the player will interact with physics objects when walking into them. */
	UPROPERTY(Category = "Custom Movement Component : Physics Interaction", EditAnywhere, BlueprintReadWrite)
		bool bEnablePhysicsInteraction;

	/** Force to apply to physics objects that are touched by the player. */
	UPROPERTY(Category = "Custom Movement Component : Physics Interaction", EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
		float HitForceFactor = 0.25f;

	/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */
	UPROPERTY(Category = "Custom Movement Component : Physics Interaction", EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
		bool bHitForceScaledToMass = true;

	/** If enabled, the TouchForceFactor is applied per kg mass of the affected object. */
	UPROPERTY(Category = "Custom Movement Component : Physics Interaction", EditAnywhere, BlueprintReadWrite, meta = (editcondition = "bEnablePhysicsInteraction"))
		bool bAllowDownwardForce = true;

	/** Information about the surface the custom pawn is standing on. */
	UPROPERTY(Category = "Custom Movement Component", VisibleInstanceOnly, BlueprintReadOnly)
		FHitResult CurrentStandingSurface;

	/** Information about the surface the custom pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal. */
	UPROPERTY(Category = "Custom Movement Component", VisibleInstanceOnly, BlueprintReadOnly)
		FHitResult CurrentTracedSurface;

	/** Information about the surface the pawn is standing on (Updated only when is moving on ground and VericalOrientation is based on surface Normal. */
	UPROPERTY(Category = "Custom Movement Component", VisibleInstanceOnly, BlueprintReadOnly)
		FHitResult CapsuleHitResult;

	/* Change Immediately Gravity Info */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		void RequestGavityImmediateUpdate();

	/** Update the custom pawn that owns this component. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		void SetComponentOwner(class ACustomPawn* Owner);

	/**Update Current Planet Reference*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		void SetCurrentPlanet(APlanetActor* NewPlanetActor);

	/**Set Current Planet Reference to null*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		void ClearPlanet();

	/** Get the current applied gravity power.
	* Equals to Gravity Power multiplied by Gravity Scale.
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		float GetGravityPower() const;

	/** Returns current applied gravity direction. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		FVector GetGravityDirection() const;

	/** Returns APlanetActor reference. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		APlanetActor* GetCurrentPlanet() const;

	/** If Custom Pawn is sprinting or not. */
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		virtual bool IsSprinting() const;


	/**
	* Get the falling velocity.
	* Capsule component velocity  projected on -CurrentGravityDirection.
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		FVector GetFallingVelocity() const;

	/**
	* Get movement velocity.
	* custom movement component velocity  projected on horizontal plane (plane normal = Capsule up vector).
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		FVector GetMovementVelocity() const;

	/**
	* Get current falling speed.
	* Equal Falling Velocity's length multiplied by direction (float)
	* if direction > 0 => jumping
	* if direction < 0 => falling
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		float GetFallingSpeed() const;

	/**
	* Get current falling speed.
	* Equal movement velocity's length
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		float GetCurrentWalkSpeed() const;

	/**
	* Get how much time the pawn is falling (in seconds)
	* when moving on ground , it is set to 0;
	*/
	UFUNCTION(BlueprintCallable, Category = "Pawn|Components|CustomMovementComponent")
		float GetInAirTime() const;

protected:

	/**The Updated component*/
	UCapsuleComponent* CapsuleComponent;

	/** Custom movement component owner */
	class ACustomPawn* PawnOwner;

private:

	FGravityInfo CurrentGravityInfo;

	FOrientationInfo CurrentOrientationInfo;

	bool bDebugIsEnabled;

	bool bIsInAir;

	FRotator CurrentCapsuleRotation;

	float TimeInAir;

	bool bCanResetGravity;

	float CurrentTraceShapeScale;

	float LastWalkSpeed;

	bool bIsSprinting;

	bool bIsJumping;

	bool bRequestImmediateUpdate;

};
