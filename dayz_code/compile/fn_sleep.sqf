private ["_gun1","_gun2","_gun3","_gunShot","_sunrise"];
player setVariable ["dayz_sleep",dayz_sleep,true];
if (dayz_sleep > 360) then {

if(dayz_sleep == 720) then {
if((random 1) < 0.1) then {
_gun1 = "z_gun_shot_1";
_gun2 = "z_gun_shot_2";
_gun3 = "z_gun_shot_3";
_gunShot = [_gun1, _gun2, _gun3] call BIS_fnc_selectRandom;
playSound _gunShot;
};
};

if ((round(random 12) == 12)) then {
if (typeOf player != "SurvivorW2_DZ") then {
[nil,player,rSAY,["z_yawn", 40]] call RE;
} else {
[nil,player,rSAY,["z_yawn_fem", 40]] call RE;
};
};
};