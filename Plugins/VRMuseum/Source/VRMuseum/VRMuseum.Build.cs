// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class VRMuseum : ModuleRules
{
	public VRMuseum(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
                "D:/Desktop/VRMuseum/Plugins/MetaXRInteraction/Source/OculusInteraction/Public"
            }
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
				"CoreUObject",
				"Engine",
				"InputCore",
				"HeadMountedDisplay",
				"XRBase",
				"EnhancedInput",
				"OculusXRHMD",
				"OculusXRInput",
				"OculusInteraction",
				"OculusInteractionPrebuilts",
            }
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
                "HeadMountedDisplay",
                "UMG", 
				"XRBase",
                "OculusXRHMD",
				"OculusXRInput"
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
