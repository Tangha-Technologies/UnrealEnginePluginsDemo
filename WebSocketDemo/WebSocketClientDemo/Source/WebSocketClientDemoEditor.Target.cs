// Copyright 2025 (c) Tangha Technologies, LLC. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class WebSocketClientDemoEditorTarget : TargetRules
{
	public WebSocketClientDemoEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
        DefaultBuildSettings = BuildSettingsVersion.Latest;
        IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
        ExtraModuleNames.Add("WebSocketClientDemo");
	}
}
