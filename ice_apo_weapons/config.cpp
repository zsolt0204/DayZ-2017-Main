#define true	1
#define false	0

#define VSoft		0
#define VArmor		1
#define VAir		2

#define private		0
#define protected		1
#define public		2

#define TEast		0
#define TWest		1
#define TGuerrila		2
#define TCivilian		3
#define TSideUnknown		4
#define TEnemy		5
#define TFriendly		6
#define TLogic		7

#define ReadAndWrite		0
#define ReadAndCreate		1
#define ReadOnly		2
#define ReadOnlyVerified		3

#define LockNo		0
#define LockCadet		1
#define LockYes		2


class CfgPatches
{
	class ice_apo_weapons
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
	};
};


class CfgMagazines
{
	class CA_Magazine;
	class ice_60Rnd_556x45_Stanag_tape: CA_Magazine
	{
			scope = 2;
			displayName = "STANAG (60)";
			ammo = "B_556x45_Ball";
			count = 15;
			initSpeed = 930;
			type = "2*		256";
			tracersEvery = 0;
			descriptionShort = "Calibre: 5,56x45 mm NATO <br/>60 Rounds, duct-taped<br/>Used in: M249 SAW, M4A1, M16A4";
			picture = "\ice_apo_weapons\data\double_ca.paa";
	};
	
};
class CfgWeapons
{
	class default;
	class rifle;
	class M4A1;
	class M16A2;
	//class m136;
	class ice_apo_weapons_M16: M16A2
	{
	
	class FlashLight
		{
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
			
		scope = 2;
	picture = "\ice_apo_weapons\Data\m16_ca.paa";
		model = "\ice_apo_weapons\M16_proxy";
		selectionFireAnim = "zasleh";
		displayName = "Rusty M16A2";
	magazines[] = 
	{
		"30Rnd_556x45_Stanag",
		"ice_60Rnd_556x45_Stanag_tape",
		"30Rnd_556x45_StanagSD",
		"20Rnd_556x45_Stanag",
		"30Rnd_556x45_G36",
		"100Rnd_556x45_BetaCMag",
		"30Rnd_556x45_G36SD"
	};
	class Library
		{
			libTextDesc = "This M4A1 rifle is in a very bad shape.";
		};		
	}
	
	//class ice_apo_weapons_m136: m136
	//{		
		//scope = 2;
		//model = "\ice_apo_weapons\m136_launcher";
		//picture = "\ice_apo_weapons\Data\m136_ca.paa";
		//displayName = "Rusty M136";
		//class Library
		//{
			//libTextDesc = "This M136 launcher is in a very bad shape.";
		//};		
	//}
	
	class ice_apo_weapons_M4: M4A1
	{
					
		scope = 2;
		model = "\ice_apo_weapons\M4_ironsight";
		selectionFireAnim = "zasleh";
		magazines[] = 
		{
			"30Rnd_556x45_Stanag",
			"ice_60Rnd_556x45_Stanag_tape",
			"30Rnd_556x45_StanagSD",
			"20Rnd_556x45_Stanag",
			"30Rnd_556x45_G36",
			"100Rnd_556x45_BetaCMag",
			"30Rnd_556x45_G36SD"
		};
		picture = "\ice_apo_weapons\Data\m4a1_ca.paa";
		displayName = "Rusty M4A1";
		class FlashLight
		{
			color[] = {0.9, 0.9, 0.7, 0.9};
			ambient[] = {0.1, 0.1, 0.1, 1.0};
			position = "flash dir";
			direction = "flash";
			angle = 30;
			scale[] = {1, 1, 0.5};
			brightness = 0.1;
		};
					
		class Library
		{
			libTextDesc = "This M16 rifle is in a very bad shape.";
		};
	};
};