// Fill out your copyright notice in the Description page of Project Settings.


#include "StatMenuWidget.h"

void UStatMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
    }

    TB_LevelValue->SetText(FText::FromString(FString::FromInt(GameMode->GetPlayerLevel())));
    TB_ExpValue->SetText(FText::FromString(FString::FromInt(GameMode->GetPlayerExp())));
    TB_StatpointValue->SetText(FText::FromString(FString::FromInt(GameMode->GetPlayerStatpoint())));

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_Upgrade1)
    {
        BT_Upgrade1->OnClicked.AddDynamic(this, &UStatMenuWidget::OnUpgrade1ButtonClicked);
    }
}

void UStatMenuWidget::OnUpgrade1ButtonClicked()
{
    UserDataPacket* ud = GameMode->GetPlayerInfo();

    if (!GameMode->C2S_SendData(ud, EPacketType::C2S_UPGRADE1)) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send data!\n"));
    }

    if (!GameMode->S2C_RecvData(ud)) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! recv data!\n"));
    }

    if (ud->packet_type == (int)EPacketType::S2C_UPGRADE_SUCCESS) {
        UE_LOG(LogTemp, Warning, TEXT("Upgrade Success!\n"));
    }
    else if (ud->packet_type == (int)EPacketType::S2C_UPGRADE_FAIL) {
        UE_LOG(LogTemp, Warning, TEXT("Upgrade Fail!\n"));
    }

    TB_LevelValue->SetText(FText::FromString(FString::FromInt(ud->level)));
    TB_ExpValue->SetText(FText::FromString(FString::FromInt(ud->exp)));
    TB_StatpointValue->SetText(FText::FromString(FString::FromInt(ud->statpoint)));
}
