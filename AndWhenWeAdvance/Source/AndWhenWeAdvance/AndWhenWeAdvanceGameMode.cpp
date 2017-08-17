// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AndWhenWeAdvanceGameMode.h"
#include "AndWhenWeAdvanceHUD.h"
#include "AndWhenWeAdvanceCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndWhenWeAdvanceGameMode::AAndWhenWeAdvanceGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAndWhenWeAdvanceHUD::StaticClass();
}
