// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_4_1C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_4_1C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* Man_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Woman_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_man();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_woman();
};
