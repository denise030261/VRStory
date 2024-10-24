// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SelectWidget_2_2_Animal_C.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API USelectWidget_2_2_Animal_C : public UUserWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeConstruct() override;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* Run_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Jump_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sit_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Rest_button;

	UPROPERTY(meta = (BindWidget))
	class UButton* Dead_button;

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_Animal_Run();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_Animal_Jump();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_Animal_Sit();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_Animal_Rest();

	UFUNCTION(BlueprintCallable, Category = "SpawnPawn")
	void Spawn_Animal_Dead();
};
