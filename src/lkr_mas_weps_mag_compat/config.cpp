/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_mas_weps_mag_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"mas_weapons",
			"mas_weapons_m4"
		};
	};
};
class CfgWeapons
{
	class arifle_MX_F;
	class arifle_mas_hk416: arifle_MX_F
	{
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
			//"20Rnd_556x45_UW_mag"
		};
	};
	class arifle_MX_GL_F;
	class arifle_mas_hk416_gl: arifle_MX_GL_F
	{
		magazines[]=
		{
			"30Rnd_556x45_Stanag",
			"30Rnd_556x45_Stanag_Tracer_Red",
			"30Rnd_556x45_Stanag_Tracer_Green",
			"30Rnd_556x45_Stanag_Tracer_Yellow",
			"30Rnd_mas_556x45_Stanag",
			"30Rnd_mas_556x45_T_Stanag"
			//"20Rnd_556x45_UW_mag"
		};
	};
	class srifle_EBR_F;
	class srifle_mas_hk417: srifle_EBR_F
	{
		magazines[]=
		{
			"20Rnd_762x51_Mag",
			"20Rnd_mas_762x51_Stanag",
			"20Rnd_mas_762x51_T_Stanag"
		};
	};
};
