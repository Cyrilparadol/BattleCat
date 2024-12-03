#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Kismet/GameplayStatics.h"
#include "AwakeAudioPlayer.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLECAT_API UAwakeAudioPlayer : public UActorComponent
{
	GENERATED_BODY()

public:	

	UAwakeAudioPlayer();
	//AUDIO
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	AActor* actorTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Audio")
	USoundBase* soundToPlay;

protected:

	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
