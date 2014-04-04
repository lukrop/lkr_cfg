/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_vas_cfg
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
		author[] = {
			"lukrop"
		};
	};
};

class CfgFunctions {
	class lkr {
		tag = "lkr";
		class lkr_vas_cfg {
			file = "lkr_vas_cfg";
			class loadVASRestriction {
				postInit = 1;
			};
		};
	};
};
