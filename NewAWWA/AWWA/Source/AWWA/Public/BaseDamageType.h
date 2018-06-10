// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/DamageType.h"
#include "BaseDamageType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EDamageTypeName : uint8
{
	DAMAGE_TYPE_BULLET		UMETA(DisplayName="BULLET"),
	DAMAGE_TYPE_MELEE		UMETA(DisplayName = "MELEE"),
	DAMAGE_TYPE_SHORTATTACK	UMETA(DisplayName = "SHORTATTACK"),
	DAMAGE_TYPE_GENERADE	UMETA(DisplayName = "GENERADE"),
	DAMAGE_TYPE_FIRE	UMETA(DisplayName = "FIRE")
};

UCLASS()
class AWWA_API UBaseDamageType : public UDamageType
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = EnumType)
	EDamageTypeName m_ThisDamageType;

};
