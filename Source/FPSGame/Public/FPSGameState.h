// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FPSGameState.generated.h"

/**
 * 
 */
UCLASS()
class FPSGAME_API AFPSGameState : public AGameStateBase
{
	GENERATED_BODY()
	
public:

	/*if this function is called its sent to all clients*/
	UFUNCTION(NetMulticast, Reliable)
	void MulticastOnMissionComplete(APawn* InstitgatorPawn, bool bIsCarryingObjective);

};
