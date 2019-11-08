// Fill out your copyright notice in the Description page of Project Settings.

#include "Old_Tank.h"

// Sets default values
AOld_Tank::AOld_Tank()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOld_Tank::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOld_Tank::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOld_Tank::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

