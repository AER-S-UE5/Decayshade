// Fill out your copyright notice in the Description page of Project Settings.


#include "DecayshadeCharacter.h"

// Sets default values
ADecayshadeCharacter::ADecayshadeCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADecayshadeCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADecayshadeCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADecayshadeCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

