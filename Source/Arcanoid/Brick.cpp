// Fill out your copyright notice in the Description page of Project Settings.


#include "Brick.h"
#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
//#include "Components/BoxComponent.h"

// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BrickMessAsset(TEXT("/Game/Meshes/SM_Brick.SM_Brick"));


	SM_Brick = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Brick"));
	SM_Brick->SetStaticMesh(BrickMessAsset.Object);
}
class ABrickBuilder {
public:

	brick_Ale* getBrick_Ale = new brick_Ale(){
	brick_Ale->Random();
	return brick_Ale;
	};

	brick_obstaculo* getBrick_Obstaculo = new brick_Ale(){
		brick_obstaculo = 3.0f;
		return brick_obstaculo;
	};

	brick_SF* getBrick_SF = new brick_SF(){
	brick_SF = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SM_Backdrop"));
	return brick_SF;

	};


};



// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

