// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerMenu.h"
#include "Components/Button.h"
#include "MyGameInstance.h"
#include "MyGameModeBase.h"
#include "Kismet/GameplayStatics.h"
#include "MainMenuWidget.h"

void UControllerMenu::NativeConstruct()
{
	Super::NativeConstruct();
	UploadButton->OnClicked.AddDynamic(this,&UControllerMenu::Upload);
}

void UControllerMenu::Upload()
{
	UE_LOG(LogTemp, Log, TEXT("업로드 버튼 눌림, 업로드 유효성 검사중.."));
	if(Cast<UMyGameInstance>(GetGameInstance())->word_num==2)
	{
		AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		if(GameMode)
		{
			if(GameMode->Subject!="" && GameMode->Verb!="")
			{
				//UE_LOG(LogTemp, Log, TEXT("업로드할 맵은 :%s"), *(Cast<UMyGameInstance>(GetGameInstance())->MapName))
				UE_LOG(LogTemp, Log, TEXT("업로드할 문장 타입은 :%d"), (GameMode->word_num-1)); //1이 2단어문장... 2는 3단어..
				UE_LOG(LogTemp, Log, TEXT("업로드할 주어는:%s"),*GameMode->Subject);
				UE_LOG(LogTemp, Log, TEXT("업로드할 보어는:%s"),*GameMode->Complement1);
				UE_LOG(LogTemp, Log, TEXT("업로드할 목적어는:%s"), *GameMode->Object);
				UE_LOG(LogTemp, Log, TEXT("업로드할 수식어는:%s"), *GameMode->Complement2);
				UE_LOG(LogTemp, Log, TEXT("업로드할 서술어는:%s"), *GameMode->Verb);

				UControllerMenu::RequestPostSentence();
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("문장이 아직 미완성됨"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("게임모드 불러오기 실패"));
		}
	}
	else if(Cast<UMyGameInstance>(GetGameInstance())->word_num==3)
	{
		AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		if(GameMode)
		{
			if(GameMode->Subject!="" && GameMode->Object!="" && GameMode->Verb!="")
			{
				//UE_LOG(LogTemp, Log, TEXT("업로드할 맵은 :%s"), *(Cast<UMyGameInstance>(GetGameInstance())->MapName))
				UE_LOG(LogTemp, Log, TEXT("업로드할 문장 타입은 :%d"), (GameMode->word_num-1)); //1이 2단어문장... 2는 3단어..
				UE_LOG(LogTemp, Log, TEXT("업로드할 주어는:%s"),*GameMode->Subject);
				UE_LOG(LogTemp, Log, TEXT("업로드할 보어는:%s"),*GameMode->Complement1);
				UE_LOG(LogTemp, Log, TEXT("업로드할 목적어는:%s"), *GameMode->Object);
				UE_LOG(LogTemp, Log, TEXT("업로드할 수식어는:%s"), *GameMode->Complement2);
				UE_LOG(LogTemp, Log, TEXT("업로드할 서술어는:%s"), *GameMode->Verb);

				UControllerMenu::RequestPostSentence();
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("문장이 아직 미완성됨"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("게임모드 불러오기 실패"));
		}
	}
	else if(Cast<UMyGameInstance>(GetGameInstance())->word_num==4)
	{
		AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
		if(GameMode)
		{
			if(GameMode->Subject!="" && GameMode->Complement1!="" && GameMode->Complement2!=""  && GameMode->Verb!="")
			{
				//UE_LOG(LogTemp, Log, TEXT("업로드할 맵은 :%s"), *(Cast<UMyGameInstance>(GetGameInstance())->MapName))
				UE_LOG(LogTemp, Log, TEXT("업로드할 문장 타입은 :%d"), (GameMode->word_num-1)); //1이 2단어문장... 2는 3단어..
				UE_LOG(LogTemp, Log, TEXT("업로드할 주어는:%s"),*GameMode->Subject);
				UE_LOG(LogTemp, Log, TEXT("업로드할 보어는:%s"),*GameMode->Complement1);
				UE_LOG(LogTemp, Log, TEXT("업로드할 목적어는:%s"), *GameMode->Object);
				UE_LOG(LogTemp, Log, TEXT("업로드할 수식어는:%s"), *GameMode->Complement2);
				UE_LOG(LogTemp, Log, TEXT("업로드할 서술어는:%s"), *GameMode->Verb);

				UControllerMenu::RequestPostSentence();
			}
			else
			{
				UE_LOG(LogTemp, Log, TEXT("문장이 아직 미완성됨"));
			}
		}
		else
		{
			UE_LOG(LogTemp, Log, TEXT("게임모드 불러오기 실패"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Log, TEXT("word_num이 비정상. 업로드불가"));
	}
}

void UControllerMenu::RequestPostSentence()
{
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();
	TSharedRef<FJsonObject> RequestObj = MakeShared<FJsonObject>();
	AMyGameModeBase* GameMode=Cast<AMyGameModeBase>(UGameplayStatics::GetGameMode(GetWorld()));
	
	// JSON VALUE 설정
	RequestObj->SetStringField("mapName", Cast<UMyGameInstance>(GetGameInstance())->MapName);
	RequestObj->SetNumberField("sentence_type", GameMode->word_num-1);
	RequestObj->SetStringField("subject", GameMode->Subject);
	RequestObj->SetStringField("complement", GameMode->Complement1);
	RequestObj->SetStringField("object", GameMode->Object);
	RequestObj->SetStringField("modifier", GameMode->Complement2);
	RequestObj->SetStringField("predicate", GameMode->Verb);

	FString RequestBody;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&RequestBody);
	
	FJsonSerializer::Serialize(RequestObj,Writer);

	//Request->OnProcessRequestComplete().BindUObject(this, &UMainMenuWidget::OnGetSentenceResponseReceived); //이부분이 다운결과 바인드해주는 곳인듯??????????
	//Request->SetURL("http://localhost:8000/sentence/");
	Request->SetURL("http://61.75.88.252:8000/sentence/");

	Request->SetVerb("POST");
	Request->SetHeader(TEXT("User-Agent"), "X-UnrealEngine-Agent");
	Request->SetHeader("Content-Type", "application/json");
	Request->SetContentAsString(RequestBody);
	Request->ProcessRequest();
}

