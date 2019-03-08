// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseZombie.generated.h"

UCLASS()
class AWWA_API ABaseZombie : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseZombie();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ZombieType")
	int32 m_ZombieType;
	// It Use Zombie Stat Define???? -> Not Use
	// use Editor Variable
	*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "ZombieType")
	int32 m_MeshBuild;
	// It Use Zombie's Sketal Mesh Define?

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	int32 m_State;
	// Zombie's HP

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")	
	int32 m_hp;
	// Zombie's HP

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float m_walkSpeed;
	// Zombie's Walk Speed

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	float m_runSpeed;
	// Zombie's Run Speed

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Stat")
	int32 m_damage;
	// Zombie's Damage

	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AnimType")
	uint8 m_walkType;
	// Zombie's walk anim type

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AnimType")
	uint8 m_runType;
	// Zombie's run anim type
	*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AnimType")
	uint8 m_attackType;
	// Zombie's attack anim type

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "PhysAnim")
	FName m_hitBoneName;
	// It Use Zombie Stat Define???? -> Not Use
};
