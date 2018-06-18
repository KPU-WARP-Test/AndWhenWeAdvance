// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/UserDefinedEnum.h"
#include "Enums.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EGameUiIndex : uint8
{
	UI_INDEX_MAP		UMETA(DisplayName = "MAP"),
	UI_INDEX_QUEST		UMETA(DisplayName = "QUEST"),
	UI_INDEX_SKILL	UMETA(DisplayName = "SKILL"),
	UI_INDEX_INVENTORY	UMETA(DisplayName = "INVENTORY"),
};

UCLASS()
class AWWA_API UEnums : public UUserDefinedEnum
{
	GENERATED_BODY()
	
	
	
	
};
