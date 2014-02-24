class CfgPatches
{
	class lkr_mas_weps_jsrs_m4
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
	class arifle_TRG21_F;
	class hgun_P07_F;
	class LMG_Mk200_F;
	class srifle_LRR_F;
	class srifle_GM6_F;
	class LMG_Zafir_F;
	class SMG_02_F;
  class arifle_mas_hk416_m203;
	class arifle_mas_hk416: arifle_MX_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_fs2000";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\hk416_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\hk416_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\hk416_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\hk416_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\hk416_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\hk416_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\hk416_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\hk416_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_fs2000";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\hk416_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\hk416_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\hk416_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\hk416_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\hk416_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\hk416_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\hk416_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\hk416_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_hk417c: arifle_mas_hk416
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_mx";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_hk417_m203c: arifle_mas_hk416_m203
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_mx";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_m4: arifle_mas_hk416
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
	class arifle_mas_m4_gl: arifle_mas_hk416_gl
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_m4_m203: arifle_mas_hk416_gl
	{
	jsrs_soundeffect = "JSRS2_Distance_Effects_M4";
      begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
    
	class arifle_mas_m16: arifle_mas_hk416
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_m16_gl: arifle_mas_hk416_gl
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_mas_hk417: srifle_EBR_F
	{
	jsrs_soundeffect = "JSRS2_Distance_Effects_fs2000";
    reloadMagazineSound[]={"A3\sounds_f\weapons\reloads\new_ebr", 0.63095701, 1, 35};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_mas_sr25: srifle_mas_hk417
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_DMR";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class srifle_mas_m24: srifle_LRR_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M24";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_mp5: SMG_02_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
		drySound[]={"\mas_us_rifle\sounds\mp5_dry", 1, 1, 20};
		reloadMagazineSound[]={"\mas_us_rifle\sounds\mp5_reload", 1, 1, 30};
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\mp5_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\mp5_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\mp5_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\mp5_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\mp5_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\mp5_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\mp5_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\mp5_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\mp5_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\mp5_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\mp5_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\mp5_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_mp5sd: SMG_02_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_MP";
		drySound[]={"\mas_us_rifle\sounds\mp5_dry", 1, 1, 20};
		reloadMagazineSound[]={"\mas_us_rifle\sounds\mp5_reload", 1, 1, 30};
		class Single: Mode_SemiAuto
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-07", 1, 1, 130};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-08", 1, 1, 130};
			soundBegin[]={"begin1", 0.5, "begin2", 0.5};
			closure1[]={"A3\sounds_f\weapons\closure\closure_handgun_4", 1, 1, 130};
			closure2[]={"A3\sounds_f\weapons\closure\closure_handgun_5", 1, 1, 130};
			soundClosure[]={"closure1", 0.5, "closure2", 0.5};
		};
		class Burst: Mode_Burst
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-07", 1, 1, 130};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-08", 1, 1, 130};
			soundBegin[]={"begin1", 0.5, "begin2", 0.5};
			closure1[]={"A3\sounds_f\weapons\closure\closure_handgun_4", 1, 1, 130};
			closure2[]={"A3\sounds_f\weapons\closure\closure_handgun_5", 1, 1, 130};
			soundClosure[]={"closure1", 0.5, "closure2", 0.5};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"A3\sounds_f\weapons\silenced\silent-07", 1, 1, 130};
			begin2[]={"A3\sounds_f\weapons\silenced\silent-08", 1, 1, 130};
			soundBegin[]={"begin1", 0.5, "begin2", 0.5};
			closure1[]={"A3\sounds_f\weapons\closure\closure_handgun_4", 1, 1, 130};
			closure2[]={"A3\sounds_f\weapons\closure\closure_handgun_5", 1, 1, 130};
			soundClosure[]={"closure1", 0.5, "closure2", 0.5};
		};
	};
	class srifle_mas_m107: srifle_GM6_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_BigSniper";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m107_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m107_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m107_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m107_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_Mk200_F: LMG_Mk200_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M249";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m249_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m249_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m249_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m249_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_M249_F: LMG_Mk200_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M249";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m249_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m249_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m249_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m249_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class LMG_mas_mk48_F: LMG_Mk200_F
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M240";
		class manual: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\mk48_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\mk48_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\mk48_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\mk48_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_g3: arifle_mas_hk416
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M14";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class arifle_mas_g3_m203: arifle_mas_hk416_m203
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M14";
		class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m24_s1", 1, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m24_s2", 1, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m24_s3", 1, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m24_s4", 1, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
};
