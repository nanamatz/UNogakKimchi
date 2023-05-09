// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuHUD.h"
#include "SLoginWidget.h"
#include "Widgets/SWeakWidget.h"
#include "Engine/Engine.h"
#include <Runtime/Engine/Classes/GameFramework/PlayerController.h>

void AMenuHUD::BeginPlay()
{
	Super::BeginPlay();

	ShowMenu();
}

void AMenuHUD::ShowMenu()
{
	/* Viewport¿¡ Widget Ãß°¡ */
	if (GEngine && GEngine->GameViewport) {
		LoginWidget = SNew(SLoginWidget).OwningHUD(this);
		GEngine->GameViewport->AddViewportWidgetContent(SAssignNew(LoginWidgetContainer, SWeakWidget).PossiblyNullContent(LoginWidget.ToSharedRef()));
		if (PlayerOwner) {
			PlayerOwner->bShowMouseCursor = true;
			PlayerOwner->SetInputMode(FInputModeUIOnly());
		}
	}
}

void AMenuHUD::RemoveMenu()
{
	if (GEngine && GEngine->GameViewport && LoginWidgetContainer.IsValid()) {
		GEngine->GameViewport->RemoveViewportWidgetContent(LoginWidgetContainer.ToSharedRef());

		if (PlayerOwner) {
			PlayerOwner->bShowMouseCursor = false;
			PlayerOwner->SetInputMode(FInputModeGameOnly());
		}
	}
}
