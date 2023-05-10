// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnemyAI.generated.h"

UCLASS()
class MYPROJECT_API AEnemyAI : public ACharacter
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyAI();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float _damage);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = Enemy)
	float health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = Enemy)
	bool hasTakenDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, category = Enemy)
    bool isDead;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
