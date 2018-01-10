// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPSGameMode.generated.h"

UCLASS()
class AFPSGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:

	/*Creating an instance of the spectator class in the editor*/
	UPROPERTY(EditDefaultsOnly, Category = "Spectating")
	TSubclassOf<AActor> SpectatingViewpointClass;

public:

	AFPSGameMode();

	/*Function for when the game mission is completed
	* i.e. when the player reaches the extraction
	*/
	void CompleteMission(APawn* InstigatorPawn, bool bMissionSuccess);

	/*Exposing our pawn character to blueprint
	*@param takes in the FPSCharacter
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "GameMode")
	void OnMissionCompleted(APawn* InstigatorPawn, bool bMissionSuccess);
};



