#pragma once

UENUM()
enum class EActionStateType : uint8
{
	None			 UMETA(DisplayName = "None"),
	InProgress		 UMETA(DisplayName = "InProgress"),
	WaitInput		 UMETA(DisplayName = "WaitInput"),
	Finished 	     UMETA(DisplayName = "Finished"),
};
