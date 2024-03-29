// Fill out your copyright notice in the Description page of Project Settings.

#include "Tank_AI_Controller.h"
#include "Engine/World.h"




void ATank_AI_Controller::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerTank = GetPlayerTank();
	if (!PlayerTank)
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController can't find player tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController found player tank %s"), *(PlayerTank->GetName()));
	}
}



ATank* ATank_AI_Controller::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

ATank* ATank_AI_Controller::GetPlayerTank() const
{
	auto PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerPawn) { return nullptr;  }
	return Cast<ATank>(PlayerPawn);
}
