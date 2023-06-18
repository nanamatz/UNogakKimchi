// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuWidget.h"
#include "MyGameModeBase.h"

void UMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
    }
    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_PlayMenu)
    {
        BT_PlayMenu->OnClicked.AddDynamic(this, &UMenuWidget::OnPlayMenuButtonClicked);
    } 

    if (BT_StatMenu)
    {
        BT_StatMenu->OnClicked.AddDynamic(this, &UMenuWidget::OnStatMenuButtonClicked);
    }
}

void UMenuWidget::OnPlayMenuButtonClicked()
{
    GameMode->DisableStatMenuWidget();
    GameMode->EnablePlayMenuWidget();
}

void UMenuWidget::OnStatMenuButtonClicked()
{
    GameMode->DisablePlayMenuWidget();
    GameMode->EnableStatMenuWidget();
}
