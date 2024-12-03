#include "AwakeAudioPlayer.h"


UAwakeAudioPlayer::UAwakeAudioPlayer()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}



void UAwakeAudioPlayer::BeginPlay()
{
	Super::BeginPlay();
	if (soundToPlay && actorTarget)
	{
		UGameplayStatics::PlaySoundAtLocation(this, soundToPlay, actorTarget->GetActorLocation());
	}

}



void UAwakeAudioPlayer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

