// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "MenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class ROSSINANTE_API UMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

protected:
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
			UButton* BT_PlayMenu = nullptr;
		UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
			UButton* BT_StatMenu = nullptr;

		UFUNCTION()
			void OnPlayMenuButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수
		UFUNCTION()
			void OnStatMenuButtonClicked(); // BT_SignIn 버튼 클릭 이벤트 핸들러 함수

private:
	class AMyGameModeBase* GameMode;
};
