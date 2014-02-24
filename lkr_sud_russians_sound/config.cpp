/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_sud_russians_sound
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"SUD_RUSSIANS"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons
{
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_AKMS: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK74M: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK105: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK107: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_kaybhar";
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_Khaybar\Khaybar_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Khaybar\Khaybar_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Khaybar\Khaybar_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Khaybar\Khaybar_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F
	{
		 jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
		class Full: Mode_FullAuto
		{
			begin1[] = {"JSRS2_FS2000\FS2000_s1", 1, 1, 130};
			begin2[] = {"JSRS2_FS2000\FS2000_s2", 1, 1, 130};
			begin3[] = {"JSRS2_FS2000\FS2000_s3", 1, 1, 130};
			begin4[] = {"JSRS2_FS2000\FS2000_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_FS2000\FS2000_s1", 1, 1, 130};
			begin2[] = {"JSRS2_FS2000\FS2000_s2", 1, 1, 130};
			begin3[] = {"JSRS2_FS2000\FS2000_s3", 1, 1, 130};
			begin4[] = {"JSRS2_FS2000\FS2000_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_Zafir\Zafir_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Zafir\Zafir_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Zafir\Zafir_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Zafir\Zafir_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_Zafir\Zafir_s1", 1, 1, 130};
			begin2[] = {"JSRS2_Zafir\Zafir_s2", 1, 1, 130};
			begin3[] = {"JSRS2_Zafir\Zafir_s3", 1, 1, 130};
			begin4[] = {"JSRS2_Zafir\Zafir_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_SUD_SVD: Rifle_Long_Base_F
	{
		 jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_EBR\EBR_s1", 1, 1, 130};
			begin2[] = {"JSRS2_EBR\EBR_s2", 1, 1, 130};
			begin3[] = {"JSRS2_EBR\EBR_s3", 1, 1, 130};
			begin4[] = {"JSRS2_EBR\EBR_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_EBR\EBR_s1", 1, 1, 130};
			begin2[] = {"JSRS2_EBR\EBR_s2", 1, 1, 130};
			begin3[] = {"JSRS2_EBR\EBR_s3", 1, 1, 130};
			begin4[] = {"JSRS2_EBR\EBR_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_SUD_SVU107: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
		class Single: Mode_SemiAuto
		{
			begin1[] = {"JSRS2_EBR\EBR_s1", 1, 1, 130};
			begin2[] = {"JSRS2_EBR\EBR_s2", 1, 1, 130};
			begin3[] = {"JSRS2_EBR\EBR_s3", 1, 1, 130};
			begin4[] = {"JSRS2_EBR\EBR_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[] = {"JSRS2_EBR\EBR_s1", 1, 1, 130};
			begin2[] = {"JSRS2_EBR\EBR_s2", 1, 1, 130};
			begin3[] = {"JSRS2_EBR\EBR_s3", 1, 1, 130};
			begin4[] = {"JSRS2_EBR\EBR_s4", 1, 1, 130};
			soundBegin[] = {"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class SUD_KSVK_Base: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1c", 1.12202, 1, 130};
			begin2[]={"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1d", 1.12202, 1, 130};
			soundBegin[]={"begin1", 0.5, "begin2", 0.5};
		};
	};
};