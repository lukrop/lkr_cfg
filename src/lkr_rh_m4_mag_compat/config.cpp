/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_rh_m4_mag_compat
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.0;
		requiredAddons[]=
		{
			"RH_m4_cfg",
			"mas_weapons",
			"mas_weapons_m4",
			"A3_Weapons_F"
		};
	};
};
class CfgWeapons
{
	class Rifle_Base_F;
	class RH_m4: Rifle_Base_F
	{
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag",
			"RH_30Rnd_556x45_Mk262"
		};
	};
};