/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches {
	class lkr_sud_evw_sound {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"SUD_GW_WPN",
			"lkr_sud_evw_jsrs",
			"mas_weapons_m4",
			"mas_weapons_ak"
		};
	};
};
class Mode_FullAuto;
class Mode_SemiAuto;
class Mode_Burst;
class CfgWeapons {
	class Rifle_Base_F;
	class Rifle_Long_Base_F;
	class arifle_SUD_M16: Rifle_Base_F {
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};

	class arifle_SUD_AK74: Rifle_Base_F {
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

	class LMG_SUD_PK: Rifle_Long_Base_F {
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

	class LMG_SUD_M60: Rifle_Long_Base_F {
		class manual: Mode_FullAuto
		{
			begin1[] = {"\mas_us_rifle\sounds\mk48_s1", 1, 1, 130};
			begin2[] = {"\mas_us_rifle\sounds\mk48_s2",	1, 1, 130};
			begin3[] = {"\mas_us_rifle\sounds\mk48_s3",	1, 1, 130};
			begin4[] = {"\mas_us_rifle\sounds\mk48_s4",	1, 1, 130};
			soundBegin[] = {"begin1", 0.250000, "begin2", 0.250000,	"begin3", 0.250000,	"begin4", 0.250000};
		};
	};
};