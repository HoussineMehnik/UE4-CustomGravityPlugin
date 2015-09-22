// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#include "CustomGravityPluginPrivatePCH.h"

AFirstPersonCharacter::AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	GetSpringArm()->SetRelativeLocation(FVector(0.0f, 0.0f, 64.0f));
	GetSpringArm()->TargetArmLength = 0.0f;
	GetSpringArm()->bDoCollisionTest = false;

	GetCamera()->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	GetMesh()->AttachTo(GetCamera());
	GetMesh()->SetRelativeLocation(FVector(-0.5f, -2.5f, -155.0f));

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GunMesh0"));
	GunSocketName = TEXT("GripPoint");
	GunMesh->AttachTo(GetMesh(), GunSocketName, EAttachLocation::SnapToTargetIncludingScale);

	Shooter = CreateDefaultSubobject<USceneComponent>(TEXT("Shooter0"));
	Shooter->AttachTo(GetCamera());
	Shooter->SetRelativeLocation(FVector(100.0f, 25.0f, 0.0f));

}


#if WITH_EDITOR
void AFirstPersonCharacter::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (GunMesh == NULL){ return; }

	GunMesh->AttachTo(GetMesh(), GunSocketName, EAttachLocation::SnapToTargetIncludingScale);
}
#endif // WITH_EDITOR



void AFirstPersonCharacter::UpdateMeshRotation(float DeltaTime)
{
	// No need to update fps mesh 
	// the mesh is attached to the camera
}

