private ["_gun1","_gun2","_gun3","_gunShot","_sunrise"];
diag_log("DAYZSLEEP EFFECTS:" + str(dayz_sleep));
player setVariable ["dayz_sleep",dayz_sleep,true];
if (dayz_sleep > 360) then {

if(dayz_sleep == 720) then {
if((random 1) < 0.5) then {
diag_log("Gunfire shot");
_gun1 = "z_gun_shot_1";
_gun2 = "z_gun_shot_2";
_gun3 = "z_gun_shot_3";
_gunShot = [_gun1, _gun2, _gun3] call BIS_fnc_selectRandom;
playSound _gunShot;
};
};

if ((round(random 8) == 8)) then {
if (typeOf player != "SurvivorW2_DZ") then {
player say ["z_yawn", 40];
sleep 3;
} else {
player say ["z_yawn_fem", 40];
sleep 3;
};
};
};