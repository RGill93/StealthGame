// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSObjectiveActor.h"
#include "FPSCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"


// Sets default values
AFPSObjectiveActor::AFPSObjectiveActor()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Comp"));
	MeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = MeshComp;

	SphereComp = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere Comp"));
	SphereComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	SphereComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	SphereComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	SphereComp->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AFPSObjectiveActor::BeginPlay()
{
	Super::BeginPlay();
	
	PlayEffects();
}

void AFPSObjectiveActor::PlayEffects()
{
	UGameplayStatics::SpawnEmitterAtLocation(this, PickupFX, GetActorLocation());
}

void AFPSObjectiveActor::NotifyActorBeginOverlap(AActor * OtherActor)
{
	Super::NotifyActorBeginOverlap(OtherActor);

	/*Whenever we overlap the actor it plays effects*/
	PlayEffects();

	AFPSCharacter* MyCharacter = Cast<AFPSCharacter>(OtherActor);

	if (MyCharacter)
	{
		MyCharacter->bIsCarryingObjective = true;

		Destroy();
	}
}

