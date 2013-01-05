////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 3.52
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

enum {
	stabilizedinaxisx = 1,
	compartment1 = 1,
	stabilizedinaxisy = 2,
	compartment2 = 2,
	stabilizedinaxesboth = 3,
	compartment3 = 4,
	compartment4 = 8,
	stabilizedinaxesnone= 0
};

//Class air_e : An2\config.bin{
class CfgPatches
{
 class 2017_Plane
 {
  units[] = {"An22017"};
  weapons[] = {};
  requiredVersion = 1.02;
  requiredAddons[] = {"CAAir_E"};
 };
};

class CfgVehicleClasses
{
	class 2017_AIR_CLASS
	{
		displayName="2017 - Vehicles";
	};
}

class CfgVehicles
{
 class Air;
 class Plane: Air
 {
  class HitPoints;
 };
 class An2_Base_EP1: Plane
 {
  expansion = 1;
  destrType = "DestructWreck";
  class Library
  {
   libTextDesc = "$STR_EP1_LIB_An2";
  };
  vehicleClass = "Air";
  model = "\ca\air_e\An2\An2.p3d";
  picture = "\ca\air_e\data\UI\Picture_an2_CA.paa";
  icon = "\ca\air_e\data\UI\Icon_an2_CA.paa";
  mapSize = 20;
  memoryPointsGetInCargo[] = {"pos cargo"};
  memoryPointsGetInCargoDir[] = {"pos cargo dir"};
  memoryPointsGetInDriver = "pos cargo";
  memoryPointsGetInDriverDir = "pos cargo dir";
  getInAction = "GetInHigh";
  getOutAction = "GetOutHigh";
  cargoGetInAction[] = {"GetInHigh"};
  cargoGetOutAction[] = {"GetOutHigh"};
  accuracy = 0.15;
  cost = 20000;
  armor = 25;
  damageResistance = 0.00278;
  driverAction = "AN2_Pilot_EP1";
  cargoAction[] = {"AN2_Cargo_EP1","AN2_Cargo01_EP1","AN2_Cargo02_EP1","AN2_Cargo01_EP1","AN2_Cargo03_EP1","AN2_Cargo02_EP1","AN2_Cargo01_EP1","AN2_Cargo03_EP1","AN2_Cargo01_EP1","AN2_Cargo03_EP1","AN2_Cargo02_EP1","AN2_Cargo01_EP1","AN2_Cargo02_EP1","AN2_Cargo02_EP1","AN2_Cargo03_EP1"};
  cargoIsCoDriver[] = {1,0};
  transportSoldier = 15;
  driverCompartments = "Compartment1";
  cargoCompartments[] = {"Compartment1"};
  soundGetIn[] = {"ca\sounds_E\Air_E\AN2\close",0.31622776,1};
  soundGetOut[] = {"ca\sounds_E\Air_E\AN2\open",0.31622776,1,40};
  soundDammage[] = {"ca\Sounds\Air\Noises\alarm_loop1",0.56234133,1};
  soundEngineOnInt[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_start_int",0.17782794,1.0};
  soundEngineOnExt[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_start_ext",0.39810717,1.0,600};
  soundEngineOffInt[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_stop_int",0.17782794,1.0};
  soundEngineOffExt[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_stop_ext",0.39810717,1.0,600};
  class Sounds
  {
   class EngineLowOut
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_low_ext",1.7782794,1,900};
    frequency = "1.0 min (rpm + 0.5)";
    volume = "camPos*engineOn*(rpm factor[0.85, 0])";
   };
   class EngineHighOut
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_high_ext",1.7782794,1,1100};
    frequency = "1";
    volume = "camPos*engineOn*(rpm factor[0.25, 1.0])";
   };
   class ForsageOut
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_high_ext",1.4125376,1.2,1100};
    frequency = "1";
    volume = "camPos*engineOn*(thrust factor[0.5, 1.0])";
    cone[] = {1.14,3.92,2.5,0.4};
   };
   class WindNoiseOut
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\ext-wind",0.001,0.6,150};
    frequency = "(0.1+(1.2*(speed factor[1, 100])))";
    volume = "camPos*(speed factor[1, 100])";
   };
   class EngineLowIn
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_low_int",1.7782794,1.0};
    frequency = "1.0 min (rpm + 0.5)";
    volume = "(1-camPos)*(engineOn*(rpm factor[0.65, 0]))";
   };
   class EngineHighIn
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_high_int",1.7782794,1.0};
    frequency = "1";
    volume = "(1-camPos)*(engineOn*(rpm factor[0.25, 1.0]))";
   };
   class ForsageIn
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\AN2_engine_high_int",1.7782794,1.2};
    frequency = "1";
    volume = "(1-camPos)*(engineOn*(thrust factor[0.5, 1.0]))";
   };
   class WindNoiseIn
   {
    sound[] = {"ca\sounds_E\Air_E\AN2\int-wind",0.001,0.6};
    frequency = "(0.1+(1.2*(speed factor[1, 100])))";
    volume = "(1-camPos)*(speed factor[1, 100])";
   };
  };
  gearRetracting = 0;
  cabinOpening = 0;
  class Reflectors
  {
   class Left
   {
    color[] = {0.8,0.8,1.0,1.0};
    ambient[] = {0.07,0.07,0.07,1.0};
    position = "L svetlo";
    direction = "konec L svetla";
    hitpoint = "L svetlo";
    selection = "L svetlo";
    size = 1;
    brightness = 1.0;
   };
   class Right
   {
    color[] = {0.8,0.8,1.0,1.0};
    ambient[] = {0.07,0.07,0.07,1.0};
    position = "P svetlo";
    direction = "konec P svetla";
    hitpoint = "P svetlo";
    selection = "P svetlo";
    size = 1;
    brightness = 1.0;
   };
  };
  weapons[] = {};
  magazines[] = {};
  threat[] = {0.0,0.0,0.0};
  airBrake = 1;
  maxSpeed = 258;
  landingSpeed = 70;
  flapsFrictionCoef = 0.8;
  aileronSensitivity = 1;
  elevatorSensitivity = 0.8;
  envelope[] = {0.0,0.1,1.0,1.8,2.8,3.3,3.5,3.2,2.6,2.0,1.5,1.0,0.5,0.0};
  wheelSteeringSensitivity = 1;
  ejectSpeed[] = {0,0,0};
  extCameraPosition[] = {0,5,-20};
  lightOnGear = 0;
  class HitPoints: HitPoints
  {
   class HitGlass1
   {
    armor = 0.1;
    material = -1;
    name = "glass1";
    visual = "glass1";
    passThrough = 0;
   };
   class HitGlass2
   {
    armor = 0.1;
    material = -1;
    name = "glass2";
    visual = "glass2";
    passThrough = 0;
   };
   class HitGlass3
   {
    armor = 0.1;
    material = -1;
    name = "glass3";
    visual = "glass3";
    passThrough = 0;
   };
   class HitGlass4
   {
    armor = 0.1;
    material = -1;
    name = "glass4";
    visual = "glass4";
    passThrough = 0;
   };
  };
  class AnimationSources
  {
   class HitGlass1
   {
    source = "Hit";
    hitpoint = "HitGlass1";
    raw = 1;
   };
   class HitGlass2: HitGlass1
   {
    hitpoint = "HitGlass2";
   };
   class HitGlass3: HitGlass1
   {
    hitpoint = "HitGlass3";
   };
   class HitGlass4: HitGlass1
   {
    hitpoint = "HitGlass4";
   };
  };
  class Damage
  {
   tex[] = {};
   mat[] = {"ca\Air_E\an2\Data\an2_1.rvmat","ca\Air_E\an2\Data\an2_1_damage.rvmat","ca\Air_E\an2\Data\an2_1_destruct.rvmat","ca\Air_E\an2\Data\an2_2.rvmat","ca\Air_E\an2\Data\an2_2_damage.rvmat","ca\Air_E\an2\Data\an2_2_destruct.rvmat","ca\Air_E\an2\Data\an2_interier.rvmat","ca\Air_E\an2\Data\an2_interier_damage.rvmat","ca\Air_E\an2\Data\an2_interier_destruct.rvmat","Ca\Air_E\An2\Data\an2_cockpit.rvmat","Ca\Air_E\An2\Data\an2_cockpit_damage.rvmat","Ca\Air_E\An2\Data\an2_cockpit_destruct.rvmat","ca\Air_E\an2\Data\an2_wings.rvmat","ca\Air_E\an2\Data\an2_wings_damage.rvmat","ca\Air_E\an2\Data\an2_wings_destruct.rvmat","ca\Air_E\an2\Data\an2_window.rvmat","ca\Air_E\an2\Data\an2_window_damage.rvmat","ca\Air_E\an2\Data\an2_window_destruct.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default.rvmat","Ca\Ca_E\data\default_destruct.rvmat"};
  };
  irScanRangeMin = 100;
  irScanRangeMax = 1000;
  irScanToEyeFactor = 2;
 };
 class An22017: An2_Base_EP1
 {
  scope = 2;
  side = 3;
  faction = "BIS_TK_CIV";
  displayname = "2017 An2 Civil";
  crew = "TK_CIV_Takistani01_EP1";
  vehicleClass="2017_AIR_CLASS";
  typicalCargo[] = {"TK_CIV_Takistani01_EP1"};
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"an2_2017\textures\an2_1_A_CO","an2_2017\textures\an2_2_A_CO","an2_2017\textures\an2_wings_A_CO"};
 };
 /* class An2_2_TK_CIV_EP1: An2_1_TK_CIV_EP1
 {
  displayname = "$STR_EP1_DN_An2_2_TK_CIV";
  hiddenSelections[] = {"Camo1","Camo2","Camo3"};
  hiddenSelectionsTextures[] = {"ca\Air_E\An2\Data\an2_1_B_CO","ca\Air_E\An2\Data\an2_2_B_CO","ca\Air_E\An2\Data\an2_wings_B_CO"};
 };
 class An2_TK_EP1: An2_Base_EP1
 {
  scope = 2;
  side = 0;
  faction = "BIS_TK";
  displayname = "$STR_EP1_DN_An2_TK";
  crew = "TK_Soldier_Pilot_EP1";
  typicalCargo[] = {"TK_Soldier_Pilot_EP1"};
  hiddenSelectionsTextures[] = {"ca\Air_E\An2\Data\an2_1_CO","ca\Air_E\An2\Data\an2_2_CO","ca\Air_E\An2\Data\an2_wings_CO"};
 }; */
};
//};
