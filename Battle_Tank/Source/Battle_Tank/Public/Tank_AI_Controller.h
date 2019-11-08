// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Tank.h"
#include "AIController.h"
#include "Tank_AI_Controller.generated.h"



/**
 * 
 */
UCLASS()
class BATTLE_TANK_API ATank_AI_Controller : public AAIController
{
	GENERATED_BODY()

public:


	virtual void BeginPlay() override;

private:
	ATank* GetControlledTank() const;

	ATank* GetPlayerTank() const;
};
