class CfgPatches
{
 class Base_Building_2017
 {
  units[] = {"Garbage_container_DZ","Land_Misc_Scaffolding_DZ","UralWreck_DZ","datsun02Wreck_DZ","Land_KBud_DZ","Fort_Barricade_EP1_DZ","Land_fort_artillery_nest_DZ","Land_HBarrier1_DZ","Land_Shed_M03_DZ","vehicleShelter_us_DZ","Hhedgehog_concrete_DZ","Land_prebehlavka_DZ","Fence_corrugated_plate_DZ","Land_CncBlock_DZ","ZavoraAnim_DZ","Fort_RazorWire_DZ","Fence_Ind_DZ","Land_tent_east_DZ","Fence_Ind_long_DZ","UAZWreck_DZ","Land_prolejzacka_DZ","Fort_Barricade_DZ","Land_kulna_DZ","Land_tent_east_DZ","Land_Misc_deerstand_DZ"};
  weapons[] = {};
  requiredVersion = 0.1;
  requiredAddons[] = {"CAData","CAStructures","CAMisc","CAMisc2","CABuildings","CABuildings2"};
 };
};

 class CfgVehicleClasses
{
	class Base_Building_2017
	{
		displayName="2017 - Base Building Items";
	};
};

class CfgVehicles
{
//External Class Reference Start
 class Garbage_container; 
 class Land_Misc_Scaffolding;
 class UralWreck; 
 class datsun02Wreck; 
 class Land_KBud; 
 class Fort_Barricade_EP1;
 class Land_fort_artillery_nest;
 class Land_HBarrier1;
 class Land_Shed_M03; 
 class vehicleShelter_us;
 class Hhedgehog_concrete;
 class Land_prebehlavka; 
 class Fence_corrugated_plate;
 class Land_CncBlock; 
 class ZavoraAnim; 
 class Fort_RazorWire; 
 class Fence_Ind;
 class Fence_Ind_long; 
 class UAZWreck;
 class Land_prolejzacka; 
 class Fort_Barricade; 
 class Land_kulna; 
 class Land_tent_east;
 class Land_Misc_deerstand;
//External Class Reference Complete

	class Garbage_container_DZ: Garbage_container //External Class Reference
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Garbage Container (2017)";
	 transportMaxMagazines = 25;
	 transportMaxWeapons = 5;
	 transportMaxBackpacks = 3;
	 };
	 
	class UralWreck_DZ: UralWreck
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Ural Wreck (2017)";
	 };

	class Fort_Barricade_EP1_DZ: Fort_Barricade_EP1
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "FortBarricade EP1 (2017)";
	 };
	 
	class Land_fort_artillery_nest_DZ: Land_fort_artillery_nest
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Land fort artillery nest (2017)";
	 };
	 
	class Land_HBarrier1_DZ: Land_HBarrier1
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Scaffolding (2017)";
	 };

	class Land_KBud_DZ: Land_KBud
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Toilet (2017)";
	 };
	 
	class Land_Shed_M03_DZ: Land_Shed_M03
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Land Shed M03 (2017)";
	 };
	 
	class Land_Misc_Scaffolding_DZ: Land_Misc_Scaffolding
	 {
	 vehicleClass = "Base_Building_2017";
	 displayName = "Scaffolding (2017)";
	 };

	class datsun02Wreck_DZ: datsun02Wreck
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Datsun Wreck (2017)";
	 };
	 
	class vehicleShelter_us_DZ: vehicleShelter_us
	 {
	  scope = 2;
	  vehicleClass = "Base_Building_2017";
	  displayName = "vehicle Shelter (2017)";
	 };
	 
	class Hhedgehog_concrete_DZ: Hhedgehog_concrete
	 {
	  vehicleClass = "Base_Building_2017";
	  displayName = "Hedgehog concrete (2017)";
	 };
	 
	class Land_prebehlavka_DZ: Land_prebehlavka 
	 {
	  vehicleClass = "Base_Building_2017";
	  displayName = "Land Prebehlavka (2017)";
	 };
	 
	class Fence_corrugated_plate_DZ: Fence_corrugated_plate
	 {
	  vehicleClass = "Base_Building_2017";
	  displayName = "Fence corrugated plate (2017)";
	 };
	 
	class Land_CncBlock_DZ: Land_CncBlock
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Land CncBlock (2017)";
	 };
	 
	class ZavoraAnim_DZ: ZavoraAnim
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "ZavoraAnim (2017)";
	 };
	 
	class Fort_RazorWire_DZ: Fort_RazorWire
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Fort RazorWire (2017)";
	 };
	 
	class Fence_Ind_DZ: Fence_Ind
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Fence Industrial (2017)";
	 };
	 
	class Land_tent_east_DZ: Land_tent_east
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Land Tent (2017)";
	 };
	 
	class Fence_Ind_long_DZ: Fence_Ind_long
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Fence Industrial long (2017)";
	 };
	 
	class UAZWreck_DZ: UAZWreck
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "UAZ Wreck (2017)";
	 };
	 
	class Land_prolejzacka_DZ: Land_prolejzacka
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Land prolejzacka (2017)";
	 };
	 
	class Fort_Barricade_DZ: Fort_Barricade
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Fort Barricade (2017)";
	 };
	 
	class Land_kulna_DZ: Land_kulna
	 {
	 vehicleClass = "Base_Building_2017";
	  displayName = "Outside Toilet (2017)";
	 };
	 
	class Land_Misc_deerstand_DZ: Land_Misc_deerstand
	{
	 vehicleClass = "Base_Building_2017";
	  displayName = "Deerstand (2017)";
	 };
};

  

	 