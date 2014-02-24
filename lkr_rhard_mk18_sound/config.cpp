class CfgPatches
{
	class lkr_rhard_mk18_sound
	{
		units[]={};
		weapons[]=
		{
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RHARD_MK18_Mod1",
			"mas_weapons",
			"mas_weapons_m4"
		};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class RHARD_MK18_base_F: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1,	130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1,	130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1,	130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1,	130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1,	130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1,	130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1,	130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1,	130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
};
