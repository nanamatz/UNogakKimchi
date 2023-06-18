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

    strcpy(login_data.data1, InputID);
    strcpy(login_data.data2, InputPW);

    login_data.packet_type = (int)EPacketType::C2S_LOGIN;

    if (GameMode->SendLoginData(&login_data) == false) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send data! (Maybe connection has failed, but current version is a test version. So Go to Default Level)\n"));
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
        //GameMode->ChangeLevel(GetWorld(), "Default");
        //GameMode->EnableHUDWidget();
    }
    /*
    if (send(Socket, (char*)&login_packet, sizeof(UserDataPacket), 0) == -1) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! send Socket(Maybe connection has failed, but current version is a test version. So Go to Default Level)\n"));
        UGameplayStatics::OpenLevel(GetWorld(), FName("Default"), TRAVEL_Absolute);
    }
    */

    UserDataPacket ud;

    if (GameMode->RecvLoginData(&ud) == false) {
        UE_LOG(LogTemp, Warning, TEXT("ERR! recv data!\n"));
    }

    //GameMode->SetUserData(ud.user_id);

    /*
    if (recv(Socket, (char*)&ud, sizeof(UserDataPacket), 0) == -1) {
        for (int i = 0; i < 3; i++) {
            if (recv(Socket, (char*)&ud, sizeof(UserDataPacket), 0) != -1) {
                break;
            }

        }
    }*/

    if (ud.packet_type == (int)EPacketType::S2C_LOGIN_SUCCESS) {
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
        //GameMode->ChangeLevel(GetWorld(), "Default");
        //UGameplayStatics::OpenLevel(GetWorld(), FName("Default"), TRAVEL_Absolute);
    }
    else if (ud.packet_type == (int)EPacketType::S2C_LOGIN_FAIL) {
        UE_LOG(LogTemp, Warning, TEXT("ID or PW error! However you can join the game in test mode."));
        GameMode->LoginWidget->RemoveFromViewport();
        GameMode->EnableMenuWidget();
        //GameMode->ChangeLevel(GetWorld(), "Default");
        //UGameplayStatics::OpenLevel(GetWorld(), FName("Default"), TRAVEL_Absolute);
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