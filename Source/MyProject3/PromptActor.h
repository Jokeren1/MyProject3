#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/ConstructorHelpers.h"
#include "Blueprint/UserWidget.h"
#include "PromptActor.generated.h"

UCLASS()
class YOURPROJECT_API APromptActor: public AActor
{
    GENERATED_BODY()

public:
    APromptActor();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    void ShowPrompt();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> PromptWidgetClass;

private:
    UUserWidget* PromptWidget;
};
