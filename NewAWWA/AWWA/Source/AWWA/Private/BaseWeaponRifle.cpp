// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeaponRifle.h"


// Sets default values
ABaseWeaponRifle::ABaseWeaponRifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ABaseWeaponRifle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseWeaponRifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

