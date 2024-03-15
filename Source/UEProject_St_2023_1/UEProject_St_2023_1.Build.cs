// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UEProject_St_2023_1 : ModuleRules
{
	public UEProject_St_2023_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
