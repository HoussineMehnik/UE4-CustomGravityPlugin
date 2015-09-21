// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

// 2015 , Mhousse1247 (mhousse.tutorials@gmail.com) .

#pragma once

#include "FirstPersonCharacter.generated.h"


UCLASS()
class  CUSTOMGRAVITYPLUGIN_API AFirstPersonCharacter : public ACustomPawn
{
	GENERATED_BODY()


public:


	/**
	* Default UObject constructor.
	*/
	AFirstPersonCharacter(const FObjectInitializer& ObjectInitializer);

	virtual void UpdateMeshRotation(float DeltaTime) override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent);
#endif // WITH_EDITOR

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Gun Socket")
		FName GunSocketName;

private:

	/** Gun Skeletal mesh associated with this Pawn . */
	UPROPERTY(Category = "Base Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USkeletalMeshComponent* GunMesh;

	/** Shooter ( Holds Shoot Transform information . */
	UPROPERTY(Category = "Base Pawn", VisibleDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		USceneComponent* Shooter;

public:

	/** Returns GunMesh subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetGunMesh() const { return GunMesh; }


};
