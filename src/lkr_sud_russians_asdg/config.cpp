/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_sud_russians_jsdg
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=1.04;
		requiredAddons[]=
		{
			"A3_Weapons_F",
			"asdg_jointrails"
		};
	};
};

class asdg_OpticRail;
class asdg_OpticSideMount: asdg_OpticRail {
	class compatibleItems {
		optic_sud_pso1 = 1;
		optic_sud_PSO4 = 1;
		optic_sud_pso4_camo = 1;
		optic_sud_1p29 = 1;
		optic_sud_goshawk = 1;
		optic_sud_Cobra = 1;
		optic_sud_Krechet = 1;
		optic_sud_Krechet_M = 1;
	};
};