// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayMenuWidget.h"

void UPlayMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    floor = 1;

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
    }

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_Play)
    {
        BT_Play->OnClicked.AddDynamic(this, &UPlayMenuWidget::OnPlayButtonClicked);
    }
    if (BT_Up)
    {
        BT_Up->OnClicked.AddDynamic(this, &UPlayMenuWidget::OnUpButtonClicked);
    }
    if (BT_Down)
    {
        BT_Down->OnClicked.AddDynamic(this, &UPlayMenuWidget::OnDownButtonClicked);
    }

    UserDataPacket* ud = GameMode->GetPlayerInfo();

    TB_LevelValue->SetText(FText::FromString(FString::FromInt(ud->level)));
    TB_ExpValue->SetText(FText::FromString(FString::FromInt(ud->exp)));
}

void UPlayMenuWidget::OnPlayButtonClicked()
{
    switch (floor) {
    case 1:
        GameMode->ChangeLevel(GetWorld(), "1F_Hall");
        break;
    case 2:
        GameMode->ChangeLevel(GetWorld(), "2F_Hall");
        break;
    }
}

void UPlayMenuWidget::OnUpButtonClicked()
{
    floor = 2;
    TB_Floor->SetText(FText::FromString(FString::FromInt(floor)));
}

void UPlayMenuWidget::OnDownButtonClicked()
{
    floor = 1;
    TB_Floor->SetText(FText::FromString(FString::FromInt(floor)));
}