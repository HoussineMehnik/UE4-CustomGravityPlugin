// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#include "Pawns/PhysicsBallPawn.h"
#include <GameFramework/SpringArmComponent.h>
#include <Components/SceneComponent.h>
#include "Components/CustomGravityComponent.h"
#include <Components/StaticMeshComponent.h>
#include <Engine/CollisionProfile.h>
#include <Camera/CameraComponent.h>




APhysicsBallPawn::APhysicsBallPawn()
{
	// Create mesh component for the ball
	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Ball0"));
	Ball->BodyInstance.SetCollisionProfileName(UCollisionProfile::PhysicsActor_ProfileName);
	Ball->SetSimulatePhysics(true);
	Ball->SetAngularDamping(0.1f);
	Ball->SetLinearDamping(0.1f);
	Ball->BodyInstance.MassScale = 3.5f;
	Ball->BodyInstance.MaxAngularVelocity = 800.0f;
	Ball->SetNotifyRigidBodyCollision(true);
	RootComponent = Ball;

	// Create a Spring Root Component attached to the root (ball)
	SpringRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SpringRoot0"));
	SpringRoot->SetupAttachment(RootComponent);
	SpringRoot->SetAbsolute(false, true, true);

	// Create a camera boom attached to the Spring Root Component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm0"));
	SpringArm->SetupAttachment(SpringRoot);
	SpringArm->bDoCollisionTest = false;
	SpringArm->TargetArmLength = 1200.f;
	SpringArm->bEnableCameraLag = false;
	SpringArm->CameraLagSpeed = 3.f;
	SpringArm->SetRelativeRotation(FRotator(-45.f, 0.f, 0.f));
	SpringArm->bInheritPitch = true;
	SpringArm->bInheritRoll = true;
	SpringArm->bInheritYaw = true;


	// Create a camera and attach to boom
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera0"));
	Camera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false; // We don't want the controller rotating the camera

	// Create a Custom gravity Component
	GravityComponent = CreateDefaultSubobject<UCustomGravityComponent>(TEXT("GravityComponent0"));
	GravityComponent->SetUpdatedComponent(Ball);



	//Initialization

	JumpImpulse = 350000.0f;
	RollTorque = 50000000.0;
	CameraPitchMin = -75.0f;
	CameraPitchMax = 75.0f;
	bCanJump = true; // Start being able to jump


}



// Called every frame
void APhysicsBallPawn::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (GravityComponent == NULL)
	{
		return;
	}

	

	/* Update SpringRoot Rotation*/

	const FVector UpDirection = -GravityComponent->GetCurrentGravityDirection();
	const FVector SpringRootUp = SpringRoot->GetUpVector();
	const FQuat DeltaQuat = FQuat::FindBetween(SpringRootUp, UpDirection);
	const FQuat TargetQuat = DeltaQuat * SpringRoot->GetComponentQuat();
	const FRotator Rotation =  TargetQuat.Rotator() ;

	SpringRoot->SetWorldRotation(Rotation);
}


void APhysicsBallPawn::AddCameraPitchInput(float UpdateRate /*= 1.0f*/, float ScaleValue /*= 0.0f*/)
{
	if (SpringArm != NULL)
	{
		FRotator CameraRelativeRot = SpringArm->GetRelativeRotation();

		float CameraNewPitch = FMath::ClampAngle(CameraRelativeRot.Pitch + ScaleValue * UpdateRate, CameraPitchMin, CameraPitchMax);

		CameraRelativeRot.Pitch = CameraNewPitch;

		SpringArm->SetRelativeRotation(CameraRelativeRot);
	}
}


void APhysicsBallPawn::AddCameraYawInput(float UpdateRate /*= 1.0f*/, float ScaleValue /*= 0.0f*/)
{
	if (SpringArm != NULL)
	{
		SpringArm->AddRelativeRotation(FRotator(0.0f, ScaleValue * UpdateRate, 0.0f));
	}
}


void APhysicsBallPawn::NotifyHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	bCanJump = true;
}


float APhysicsBallPawn::GetBallMass() const
{
	return Ball->BodyInstance.GetBodyMass();
}

void APhysicsBallPawn::AddRightTorque(float ScaleValue)
{
	const FVector SpringRootUp = SpringRoot->GetUpVector();
	const FVector CameraRight = Camera->GetForwardVector();
	const FVector RightDirection = FVector::VectorPlaneProject(CameraRight, SpringRootUp);
	const FVector Torque = RightDirection * ScaleValue * RollTorque * -1.f;

	Ball->AddTorqueInRadians(Torque);
}


void APhysicsBallPawn::AddForwardTorque(float ScaleValue)
{
	const FVector SpringRootUp = SpringRoot->GetUpVector();
	const FVector CameraForward = Camera->GetRightVector();
	const FVector ForwardDirection = FVector::VectorPlaneProject(CameraForward, SpringRootUp);
	const FVector Torque = ForwardDirection *  ScaleValue * RollTorque;

	Ball->AddTorqueInRadians(Torque);
}


void APhysicsBallPawn::Jump()
{
	if (bCanJump)
	{
		const FVector UpVector = SpringRoot->GetUpVector();
		const FVector Impulse = UpVector *  JumpImpulse;
		Ball->AddImpulse(Impulse);
		bCanJump = false;
	}
}