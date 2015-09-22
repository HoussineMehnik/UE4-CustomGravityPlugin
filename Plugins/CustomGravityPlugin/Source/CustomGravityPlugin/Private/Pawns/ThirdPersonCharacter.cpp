// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .


#include "CustomGravityPluginPrivatePCH.h"

AThirdPersonCharacter::AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

	GetSpringArm()->TargetArmLength = 600.0f;

	GetMesh()->RelativeLocation = FVector(0.0f, 0.0f, -96.0f);
	GetMesh()->RelativeRotation = FRotator(0.0f, -90.0f, 0.0f);

	MeshOrientation = EMeshOrientation::EMO_Movement;
	bRotateMeshOnlyWhenMoving = true;
	MinVelocityToRotateMesh = 2.0f;
	bInstantRotation = true;
	RotationInterpSpeed = 5.0f;
}

// Called when the game starts or when spawned
void AThirdPersonCharacter::BeginPlay()
{
	Super::BeginPlay();

	MeshStartRotation = GetMesh()->RelativeRotation;
}


void AThirdPersonCharacter::UpdateMeshRotation(float DeltaTime)
{
	const float Speed = GetMovementComponent() != NULL ? GetMovementComponent()->Velocity.Size() : 0.0f;

	if (bRotateMeshOnlyWhenMoving && Speed < MinVelocityToRotateMesh)
	{
		return;
	}

	FRotator MeshRotation = GetMesh()->RelativeRotation;
	const FVector ProjectedVelocity = FVector::VectorPlaneProject(GetMovementComponent()->Velocity, GetActorUpVector());
	const FRotator Rot = FRotationMatrix::MakeFromXZ(GetTransform().InverseTransformVector(ProjectedVelocity), GetActorUpVector()).Rotator();

	MeshRotation.Yaw = MeshOrientation == EMeshOrientation::EMO_Movement ?
		MeshStartRotation.Yaw + Rot.Yaw :
		MeshStartRotation.Yaw + GetSpringArm()->RelativeRotation.Yaw;

	GetMesh()->RelativeRotation = bInstantRotation ? MeshRotation : FMath::RInterpTo(GetMesh()->RelativeRotation, MeshRotation, DeltaTime, RotationInterpSpeed);

}
