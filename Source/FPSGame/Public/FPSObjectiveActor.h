// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FPSObjectiveActor.generated.h"

class USphereComponent;

UCLASS()
class FPSGAME_API AFPSObjectiveActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFPSObjectiveActor();

protected:

	/*Instantiate the mesh components*/
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UStaticMeshComponent* MeshComp;

	/*Instantiate the Sphere components*/
	UPROPERTY(VisibleAnywhere, Category = "Components")
	USphereComponent* SphereComp;

	/*Instantiate the particle effect, its editable in blueprints under the category effects*/
	UPROPERTY(EditDefaultsOnly, Category = "Effects")
	UParticleSystem* PickupFX;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*A function that will create some effects*/
	void PlayEffects();

public:	

	/*Event when this actor overlaps another actor, for example walking into a trigger
	* for events when objects have a blocking collision, for example a player hitting a wall
	* @note Components on both this and the other Actor must have bGeneratedOverlapEvents set to true to generate overlaps.
	*/
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	
	
};
