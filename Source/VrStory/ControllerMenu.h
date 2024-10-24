// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Http.h"
#include "ControllerMenu.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UControllerMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* RestartButton;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* ExitButton;

	UPROPERTY(meta = (BindWidget))
	class UButton* UploadButton;

	UFUNCTION(BlueprintCallable, Category = "test server")
	void Upload();

	void RequestPostSentence();
	void OnGetSentenceResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);///다운결과 바인드면 아마 게임 인스턴스에 옮길듯?
};
