// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSExtractionPoint.h"
#include "FPSCharacter.h"
#include "FPSGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Components/DecalComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AFPSExtractionPoint::AFPSExtractionPoint()
{
	/*Creating an instance of the component
	* Use OverLapComp to govern collision detection
	* then setting the size and setting up the Decal comp as the root component
	*/
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(TEXT("OverLapComp"));
	OverlapComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	OverlapComp->SetCollisionResponseToAllChannels(ECR_Ignore);
	OverlapComp->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	OverlapComp->SetBoxExtent(FVector(200.0f));
	RootComponent = OverlapComp;

	OverlapComp->SetHiddenInGame(false);
	
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &AFPSExtractionPoint::HandleOverlap);

	DecalComp = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalComp"));
	DecalComp->DecalSize = FVector(200.0f, 200.0f, 200.0f);
	DecalComp->SetupAttachment(RootComponent);
}

/*this function handles the overlapping of the actor for the extraction zone
* it also calls the OnCompleteMission() function if the player has the objective
* else if the is missing the objective it will play a 2D soind
*/
void AFPSExtractionPoint::HandleOverlap(UPrimitiveComponent* OverlappedComponent, AActor * OtherActor, UPrimitiveComponent * OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{	

	AFPSCharacter* MyPawn = Cast<AFPSCharacter>(OtherActor);
	if (MyPawn != nullptr)
	{
		return;
	}
	
		if (MyPawn->bIsCarryingObjective)
		{

			AFPSGameMode* GM = Cast<AFPSGameMode>(GetWorld()->GetAuthGameMode());
			if (GM)
			{
				GM->CompleteMission(MyPawn, true);
			}
		}
		else
		{
			UGameplayStatics::PlaySound2D(this, ObjectiveMissingSound);
		}

		//UE_LOG(logTemp, Log, TEXT("Overlapped wih extraction point!"));

	
}


