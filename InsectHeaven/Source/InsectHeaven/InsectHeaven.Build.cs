// Copyright Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class InsectHeaven : ModuleRules
{
	public InsectHeaven(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.Add(ModuleDirectory);
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Library"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Table"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Util"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Scene"));
		PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Widget"));
		
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "UnrealEd", "InputCore", "PropertyEditor", "Json", "JsonUtilities", "UMG", "Blutility",  "EditorScriptingUtilities",
			"DesktopWidgets", "DesktopPlatform", "Slate", "SlateCore" , "UMGEditor" , "ContentBrowser", "AssetRegistry"});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
