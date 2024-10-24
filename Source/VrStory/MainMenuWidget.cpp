// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Internationalization/Text.h"
void UMainMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	BeforePage->OnClicked.AddDynamic(this,&UMainMenuWidget::Download_Before);
	NextPage->OnClicked.AddDynamic(this,&UMainMenuWidget::Download_Next);
}

void UMainMenuWidget::Download_Before()
{
	UE_LOG(LogTemp, Log, TEXT("--------------------------"));
	UE_LOG(LogTemp, Warning, TEXT("이전 다운로드 버튼 눌림"));
	page_num=page_num-1;
	if(page_num<1)
		page_num=1;
	
	word_num.Init(0,5);
	MapName.Init("",5);
	Subject.Init("",5);
	Verb.Init("",5);
	Object.Init("",5);
	Complement1.Init("",5);
	Complement2.Init("",5);
	UMainMenuWidget::RequestGetSentence();
}

void UMainMenuWidget::Download_Next()
{
	UE_LOG(LogTemp, Log, TEXT("--------------------------"));
	UE_LOG(LogTemp, Warning, TEXT("다음 다운로드 버튼 눌림"));
	page_num=page_num+1;

	word_num.Init(0,5);
	MapName.Init("",5);
	Subject.Init("",5);
	Verb.Init("",5);
	Object.Init("",5);
	Complement1.Init("",5);
	Complement2.Init("",5);
	UMainMenuWidget::RequestGetSentence();
}

void UMainMenuWidget::RequestGetSentence()
{
	FHttpRequestRef Request = FHttpModule::Get().CreateRequest();

	Request->OnProcessRequestComplete().BindUObject(this, &UMainMenuWidget::OnGetSentenceResponseReceived);
	//Request->SetURL("http://localhost:8000/sentence/");
	FString temp="http://61.75.88.252:8000/sentence/?pageNum=";
	temp+=FString::FromInt(page_num);
	Request->SetURL(temp);
	UE_LOG(LogTemp, Warning, TEXT("현재 요청하는 url은: %s"),*temp);
	Request->SetVerb("Get");
	Request->ProcessRequest();
}

void UMainMenuWidget::OnGetSentenceResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response,
                                                    bool bConnectedSuccessfully)
{
	// Response 가져오기
	FString rawResponse = Response->GetContentAsString();

	// 전체 response 확인하려면 아래 주석 해제
	//UE_LOG(LogTemp, Log, TEXT("전체 response: %s"), *rawResponse);

	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(rawResponse); //http요청날리면 생 테스트로받아옴 json으로바꿔줌
	
	// JSON array 파싱
	TArray< TSharedPtr<FJsonValue> > ue4ObjectArray;
	
	
	auto successful = FJsonSerializer::Deserialize(Reader, ue4ObjectArray); // ue4ObjectArray의 각 인덱스에 센텐스가 들어감
	UE_LOG(LogTemp, Warning, TEXT("successful??: %d"), successful);
	UE_LOG(LogTemp, Warning, TEXT("ue4ObjectArray: %d"), ue4ObjectArray.Num());
	loop_count=ue4ObjectArray.Num();
	if(ue4ObjectArray.Num()==0)
	{
		//db저장된 페이지 벗어남
		UE_LOG(LogTemp, Warning, TEXT("db페이지 벗어남"));
		page_num-=1;
		return;
	}

	
	int32 button_num=0;
	for (auto sentence : ue4ObjectArray) {
		TSharedPtr<FJsonObject> json = sentence->AsObject();
		
		FString mapNameValue;
		if (json->TryGetStringField("mapName", mapNameValue)) {
			UE_LOG(LogTemp, Warning, TEXT("맵 이름: %s"), *json->GetStringField("mapName"));
		}
		MapName[button_num]=mapNameValue;
		
		int idValue;
		if (json->TryGetNumberField("id", idValue)) {
			UE_LOG(LogTemp, Warning, TEXT("문장 ID: %s"), *json->GetStringField("id"));
		}

		int sentenceTypeValue;
		if (json->TryGetNumberField("sentence_type", sentenceTypeValue))
		{
			UE_LOG(LogTemp, Warning, TEXT("문장 타입: %s"), *json->GetStringField("sentence_type"));
		}
		word_num[button_num]=sentenceTypeValue+1;

		FString subjectValue;
		if (json->TryGetStringField("subject", subjectValue)) {
			UE_LOG(LogTemp, Warning, TEXT("주어: %s"), *json->GetStringField("subject"));
		}
		Subject[button_num]=subjectValue;

		FString complementValue; //complement1 의미
		if (json->TryGetStringField("complement", complementValue)) {
			UE_LOG(LogTemp, Warning, TEXT("보어:%s"), *json->GetStringField("complement"));
		}
		Complement1[button_num]=complementValue;

		FString objectValue;
		if (json->TryGetStringField("object", objectValue)) {
			UE_LOG(LogTemp, Warning, TEXT("목적어:%s"), *json->GetStringField("object"));
		}
		Object[button_num]=objectValue;

		FString modifireValue; //complement2 의미
		if (json->TryGetStringField("modifire", modifireValue)) {
			UE_LOG(LogTemp, Warning, TEXT("수식어:%s"), *json->GetStringField("modifire"));
		}
		Complement2[button_num]=modifireValue;

		FString predicateValue;
		if (json->TryGetStringField("predicate", predicateValue)) {
			UE_LOG(LogTemp, Warning, TEXT("서술어:%s"), *json->GetStringField("predicate"));
		}
		Verb[button_num]=predicateValue;
		
		UE_LOG(LogTemp, Log, TEXT("--------------------------"));
		button_num++;
	}
}
