// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#include "CustomGravityPluginPrivatePCH.h"

AThirdPersonBall::AThirdPersonBall(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	Ball = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh0"));
	Ball->AttachTo(RootComponent);
	Ball->SetCollisionProfileName(TEXT("NoCollision"));

	const float Radius = 50.0f;
	GetCapsuleComponent()->SetCapsuleSize(Radius, Radius);
	GetCapsuleComponent()->GetBodyInstance()->COMNudge = FVector(0.0f, 0.0f, -Radius);

	// Initialization
	Ball->bAbsoluteRotation = true;
	CurrentAngle = 0.f;
	BallRotationRate = 0.5f;
	MinVelocityToRotateBall = 10.0f;
	RotationInterpSpeed = 5.0f;

	// Destroy Custom Pawn Default Skeletal Mesh component
	// We are using a simple static mesh component to visualize the ball
	// Maybe we should use "ObjectInitializer.DoNotCreateDefaultSubobject" instead of "DestroyComponent"
	GetMesh()->DestroyComponent();

}

void AThirdPersonBall::UpdateMeshRotation(float DeltaTime)
{

	const float Speed = GetMovementComponent() ? GetMovementComponent()->GetCurrentWalkSpeed() : 0.0f;
	const FVector RollVelocity = GetMovementComponent() ? GetMovementComponent()->GetMovementVelocity() : FVector::ZeroVector;

	if (Speed > MinVelocityToRotateBall)
	{
		CurrentAngle += (Speed / (PI * BallRotationRate)) * DeltaTime;
		FVector RightVector = FRotationMatrix::MakeFromXZ(RollVelocity,GetActorUpVector()).GetUnitAxis(EAxis::Y);
		MeshTargetRotation = FQuat(RightVector, FMath::DegreesToRadians(CurrentAngle)).Rotator();
	}

	MeshCurrentRotation = FMath::RInterpTo(MeshCurrentRotation, MeshTargetRotation, DeltaTime, RotationInterpSpeed);
	Ball->SetWorldRotation(MeshTargetRotation);
}
