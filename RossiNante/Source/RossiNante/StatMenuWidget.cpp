// Fill out your copyright notice in the Description page of Project Settings.


#include "StatMenuWidget.h"

void UStatMenuWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // BT_SignIn 버튼의 클릭 이벤트에 OnSignInButtonClicked 함수를 연결합니다.
    if (BT_Upgrade1)
    {
        BT_Upgrade1->OnClicked.AddDynamic(this, &UStatMenuWidget::OnUpgrade1ButtonClicked);
    }

}

void UStatMenuWidget::OnUpgrade1ButtonClicked()
{
}
