
class CfgPatches
{
	class lkr_caf_taliban_mas_weps
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"caf_taliban_c"};
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
	};
	class CAF_AG_ME_Base: I_soldier_F
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random.sqf""";
		};
	};
	class CAF_AG_ME_AK47;
	class CAF_AG_ME_AK74: CAF_AG_ME_Base
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random1.sqf""";
		};
	};
	class CAF_AG_ME_GL: CAF_AG_ME_Base
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_ME_RPG: CAF_AG_ME_Base
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random3.sqf""";
		};
	};
	class CAF_AG_ME_SVD: CAF_AG_ME_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random1.sqf""";
		};
	};
	class CAF_AG_ME_RPK: CAF_AG_ME_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random2.sqf""";
		};
	};
	class CAF_AG_ME_PK: CAF_AG_ME_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="(_this select 0) execVM ""\lkr_caf_taliban_mas_weps\scripts\Random1.sqf""";
		};
	};
};
