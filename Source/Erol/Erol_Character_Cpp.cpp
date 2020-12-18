// Fill out your copyright notice in the Description page of Project Settings.


#include "Erol_Character_Cpp.h"

// Sets default values
AErol_Character_Cpp::AErol_Character_Cpp()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AErol_Character_Cpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AErol_Character_Cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AErol_Character_Cpp::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

