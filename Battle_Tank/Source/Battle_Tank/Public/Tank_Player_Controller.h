// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/PlayerController.h"
#include "Tank_Player_Controller.generated.h"

/**
 * 
 */

UCLASS()
class BATTLE_TANK_API ATank_Player_Controller : public APlayerController
{
	GENERATED_BODY()

public:
	
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;
	
	virtual void Tick( float DeltaTime ) override;

	// Start the tank moving the barrel sp that a shot would hit where
	// the crosshair intersects in the world 
	
	void AimTowardsCrossHair();
	

};
