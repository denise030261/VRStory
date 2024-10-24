// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_3_3_Otheranimal_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_3_3_Otheranimal_C : public UUserWidget
{
	GENERATED_BODY()
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Fight_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_animal_animal_fight();
};
