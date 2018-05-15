// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class AWWA_API ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Type")
	int32 m_weaponType;
	// 1은 라이플, 2는 권총, 3은 근접무기, 4는 투척무기

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_damage;

	//UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	//uint32 m_ammoCount;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_accuracy;

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_weight;
};
