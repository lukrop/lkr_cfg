class CfgPatches
{
	class lkr_mas_weps_jsrs_ak
	{
		requiredaddons[]=
		{
			"A3_Weapons_F",
			"mas_weapons"
		};
		requiredversion=1;
		units[]={};
		weapons[]={};
		magazines[]={};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle;
	class Rifle_Base_F: Rifle{};
	class UGL_F;
	class arifle_MX_Base_F;
	class arifle_MX_F;
	class srifle_EBR_F;
	class hgun_P07_F;
	class LMG_Mk200_F;
	class LMG_Zafir_F;
	class arifle_Katiba_F;
	class srifle_LRR_F;
	class srifle_GM6_F;
	class arifle_mas_ak_74m: arifle_Katiba_F
	{
		
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_Katiba_GL_F;
	class arifle_mas_ak_74m_gl: arifle_Katiba_GL_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ak74_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ak74_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ak74_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ak74_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
  };
	class arifle_mas_akms: arifle_mas_ak_74m
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_akms_gl: arifle_mas_ak_74m_gl
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_mas_svd: srifle_EBR_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_SVD";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\svd_s1", 0.8, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\svd_s2", 0.8, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\svd_3", 0.8, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\svd_4", 0.8, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_mas_ksvk: srifle_GM6_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\ksvk_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\ksvk_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\ksvk_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\ksvk_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_rpk_F: LMG_Mk200_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_RPK";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\rpk_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\rpk_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\rpk_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\rpk_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_m72_F: LMG_mas_rpk_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak47";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\akm_s1", 1,	1, 130};
			begin2[]={"\mas_ru_rifle\sounds\akm_s2", 1,	1, 130};
			begin3[]={"\mas_ru_rifle\sounds\akm_s3", 1,	1, 130};
			begin4[]={"\mas_ru_rifle\sounds\akm_s4", 1,	1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_pkm_F: LMG_Mk200_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_PK";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\pkm_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\pkm_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\pkm_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\pkm_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_aks74u: arifle_Katiba_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_Ak74";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\AK74U_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\AK74U_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\AK74U_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\AK74U_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_ru_rifle\sounds\AK74U_s1", 1, 1, 130};
			begin2[]={"\mas_ru_rifle\sounds\AK74U_s2", 1, 1, 130};
			begin3[]={"\mas_ru_rifle\sounds\AK74U_s3", 1, 1, 130};
			begin4[]={"\mas_ru_rifle\sounds\AK74U_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
 };