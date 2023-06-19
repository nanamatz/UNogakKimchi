// Fill out your copyright notice in the Description page of Project Settings.


#include "LoginWidget.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameModeBase.h"
#include <string>

void ULoginWidget::OnSignInButtonClicked()
{
    char* InputID = TCHAR_TO_UTF8(*ID->GetText().ToString());

    char* InputPW = TCHAR_TO_UTF8(*PW->GetText().ToString());

    // 로그인 실행
    UserDataPacket login_data;


    if (strlen((InputID)) > 20) {
        UE_LOG(LogTemp, Warning, TEXT("ID LENGTH IS TOO LONG!"));
        return;
    }
    if (strlen(InputPW) > 20) {
        UE_LOG(LogTemp, Warning, TEXT("PW LENGTH IS TOO LONG!"));
        return;
    }

    login_data.user_id = 0;

    strcpy_s(login_data.data1, InputID);
    strcpy_s(login_data.data2, InputPW);

    login_data.packet_type = (int)EPacketType::C2S_LOGIN;

    if (GameMode->C2S_SendData(&login_data) == false) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send data! (Maybe connection has failed, but current version is a test version. So Go to Default Level)\n"));
        GameMode->SetIsLogin();
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
        
    }

    UserDataPacket ud;

    if (GameMode->S2C_RecvData(&ud) == false) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! recv data!\n"));
    }

    UE_LOG(LogTemp, Warning, TEXT("level:%d, exp:%d, statpoint:%d\n"), ud.level, ud.exp, ud.statpoint);
    GameMode->UpdatePlayerInfo(&ud);

    if (ud.packet_type == (int)EPacketType::S2C_LOGIN_SUCCESS) {
        GameMode->SetIsLogin();
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
    }
    else if (ud.packet_type == (int)EPacketType::S2C_LOGIN_FAIL) {
        UE_LOG(LogTemp, Warning, TEXT("ID or PW error! However you can join the game in test mode."));
        GameMode->SetIsLogin();
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
    }
    else {
        UE_LOG(LogTemp, Warning, TEXT("recevied packet type error"));
    }
}

void ULoginWidget::OnSignUpButtonClicked()
{

}

void ULoginWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UWorld* World = GetWorld();

    if (World)
    {
        GameMode = Cast<AMyGameModeBase>(World->GetAuthGameMode());
        if (GameMode)
        {
            Socket = GameMode->Socket;
        }
    }    

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_SignIn)
    {
        BT_SignIn->OnClicked.AddDynamic(this, &ULoginWidget::OnSignInButtonClicked);
    }
    if (BT_SignUp)
    {
        BT_SignUp->OnClicked.AddDynamic(this, &ULoginWidget::OnSignUpButtonClicked);
    }
}