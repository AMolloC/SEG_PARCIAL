// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Brick.generated.h"

UCLASS()
class ARCANOID_API ABrick : public AActor
{
	GENERATED_BODY()


	
public:	
	// Sets default values for this actor's properties
	ABrick();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
		UStaticMeshComponent* SM_Brick;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOly)
		UBoxComponent* BoxCollisiones;*/

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

class brick
{
	brick_Aleatprio* Aleatorio;
	brick_obstaculo* Obstaculo;
	brick_SF* SF;
};
class ABrickBuilder {
public:
	virtual brick_Aleatorio* getBrick_Ale() = 0;
	virtual brick_obstaculo* getBrickObstaculo)() = 0;
	virtual brick_SF* getBrickSF() = 0;


public:
	void setBuilder(Builder* newBuilder)
	{
		builder = newBuilder;
	}


	ABrick* getCar()
	{
		ABrick* = new Brick();

		ABrick->brick_Aleatorio = getBrick_Aleatorio();
		ABrick->brick_obstaculo = getBrickObstaculo();
		ABrick->brick_SF = getSF();
		return ABrick;
	}
};

