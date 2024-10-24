// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "WordNumChoice_Widget.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UWordNumChoice_Widget : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* TwoWords;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* ThreeWords;

	UPROPERTY(meta = (BindWidget))
	class UButton* FourWords;

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_TwoWords();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_ThreeWords();

	UFUNCTION(BlueprintCallable, Category = "SpawnUI")
	void Create_FourWords();
};
