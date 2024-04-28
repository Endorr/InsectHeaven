#pragma once


namespace IH_UTIL
{
	template<typename TEnum>
	FString EnumToString(const FString& _strEnum, TEnum _enumType)
	{
		const UEnum* enumPtr = FindObject<UEnum>(ANY_PACKAGE, *_strEnum, true);
		if(!enumPtr)
			return FString("");

		int32 Index = enumPtr->GetIndexByValue((int32)_enumType);
		return enumPtr->GetNameStringByIndex(Index);
	}
}
