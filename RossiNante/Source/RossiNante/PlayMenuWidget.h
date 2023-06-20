// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Components/TextBlock.h"
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
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_Up = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UButton* BT_Down = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* TB_Floor = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* TB_LevelValue = nullptr;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
		UTextBlock* TB_ExpValue = nullptr;

	UFUNCTION()
		void OnPlayButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수
	UFUNCTION()
		void OnUpButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수
	UFUNCTION()
		void OnDownButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수

private:
	AMyGameModeBase* GameMode;
	int floor;
};
