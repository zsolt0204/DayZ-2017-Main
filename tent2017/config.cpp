 class CfgPatches
{
	class Tent2017
	{
		units[]=
		{
			"tent2017",
		};
		weapons[]={};
		requiredVersion=0.100000;
		requiredAddons[] = {"CAData","CAStructures","CABuildings","CABuildings2"};
	};
};

class CfgAddons
{
	class Tent2017
	{
		list[]=
		{
			"Tent_2017"
		};
	};
};
 
 class CfgVehicleClasses
{
	class Tent2017
	{
		displayName="2017 - Items";
	};
};

 class CfgVehicles
{
	class HouseBase;
	class House: HouseBase
		{
		class DestructionEffects;
		 };
		 class NonStrategic;
		 class Strategic;
		 class static;
		 class Ruins;
		 class Thing;
		 class ThingEffect;
		 class TransparentWall: ThingEffect
		 {
		  scope = 1;
		  model = "\Ca\Misc3\TransparentWall";
		 };
		 
		 class tent2017: House
		 {
		  scope = 2;
		  vehicleClass = "Tent2017";
		  destrType = "DestructTent";
		  armor = 10;
		  model = "tent2017\A_tent";
		  displayName = "2017 Tent";
		  icon = "\Ca\misc3\data\Icons\icon_Atent_ca.paa";
		  mapSize = 3;
		 };
};