#pragma once

UENUM()
enum EActionStateType
{
	None			 UMETA(DisplayName = "None"),
	InProgress		 UMETA(DisplayName = "InProgress"),
	WaitInput		 UMETA(DisplayName = "WaitInput"),
	Finished 	     UMETA(DisplayName = "Finished"),
};
