// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "AWWAHUD.generated.h"

/**
 * 
 */
UCLASS()
class AWWA_API AAWWAHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	AAWWAHUD();

	virtual void DrawHUD() override;

	void DrawAWWADemoUI();

private:

	/** DemoUI Pointer **/
	class UTexture2D* AWWADemoUITex;
	//const FVector2D AWWADemoUICenter;
	//const FVector2D AWWADemoUIPosition;

	class UTexture2D* AWWADemoUI2Tex;
	//const FVector2D AWWADemoUI2Center;
	//const FVector2D AWWADemoUI2Position;
};
