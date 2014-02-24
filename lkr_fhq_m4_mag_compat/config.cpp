class CfgPatches
{
	class lkr_fhq_m4_mag_compat
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"FHQ_M4_M4A1"
		};
		version="";
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class FHQ_M4A1_BASE: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_556x45_STANAG",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Green",
			"FHQ_30Rnd_556x45_Stanag_Tracer_IR",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Red",
			"FHQ_30Rnd_556x45_Stanag_Tracer_Yellow"
		};
	};
};