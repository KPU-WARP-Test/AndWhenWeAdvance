// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "AWWAGameMode.h"
#include "AWWACharacter.h"
#include "UObject/ConstructorHelpers.h"

AAWWAGameMode::AAWWAGameMode()
{
	// set default pawn class to our Blueprinted character
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));	// Old!
	//static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/Player/Blueprint/MainCharacter.MainCharacter'")); // NEW! -> Error
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Character/Player/Blueprint/MainCharacter")); // NEW!
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
