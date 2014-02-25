/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_sud_russians_jsrs
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
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
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
	};
	class arifle_SUD_AK74M: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
	};
	class arifle_SUD_AK105: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
	};
	class arifle_SUD_AK107: Rifle_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\khaybar\khaybar_1", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\khaybar\khaybar_2", 1.25893, 1, 130};
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F
	{
		 jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
		class Full: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\M200\Mk200_st_4a", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\M200\Mk200_st_5a", 1.25893, 1, 130};
			begin3[]={"A3\sounds_f\weapons\M200\Mk200_st_6a", 1.25893, 1, 130};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\M200\Mk200_st_4a", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\M200\Mk200_st_5a", 1.25893, 1, 130};
			begin3[]={"A3\sounds_f\weapons\M200\Mk200_st_6a", 1.25893, 1, 130};
		};
	};
	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\zafir\zafir_1a7", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\zafir\zafir_2a7", 1.25893, 1, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\zafir\zafir_1a7", 1.25893, 1, 130};
			begin2[]={"A3\sounds_f\weapons\zafir\zafir_2a7", 1.25893, 1, 130};
		};
	};
	class srifle_SUD_SVD: Rifle_Long_Base_F
	{
		 jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\EBR\EBR_st_4", 1.12202, 1, 130};
			begin2[]={"A3\sounds_f\weapons\EBR\EBR_st_5", 1.12202, 1, 130};
			begin3[]={"A3\sounds_f\weapons\EBR\EBR_st_6", 1.12202, 1, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\EBR\EBR_st_4", 1.12202, 1, 130};
			begin2[]={"A3\sounds_f\weapons\EBR\EBR_st_5", 1.12202, 1, 130};
			begin3[]={"A3\sounds_f\weapons\EBR\EBR_st_6", 1.12202, 1, 130};
		};
	};
	class srifle_SUD_SVU107: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\EBR\EBR_st_4", 1.12202, 1, 130};
			begin2[]={"A3\sounds_f\weapons\EBR\EBR_st_5", 1.12202, 1, 130};
			begin3[]={"A3\sounds_f\weapons\EBR\EBR_st_6", 1.12202, 1, 130};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\EBR\EBR_st_4", 1.12202, 1, 130};
			begin2[]={"A3\sounds_f\weapons\EBR\EBR_st_5", 1.12202, 1, 130};
			begin3[]={"A3\sounds_f\weapons\EBR\EBR_st_6", 1.12202, 1, 130};
		};
	};
	class SUD_KSVK_Base: Rifle_Long_Base_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1c", 1.12202, 1, 130};
			begin2[]={"A3\Sounds_F\weapons\GM6Lynx\gm6_st_1d", 1.12202, 1, 130};
		};
	};
};