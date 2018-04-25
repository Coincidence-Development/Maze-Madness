// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Udemy_TutorialEditorTarget : TargetRules
{
	public Udemy_TutorialEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Udemy_Tutorial");
	}
}
