// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseWeapon.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"


// Sets default values
ABaseWeapon::ABaseWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	m_baseSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("BaseSceneComp"));
	RootComponent = m_baseSceneComp;

	m_baseMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMeshComp"));
	m_baseMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	m_baseMeshComp->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void ABaseWeapon::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ABaseWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}





