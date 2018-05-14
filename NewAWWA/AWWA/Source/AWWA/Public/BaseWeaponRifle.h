// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeaponRifle.generated.h"

UCLASS()
class AWWA_API ABaseWeaponRifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeaponRifle();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Type")
	int32 m_weaponType;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_damage;

	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	//uint32 m_ammoCount;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_accuracy;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_weight;
};
