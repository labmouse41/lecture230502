// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class lecture230502 : ModuleRules
{
	public lecture230502(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
