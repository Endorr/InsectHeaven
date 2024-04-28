#pragma once

UENUM()
enum class ETableDataType : uint32
{
	InGameLocal = 0		UMETA(DisplayName = "GameLocal"),
	ScriptLocal			UMETA(DisplayName = "ScriptLocal"),
	BasePathDir			UMETA(DisplayName = "BasePathDir"),
	BasePathWidget		UMETA(DisplayName = "BasePathWidget"),
	BasePathImage		UMETA(DisplayName = "BasePathImage"),
	ResourceWidget		UMETA(DisplayName = "ResourceWidget"),
	Character2D			UMETA(DisplayName = "Character2D"),

	Max_Table,
};
