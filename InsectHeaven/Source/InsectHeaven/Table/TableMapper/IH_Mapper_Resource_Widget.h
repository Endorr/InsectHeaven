#pragma once

#include "CoreMinimal.h"
#include "IH_TableMapper.h"
#include "IH_Mapper_Resource_Widget.generated.h"

struct FResource_Widget;

UCLASS()
class UIH_Mapper_Resource_Widget : public UIH_TableMapper
{
	GENERATED_BODY()
	
public:
	virtual void Initialize(UIH_TableManager* _pMng) override;
	virtual void Finalize() override;

	const FResource_Widget* GetWidgetData(FName _TypeName);

private:
	TMap<FName, const FResource_Widget*> _mapResourceWidget;
};
