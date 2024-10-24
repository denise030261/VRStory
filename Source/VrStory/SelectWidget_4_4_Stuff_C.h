// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_4_4_Stuff_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_4_4_Stuff_C : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* Give_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_human_human_stuff_give();
};
