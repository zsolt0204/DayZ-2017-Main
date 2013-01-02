class CfgPatches
{
class ice_apo_vehicles_patch
{
units[] = {};
weapons[] = {};
requiredVersion = 1.0;
requiredAddons[] = {};
};
}; 


class CfgVehicleClasses
{
	class ice_apo_vehicles
	{
		displayName = "APC Cars";
	};
	
	

};


class CfgFactionClasses
{
	class ice_apo_vehicles_fa
	{
		displayName = "Post APC - Vehicles";
		priority = 40;
		side = 2;
	};
	
	
	

};




class CfgVehicles
{
class Land;	// External class reference
class SkodaBase;
class CarWreck;

class ice_apo_car_skoda : SkodaBase
{
	scope = 2;
	faction = "ice_apo_vehicles_fa";
	vehicleclass="ice_apo_vehicles";
	crew = "ice_apo_resistance_medium_rifleman_hood_beard_AK";
	side = 2;
	model = "\ice_apo_vehicles\skoda_carry.p3d";
	displayName = "Travel Car";
	destrType = "DestructWreck";
	transportSoldier = 2;
		class Library
	{
		libTextDesc = "Old Car.";
	};
	
	}
	
	
			class apc_skoda_Wreck : CarWreck
		{
			scope = 1;
			class Armory
			{
				disabled = 1;
			};
			model = "\ice_apo_vehicles\skoda_carry_wreck.p3d";
			typicalCargo[] = {
			};
			irTarget = 0;
			transportAmmo = 0;
			transportRepair = 0;
			transportFuel = 0;
			transportSoldier = 1;
			class Eventhandlers
			{
			};
		};

class ice_apo_car_skoda_enhanced : ice_apo_car_skoda
{
	scope = 2;

	crew = "ice_apo_resistance_medium_rifleman_hood_beard_AK";

	model = "\ice_apo_vehicles\skoda_carry_enf.p3d";
	displayName = "Car (Enforced)";

	side = 2;
	transportSoldier = 3;
	armor=15;
	armorStructural=20.0;
	armorHull=20;
	armorTurret=0.8;
	armorGun=0.6;
	armorEngine=0.8;
	armorLights=0.4;
	armorWheels=0.5;
	destrType = "DestructWreck";

	maxSpeed = 85;
	class Library
	{
		libTextDesc = "Old car reeinforced with plates.";
	};

	class Damage
			{
			tex[] = {
			};
			mat[] = {
				"ca\wheeled\data\skodovka.rvmat",
				"ice_apo_vehicles\skodovka_destruct.rvmat",
				"ice_apo_vehicles\skodovka_destruct.rvmat",					
				"ca\wheeled\data\detailmapy\auta_skla.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_damage.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_in.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat",
				"ca\wheeled\data\detailmapy\auta_skla_in_damage.rvmat"
			};
		};	 


};

			class apc_skoda_enf_Wreck : CarWreck
		{
			scope = 1;
			class Armory
			{
				disabled = 1;
			};
			model = "\ice_apo_vehicles\skoda_carry_enf_wreck.p3d";
			typicalCargo[] = {
			};
			irTarget = 0;
			transportAmmo = 0;
			transportRepair = 0;
			transportFuel = 0;
			transportSoldier = 1;
			class Eventhandlers
			{
			};
		};
		
// class hilux1_civil_1_open_apo:hilux1_civil_1_open
// {
// model = "\ice_apo_vehicles\hilux_open.p3d";
// displayName = "Pickup";
// }

}; 