// Copyright 2019 Elhoussine Mehnik (Mhousse1247). All Rights Reserved.
//******************* http://ue4resources.com/ *********************//

#pragma once


#include "Pawns/CustomPawn.h"
#include "ThirdPersonCharacter.generated.h"


UENUM(BlueprintType)
namespace EMeshOrientation
{
	enum  Type
	{
		EMO_Movement 	UMETA(DisplayName = "Movement Direction"),
		EMO_Camera	UMETA(DisplayName = "Camera Direction")
	};
}



UCLASS()
class  CUSTOMGRAVITYPLUGIN_API AThirdPersonCharacter : public ACustomPawn
{
	GENERATED_BODY()


	
public:


	/**
	* Default UObject constructor.
	*/
	AThirdPersonCharacter(const FObjectInitializer& ObjectInitializer);

	// APawn Interface
	virtual void BeginPlay() override;
	// End APawn interface

	virtual void UpdateMeshRotation(float DeltaTime) override;

	/**
	* Set Mesh Orientation.
	* rotate the Character toward the direction of :
	* -Movement Direction
	* -Camera Direction
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings")
		TEnumAsByte<EMeshOrientation::Type> MeshOrientation;

	/**
	* if true , rotate the mesh only when the custom pawn is moving .
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings")
		bool bRotateMeshOnlyWhenMoving;

	/**Minimum Movement speed needed to orient the mesh toward the desired direction*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = "0", UIMin = "0"), Category = "Custom Pawn : Mesh Rotation Settings", meta = (editcondition = "bRotateMeshOnlyWhenMoving"))
		float MinVelocityToRotateMesh;

	/** 
	* if true , instantly rotate the character mesh toward the desired rotation. 
	* if false , smoothly rotate the character mesh toward the desired rotation. 
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings", meta = (editcondition = "bRotateMeshOnlyWhenMoving"))
		bool bInstantRotation;

	/** Controls how smooth the rotation is done , editable if InstantRotation is false  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Custom Pawn : Mesh Rotation Settings", meta = (ClampMin = "0", UIMin = "0"), meta = (editcondition = "!bInstantRotation"))
		float RotationInterpSpeed;

protected:

	/**Character Mesh Initial Value. */
	FRotator MeshStartRotation;

};