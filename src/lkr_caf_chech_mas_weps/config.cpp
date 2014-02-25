/*
This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/ or send 
a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
*/

class CfgPatches
{
	class lkr_caf_chech_mas_weps
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={
			"caf_ag_eur"
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
	class AG_EUR_Base: I_soldier_F
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),0] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_AK47;
	class CAF_AG_EUR_RPK: CAF_AG_EUR_AK47 
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),1] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_PK: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),1] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_AK74: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),2] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_AK74GL: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),2] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_RPG: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),2] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_AA: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),2] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
	class CAF_AG_EUR_SVD: CAF_AG_EUR_AK47
	{
		class EventHandlers: EventHandlers
		{
			init="[(_this select 0),2] execVM ""\lkr_caf_chech_mas_weps\randomization.sqf""";
		};
	};
};