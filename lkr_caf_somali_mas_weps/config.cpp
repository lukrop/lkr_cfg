class CfgPatches
{
	class lkr_caf_somali_mas_weps
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"caf_somali_c"};
	};
};
class DefaultEventhandlers;
class EventHandlers;
class CfgVehicles
{
	class I_Soldier_base_F;
	class I_soldier_F: I_Soldier_base_F
	{
		class EventHandlers;
		class Wounds;
	};
	class AG_AFR_Base: I_soldier_F
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_somali_mas_weps\scripts\Random.sqf""";
		};
	};
	class AG_AFR_Base_02: AG_AFR_Base
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_somali_mas_weps\scripts\Random1.sqf""";
		};
	};
};