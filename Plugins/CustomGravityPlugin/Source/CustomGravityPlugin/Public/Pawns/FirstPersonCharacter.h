// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#pragma once

#include "Pawns/CustomPawn.h"
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
