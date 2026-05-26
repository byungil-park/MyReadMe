// Fill out your copyright notice in the Description page of Project Settings.


#include "GitActor.h"

// Sets default values
AGitActor::AGitActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGitActor::BeginPlay()
{
	Super::BeginPlay();
<<<<<<< HEAD
	UE_LOG(LogTemp, Warning, TEXT("Test123"));
=======
	UE_LOG(LogTemp, Warning, TEXT("Test456"));
>>>>>>> aca17a18571c011d8fa764254cbf67355f5c89d2
}

// Called every frame
void AGitActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UE_LOG(LogTemp, Warning, TEXT("BBB"));
}

