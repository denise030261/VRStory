// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_4_2_Human_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_4_2_Human_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* ToMan_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* ToWoman_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* WithMan_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* WithWoman_button;
	
	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_toman();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_towoman();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_withman();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_Select_4_2_withwoman();
};
