class CfgPatches
{
	class lkr_caf_chech_mas_weps
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"caf_ag_eur"};
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
	class AG_EUR_Base: I_soldier_F
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random.sqf""";
		};
	};
	class CAF_AG_EUR_AK47;
	class CAF_AG_EUR_RPK: CAF_AG_EUR_AK47 
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random1.sqf""";
		};
	};
	class CAF_AG_EUR_PK: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random1.sqf""";
		};
	};
	class CAF_AG_EUR_AK74: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_EUR_AK74GL: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_EUR_RPG: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_EUR_AA: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_EUR_SVD: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_chech_mas_weps\scripts\Random2.sqf""";
		};
	};
};