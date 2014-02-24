class CfgPatches
{
	class lkr_rhard_mk18_mag_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"RHARD_MK18_Mod1",
			"mas_weapons",
			"mas_weapons_m4"
		};
		author[]=
		{
			"lukrop"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class RHARD_MK18_base_F: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
			//"20Rnd_556x45_UW_mag",
			//"30Rnd_556x45_mag_Tracer",
			//"30Rnd_556x45_green_mag_Tracer",
			//"30Rnd_556x45_red_mag_Tracer"
      
		};
	};
};
