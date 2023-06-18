// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "MyGameModeBase.h"
#include "PlayMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UPlayMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_Play = nullptr;

	UFUNCTION()
		void OnPlayButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수

private:
	AMyGameModeBase* GameMode;
};
