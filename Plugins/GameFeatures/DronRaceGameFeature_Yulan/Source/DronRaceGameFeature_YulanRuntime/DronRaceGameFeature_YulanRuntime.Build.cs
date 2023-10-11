// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DronRaceGameFeature_YulanRuntime : ModuleRules
{
	public DronRaceGameFeature_YulanRuntime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {"Core", "Engine", "CoreUObject", "InputCore", "EnhancedInput", "AIModule", "UMG", "Niagara", "Landscape", "LyraGame", "DatabaseSupport", "SQLiteCore", "SQLiteSupport", "Cascade" });

		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"EnhancedInput",
				"LyraGame",
				"GameplayTags",
				"CommonGame",
				"AIModule",
				"UMG",
				"Niagara",
				"Landscape",
				"ModularGameplayActors",
				"DatabaseSupport", 
				"SQLiteCore", 
				"SQLiteSupport",
				"Cascade"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		OptimizeCode = CodeOptimization.Never;

    }
}
