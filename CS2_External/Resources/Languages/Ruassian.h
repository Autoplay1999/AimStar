#pragma once
#include "..\Language.h"

namespace Lang 
{
	inline void Russian()
	{
		Global.Author = "gScream";
		Global.Date = u8"2023/11/19";

		Global.SwitchButton = u8"���ܧݧ��ڧ��";
		Global.FeatureSettings = u8"���ѧ����ۧܧ�";

		// ESP
		ESPtext.FeatureName = u8" ESP (WH)";
		ESPtext.Box = u8"���ҧӧ�էܧ�";
		ESPtext.BoxRounding = u8"���ܧ��ԧݧ֧ߧڧ� ��ҧӧ�էܧ�";
		ESPtext.FilledBox = u8"���ѧ��ݧߧ֧ߧߧѧ� ��ҧӧ�էܧ�";
		ESPtext.FilledAlpha = u8"�����٧�ѧ�ߧ���� �٧ѧ��ݧߧ֧ߧߧ�� ��ҧӧ�էܧ�";
		ESPtext.Skeleton = u8"���ܧ֧ݧ֧� ��֧ݧ�";
		ESPtext.HeadBox = u8"����ܧ� �ԧ�ݧ�ӧ� ��֧ݧ�";
		ESPtext.EyeRay = u8"���ѧ��ѧӧݧ֧ߧڧ� �٧�֧ߧڧ� ��֧ݧ�";
		ESPtext.HealthBar = u8"����ݧ��ܧ� �٧է���ӧ�� ��֧ݧ�";
		ESPtext.Weapon = u8"�����اڧ� ��֧ݧ�";
		ESPtext.Distance = u8"���ڧ��ѧߧ�ڧ� �է� ��֧ݧ�";
		ESPtext.PlayerName = u8"���ާ� ��֧ݧ�";
		ESPtext.SnapLine = u8"���ڧߧڧ� �� �����ڧӧߧڧܧ�";
		ESPtext.LinePosList = u8"����٧ڧ�ڧ� �ݧڧߧڧ�";
		ESPtext.VisCheck = u8"����ݧ�ܧ� �֧�ݧ� ��֧ݧ� �� ���ݧ� �٧�֧ߧڧ�";
		ESPtext.Preview = u8"�����ҧ�ѧ٧ڧ�� ���֧է����ާ��� WH";
		ESPtext.CollapseHead = u8"���֧ܧ� WH";
		ESPtext.Penis = u8"����ܧѧ٧ѧ�� ��֧ߧڧ�";
		ESPtext.PenisLength = u8"���ݧڧߧ�";
		ESPtext.PenisSize = u8"���ѧ٧ާ֧�";
		ESPtext.MultiColor = u8"����ݧ���-��ӧ֧�";
		ESPtext.MultiColTip = u8"���ѧҧ��ѧ֧� ���ݧ�ܧ� �ܧ�ԧէ� ��ҧӧ�էܧ� �ߧ� �ڧާ֧֧� �٧ѧܧ��ԧݧ֧ߧߧ�� �ܧ�ѧ�.";

		// Aimbot
		AimbotText.FeatureName = u8" ���ڧާҧ��";
		AimbotText.HotKeyList = u8"�������ѧ� �ܧݧѧӧڧ��";
		AimbotText.Toggle = u8"���֧اڧ� ��֧�֧ܧݧ��֧ߧڧ�";
		AimbotText.DrawFov = u8"�����ҧ�ѧ٧ڧ�� ���ݧ� �٧�֧ߧڧ�";
		AimbotText.VisCheck = u8"����ݧ�ܧ� �֧�ݧ� ��֧ݧ� �� ���ݧ� �٧�֧ߧڧ�";
		AimbotText.JumpCheck = u8"����ݧ�ܧ� �ߧ� �٧֧ާݧ� ";
		AimbotText.FovSlider = u8"���ѧէڧ�� ���ݧ� �٧�֧ߧڧ�";
		AimbotText.SmoothSlider = u8"���ԧݧѧاڧӧѧߧڧ�";
		AimbotText.BoneList = u8"���ܧ֧ݧ֧�";
		AimbotText.Tip = u8"���ݧ� ��ѧҧ��� ���ڧާҧ��� �ߧ�اߧ� �٧ѧܧ���� �ާ֧ߧ� (Insert)";

		// Glow
		GlowText.FeatureName = u8" ���ӧ֧�֧ߧڧ�";

		// Radar
		RadarText.FeatureName = u8" ���ѧէѧ�";
		RadarText.StyleList = u8"����ڧݧ�";
		RadarText.CustomCheck = u8"���ѧ���ާߧ��";
		RadarText.CrossLine = u8"���֧�֧ܧ�֧����";
		RadarText.SizeSlider = u8"���ѧ٧ާ֧� ����ܧ�";
		RadarText.ProportionSlider = u8"���������ڧ�";
		RadarText.RangeSlider = u8"���ѧէڧ��";
		RadarText.AlphaSlider = u8"�����٧�ѧ�ߧ���� ��ѧէѧ��";

		// Triggerbot
		TriggerText.FeatureName = u8" ����ڧԧԧ֧�ҧ��";
		TriggerText.HotKeyList = u8"�������ѧ� �ܧݧѧӧڧ��";
		TriggerText.Toggle = u8"����֧ԧէ� �ѧܧ�ڧӧ֧�";
		TriggerText.DelaySlider = u8"���ѧէ֧�اܧ� ��֧�֧� �ӧ����֧ݧ��";
		TriggerText.FakeShotSlider = u8"�����է�ݧاڧ�֧ݧ�ߧ���� �ӧ����֧ݧ�";

		// Crosshairs
		CrosshairsText.FeatureName = u8" ����ڧ�֧ݧ�";
		CrosshairsText.PresetList = u8"����֧�֧��";
		CrosshairsText.ColorEditor = u8"���ӧ֧�� ���ڧ�֧ݧ�";
		CrosshairsText.Dot = u8"�����ܧ� �� ��֧ߧ���";
		CrosshairsText.DotSizeSlider = u8"���ѧ٧ާ֧� ����ܧ�";
		CrosshairsText.Outline = u8"����ߧ���";
		CrosshairsText.Crossline = u8"���֧�֧ܧ�֧����";
		CrosshairsText.hLengthSlider = u8"�����ڧ٧�ߧ�ѧݧ�ߧѧ� �էݧڧߧ�";
		CrosshairsText.vLengthSilder = u8"���֧��ڧܧѧݧ�ߧѧ� �էݧڧߧ�";
		CrosshairsText.GapSlider = u8"�����ҧ֧�";
		CrosshairsText.ThicknessSlider = u8"���ڧ����";
		CrosshairsText.tStyle = u8"����ڧ�֧� �� ���ڧݧ� �ҧ�ܧӧ� ��";
		CrosshairsText.Circle = u8"������";
		CrosshairsText.RadiusSlider = u8"���ѧէڧ�� �ܧ��ԧ�";
		CrosshairsText.TargetCheck = u8"���ѧ�֧ݧڧӧѧߧڧ� ���ڧ�֧ݧ�";
		CrosshairsText.TeamCheck = u8"���֧اڧ� ��ӧ�ڧ� �ߧѧ�ѧ�ߧڧܧ��";

		// Misc
		MiscText.FeatureName = u8" ������ݧߧڧ�֧ݧ�ߧ�";
		MiscText.ThemeList = u8"���֧ާ�";
		MiscText.StyleList = u8"����ڧݧ�";
		MiscText.HeadshotLine = u8"�������ߧѧ� �ݧڧߧڧ� �ԧ�ݧ�ӧ�";
		MiscText.SpecCheck = u8"�����ҧ�ѧا֧ߧڧ� ���� �ߧѧҧݧ�է֧ߧڧ�";
		MiscText.NoFlash = u8"���ߧ��-��ݧ֧����";
		MiscText.HitSound = u8"���ӧ�� ����ѧէѧߧڧ�";
		MiscText.bmbTimer = u8"���ѧۧާ֧� �է� �ӧ٧��ӧ� C4";
		MiscText.SpecList = u8"����ڧ��� �ߧѧҧݧ�էѧ�֧ݧ֧�";
		MiscText.Bhop = u8"������";
		MiscText.Watermark = u8"����է�ߧ�� �٧ߧѧ�";
		MiscText.CheatList = u8"����ڧ��� �ѧܧ�ڧӧߧ�� ��ڧ���";
		MiscText.TeamCheck = u8"���֧اڧ� ��ӧ�ڧ� �ߧѧ�ѧ�ߧڧܧ��";
		MiscText.AntiRecord = u8"���ҧ��� �٧ѧ�ڧ��/�է֧ާ�ߧ���ѧ�ڧ�";

		MiscText.LanguageList = u8"���٧��";

		// Config Menu
		ConfigText.FeatureName = u8" ����ߧ�ڧԧ��ѧ�ڧ�";
		ConfigText.Load = u8"���ѧԧ��٧ڧ�� �ӧ�է֧ݧ֧ߧߧ��";
		ConfigText.Save = u8"������ѧߧڧ�� �ӧ�է֧ݧ֧ߧߧ��";
		ConfigText.Delete = u8"���էѧݧڧ�� �ӧ�է֧ݧ֧ߧߧ��";
		ConfigText.Reset = u8"�������ѧߧ�ӧڧ�� ���ѧߧէѧ��ߧ�� �ߧѧ����ۧܧ�";
		ConfigText.Create = u8"����٧էѧ�� �ܧ�ߧ�ڧԧ��ѧ�ڧ�";
		ConfigText.OpenFolder = u8"����ܧ���� ��ѧ�ܧ� �� �ܧ�ߧ�ڧԧ��ѧ�ڧ�ާ�";
		ConfigText.SeparateLine = u8"������ѧߧڧ�� �ܧ�ߧ�ڧԧ��ѧ�ڧ�";

		// Readme Menu
		ReadMeText.FeatureName = u8" ������������";
		ReadMeText.LastUpdate = u8"�����ݧ֧էߧ֧� ��ҧߧ�ӧݧ֧ߧڧ�: ";
		ReadMeText.SourceButton = u8" ������էߧ�� �ܧ��";
		ReadMeText.DiscordButton = u8" ����ڧ��֧էڧߧڧ���� �� �էڧ�ܧ��� ��֧�ӧ֧��";
		ReadMeText.OffsetsTitle = u8"������֧��:";
	}
}