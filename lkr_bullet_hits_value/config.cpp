class CfgPatches 
{
	class lkr_Bullet_Hits_Value
	{
		units[] = { };
		weapons[] = { };
		requiredVersion = 1.000000;
		requiredAddons[] = {
				"A3_Weapons_F", "A3_Weapons_F_beta", "mas_weapons", "Ej_u100"
		};
	};
};

#define hitvaluecoef 4

class CfgAmmo 
{

	class BulletCore ;

	class BulletBase : BulletCore
	{
		hit = 8 + hitvaluecoef;
	};

	class B_556x45_Ball : BulletBase
	{
		hit = 8 + hitvaluecoef;
	};

	class B_mas_556x45_Ball : BulletBase
	{
		hit = 8 + hitvaluecoef;
	};

	class B_mas_556x45_Ball_T : B_556x45_Ball
	{
		hit = 8 + hitvaluecoef;
	};

	class RH_556x45_B_Mk262 : B_556x45_Ball
	{
		hit = 10 + hitvaluecoef;
	};

	class TB_556x45_Ball : B_556x45_Ball
	{
		hit = 8 + hitvaluecoef;
	};

	class B_56x15_dual : BulletBase
	{
		hit = 8 + hitvaluecoef;
	};

	class B_65x39_Caseless : BulletBase
	{
		hit = 10 + hitvaluecoef;
	};

	class B_65x39_Minigun_Caseless : B_65x39_Caseless
	{
		hit = 10 + hitvaluecoef;
	};

	class B_762x51_Ball : BulletBase
	{
		hit = 12 + hitvaluecoef;
	};

	class B_mas_762x51_Ball : B_762x51_Ball
	{
		hit = 12 + hitvaluecoef;
	};

	class B_mas_762x51_Ball_T : B_762x51_Ball
	{
		hit = 12 + hitvaluecoef;
	};

	class B_762x51_Minigun_Tracer_Red : B_762x51_Ball
	{
		hit = 12 + hitvaluecoef;
	};

	class B_408_Ball : BulletBase
	{
		hit = 21 + hitvaluecoef;
	};

	class B_12Gauge_Slug : BulletBase
	{
		hit = 24 + hitvaluecoef;
	};

	class ShotgunBase ;

	class B_12Gauge_Pellets : ShotgunBase
	{
		hit = 8 + hitvaluecoef;
	};

	class B_9x21_Ball : BulletBase
	{
		hit = 5 + hitvaluecoef;
	};

	class B_127x33_Ball : BulletBase
	{
		hit = 18 + hitvaluecoef;
	};

	class B_127x99_Ball : BulletBase
	{
		hit = 27 + hitvaluecoef;
	};

	class B_127x99_SLAP : B_127x99_Ball
	{
		hit = 34 + hitvaluecoef;
	};

	class B_127x108_Ball : BulletBase
	{
		hit = 27 + hitvaluecoef;
	};

	class B_127x108_APDS : B_127x108_Ball
	{
		hit = 34 + hitvaluecoef;
	};
};