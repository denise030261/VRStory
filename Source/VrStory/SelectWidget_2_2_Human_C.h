// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_2_2_Human_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_2_2_Human_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Jump_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Hi_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sit_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_human_jump();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_human_hi();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_human_sit();
};
