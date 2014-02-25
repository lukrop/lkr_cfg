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
			"lkr_sud_russians_jsrs",
			"mas_weapons_ak"
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
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK74M: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK105: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_SUD_AK107: Rifle_Base_F
	{
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_SUD_RPK107: Rifle_Long_Base_F
	{
		class Full: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\rpk_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\rpk_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\rpk_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\rpk_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\rpk_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\rpk_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\rpk_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\rpk_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_SUD_Pecheneg_M: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\pkm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\pkm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\pkm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\pkm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\pkm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\pkm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\pkm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\pkm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_SUD_SVD: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\svd_s1", 0.8, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\svd_s2", 0.8, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\svd_3", 0.8, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\svd_4", 0.8, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\svd_s1", 0.8, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\svd_s2", 0.8, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\svd_3", 0.8, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\svd_4", 0.8, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_SUD_SVU107: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\svd_s1", 0.8, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\svd_s2", 0.8, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\svd_3", 0.8, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\svd_4", 0.8, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\svd_s1", 0.8, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\svd_s2", 0.8, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\svd_3", 0.8, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\svd_4", 0.8, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class SUD_KSVK_Base: Rifle_Long_Base_F
	{
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ksvk_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ksvk_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ksvk_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ksvk_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
};