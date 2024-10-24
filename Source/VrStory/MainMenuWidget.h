// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Http.h"
#include "MainMenuWidget.generated.h"

/**
 * 
 */
UCLASS()
class VRSTORY_API UMainMenuWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	class UButton* BeforePage;
	
	UPROPERTY(meta = (BindWidget))
	class UButton* NextPage;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sentence_Button_1;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sentence_Button_2;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sentence_Button_3;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sentence_Button_4;

	UPROPERTY(meta = (BindWidget))
	class UButton* Sentence_Button_5;
	

	UPROPERTY(BlueprintReadWrite)
	TArray<int32> word_num;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> MapName;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> Subject;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> Verb;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> Object;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> Complement1;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString> Complement2;
	//int word_num_1,word_num_2,word_num_3,word_num_4,word_num_5; 
	//FString MapName_1,MapName_2,MapName_3,MapName_4,MapName_5;
	//FString Subject_1,Subject_2,Subject_3,Subject_4,Subject_5;
	//FString Verb_1,Verb_2,Verb_3,Verb_4,Verb_5;
	//FString Object_1,Object_2,Object_3,Object_4,Object_5;
	//FString Complement1_1,Complement1_2,Complement1_3,Complement1_4,Complement1_5;
	//FString Complement2_1,Complement2_2,Complement2_3,Complement2_4,Complement2_5;
	//PROPERTY(BlueprintReadWrite)
	//FString sentence_to_show;
	UPROPERTY(BlueprintReadWrite)
	int32 page_num=1;
	UPROPERTY(BlueprintReadWrite)
	int32 loop_count;
	
	UFUNCTION(BlueprintCallable, Category = "test server")
	void Download_Next();
	UFUNCTION(BlueprintCallable, Category = "test server")
	void Download_Before();
	
	void RequestGetSentence();
	
	void OnGetSentenceResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bConnectedSuccessfully);///다운결과 바인드
};
