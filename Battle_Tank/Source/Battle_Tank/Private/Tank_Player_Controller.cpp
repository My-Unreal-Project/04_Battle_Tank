// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_Player_Controller.h"


void ATank_Player_Controller::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("Player_Controller no possessing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Player_Controller possessing %s"), *(ControlledTank->GetName()));
	}
}

void ATank_Player_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AimTowardsCrossHair();
	UE_LOG(LogTemp, Warning, TEXT("Player is ticking"));
}

ATank*  ATank_Player_Controller::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATank_Player_Controller::AimTowardsCrossHair()
{
	if (!GetControlledTank()) { return; }
	// Get world location if line trace through crosshair
	// If it hits the landscape
	 // Tell controlled tank to aim at this point 
}
