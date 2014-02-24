class CfgPatches
{
	class lkr_rh_m4_sound
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"RH_m4_cfg",
			"mas_weapons",
			"mas_weapons_m4",
			"A3_Weapons_F"
		};
		author[]={"lukrop"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class Rifle_Base_F;
	class RH_m4: Rifle_Base_F
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
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1,	130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1,	130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1,	130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1,	130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_M4_ris: RH_m4
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
		class Burst: Mode_Burst
		{
			begin1[]={"\mas_us_rifle\sounds\m4_s1", 1, 1,	130};
			begin2[]={"\mas_us_rifle\sounds\m4_s2", 1, 1,	130};
			begin3[]={"\mas_us_rifle\sounds\m4_s3", 1, 1,	130};
			begin4[]={"\mas_us_rifle\sounds\m4_s4", 1, 1,	130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
  
  class RH_M4A1_ris: RH_M4_ris
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
  class RH_M4_ris_M203;
  class RH_M4A1_ris_M203: RH_M4_ris_M203
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
  class RH_M4sbr: RH_M4_ris
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
	class RH_M16a1: RH_m4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
	class RH_M16A2: RH_m4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
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
	class RH_M16A4: RH_M4_ris
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
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
	class RH_M16A3: RH_M16A4
	{
		jsrs_soundeffect = "JSRS2_Distance_Effects_M16";
    class Single: Mode_SemiAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
		class FullAuto: Mode_FullAuto
		{
			begin1[]={"\mas_us_rifle\sounds\m16_s1", 0.9, 1, 130};
			begin2[]={"\mas_us_rifle\sounds\m16_s2", 0.9, 1, 130};
			begin3[]={"\mas_us_rifle\sounds\m16_s3", 0.9, 1, 130};
			begin4[]={"\mas_us_rifle\sounds\m16_s4", 0.9, 1, 130};
			soundBegin[]={"begin1", 0.25, "begin2", 0.25, "begin3", 0.25, "begin4", 0.25};
		};
	};
};