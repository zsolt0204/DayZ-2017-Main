private["_hasRawMeat","_hasFoodTin","_item","_wait"];

player removeAction s_player_zedcook;
s_player_zedcook = -1;

_qty = {_x == "RawInfectedFlesh"} count magazines player;
_wait = 5 - _qty;

if ("RawInfectedFlesh" in magazines player) then {
	player playActionNow "Medic";
	[player,"cook",0,true] call dayz_zombieSpeak;
	_id = [player,70,true,(getPosATL player)] spawn player_alertZombies;
	sleep _wait;
	for "_x" from 1 to _qty do {
		_hasRawMeat = 	"RawInfectedFlesh" in magazines player;
		if (!_hasRawMeat) exitWith {cutText [format[(localize "str_player_31"),_text,"cook"] , "PLAIN DOWN"]};
		player removeMagazine "RawInfectedFlesh";
		player addMagazine "InfectedFleshCooked";
		sleep 1;
	};	
	cutText [format[(localize  "str_success_human_cooked"),_qty,(localize  "STR_EQUIP_NAME_24")], "PLAIN DOWN"];
};

/*
_hasRawMeat = 	"RawInfectedFlesh" in magazines player;
_qty = {_x == "ItemWaterbottleUnfilled"} count magazines player;

if (_hasRawMeat) then {
	player removeMagazine "RawInfectedFlesh";
	player playActionNow "Medic";
	[player,"eat",0,false] call dayz_zombieSpeak;
	sleep 6;
	player addMagazine "InfectedFleshCooked";
	cutText [localize "str_success_human_cooked", "PLAIN DOWN"];
};
*/
