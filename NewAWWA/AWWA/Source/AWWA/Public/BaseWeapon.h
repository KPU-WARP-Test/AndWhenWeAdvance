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
	// Now, Not Use!,,, why?

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UseBlueprint")
	int32 m_state;
	// Weapon State!

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "UseBlueprint")
	int32 m_tickCount;
	// tick tok! tick tok!

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ConfineConst")
	int32 FIRE_ANIM_TIME;
	// like Define or const, But only int32 to FIRE_ANIM_TIME, please Default!

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "ConfineConst")
	int32 RELOAD_ANIM_TIME;
	// like Define or const, But only int32 to FIRE_ANIM_TIME, please Default!

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	int32 m_damage;
	// Init in constructor! from Database! and adjust Skill!

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	float m_accuracy;
	// Init in Constructor! from Database! 

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	int32 m_fireRate;
	// Init in Constructor! from Database! to reduce Speed

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	int32 m_weight;
	// Init in Constructor! from Database! to reduce Speed

	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, Category = "Stat")
	int32 m_fullReloadAmmoCount;
	// Init in Constructor! from Database! and adjust Skill!

};
