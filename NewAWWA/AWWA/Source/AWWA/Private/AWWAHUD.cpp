// Fill out your copyright notice in the Description page of Project Settings.

#include "AWWAHUD.h"

#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

AAWWAHUD::AAWWAHUD() 
	//: AWWADemoUIPosition(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f)
	//, AWWADemoUICenter(20.0f, 20.0f)
	//, AWWADemoUI2Position(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f)
	//, AWWADemoUI2Center(20.0f, 20.0f)
	
{
	static ConstructorHelpers::FObjectFinder<UTexture2D> AWWADemoUITexObj(TEXT("/Game/UI/DevUI/HM_AWWADemoUI_001"));
	static ConstructorHelpers::FObjectFinder<UTexture2D> AWWADemoUI2TexObj(TEXT("/Game/UI/DevUI/HM_AWWADemoUI_002"));

	AWWADemoUITex = AWWADemoUITexObj.Object;
	AWWADemoUI2Tex = AWWADemoUI2TexObj.Object;

}

void AAWWAHUD::DrawHUD() 
{
	Super::DrawHUD();

	AAWWAHUD::DrawAWWADemoUI();
}

void AAWWAHUD::DrawAWWADemoUI() 
{
	const FVector2D AWWADemoUICenter(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
	const FVector2D AWWADemoUIPosition((20.0f), (20.0f));

	FCanvasTileItem TileItem(AWWADemoUIPosition, AWWADemoUITex->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem);

	const FVector2D AWWADemoUI2Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);
	const FVector2D AWWADemoUI2Position((900.0f), (570.0f));

	FCanvasTileItem TileItem2(AWWADemoUI2Position, AWWADemoUI2Tex->Resource, FLinearColor::White);
	TileItem2.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem(TileItem2);

}


