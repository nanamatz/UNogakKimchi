// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMenuWidget.h"

void UPlayMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
    }

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_Play)
    {
        BT_Play->OnClicked.AddDynamic(this, &UPlayMenuWidget::OnPlayButtonClicked);
    }

}

void UPlayMenuWidget::OnPlayButtonClicked()
{
   GameMode->ChangeLevel(GetWorld(), "1F_Hall");
}
