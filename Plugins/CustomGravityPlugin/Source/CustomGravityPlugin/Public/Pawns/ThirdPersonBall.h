// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//


#pragma once
#include "Pawns/CustomPawn.h"
#include "ThirdPersonBall.generated.h"


UCLASS()
class  CUSTOMGRAVITYPLUGIN_API AThirdPersonBall : public ACustomPawn
{
	GENERATED_BODY()


public:

	/**
	* Default UObject constructor.
	*/
	AThirdPersonBall(const FObjectInitializer& ObjectInitializer);

	virtual void UpdateMeshRotation(float DeltaTime) override;

	/** Change in ball rotation per second (Between 0 & 1).
	* Depends on custom pawn movement speed.
	* 0.0f : No Rotation.
	* 1.0f : Full Speed Rotation.
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float BallRotationRate;

	/**
	* How Smoothly go from Current Rotation to Desired Rotation
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings", meta = (ClampMin = "0.0", ClampMax = "1.0", UIMin = "0.0", UIMax = "1.0"))
		float RotationInterpSpeed;

	/**Minimum Movement speed needed to rotate the ball*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings", meta = (ClampMin = "0.0", UIMin = "0.0"))
		float MinVelocityToRotateBall;
	

protected:

	/** StaticMesh used for the ball */
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = Ball, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* Ball;

	/**Runtime updated values. */
	float CurrentAngle;
	FRotator MeshCurrentRotation;
	FRotator MeshTargetRotation;
};