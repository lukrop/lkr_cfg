/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_caf_somali_mas_weps
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"caf_somali_c"
		};
	};
};
class EventHandlers;
class CfgVehicles
{
	class I_Soldier_base_F;
	class I_soldier_F: I_Soldier_base_F
	{
		class EventHandlers;
	};
	class AG_AFR_Base: I_soldier_F
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0), 0] execVM ""\lkr_caf_somali_mas_weps\randomization.sqf""";
		};
	};
	class AG_AFR_Base_02: AG_AFR_Base
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0), 1] execVM ""\lkr_caf_somali_mas_weps\randomization.sqf""";
		};
	};
};