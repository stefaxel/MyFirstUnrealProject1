// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DefaultItem.generated.h"

UCLASS()
class MYPROJECT_API ADefaultItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADefaultItem();

	/** The weight of the item*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float weight;

	/** The name of the item*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString name;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
