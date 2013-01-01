private["_hasRawMeat","_hasFoodTin","_item","_wait"];

player removeAction s_player_humancook;
s_player_humancook = -1;

_qty = {_x == "RawHumanFlesh"} count magazines player;
_wait = 5 - _qty;

if ("RawHumanFlesh" in magazines player) then {
	player playActionNow "Medic";
	[player,"cook",0,true] call dayz_zombieSpeak;
	_id = [player,70,true,(getPosATL player)] spawn player_alertZombies;
	sleep _wait;
	for "_x" from 1 to _qty do {
		_hasRawMeat = 	"RawHumanFlesh" in magazines player;
		if (!_hasRawMeat) exitWith {cutText [format[(localize "str_player_31"),_text,"cook"] , "PLAIN DOWN"]};
		player removeMagazine "RawHumanFlesh";
		player addMagazine "HumanFleshCooked";
		sleep 1;
	};	
	cutText [format[(localize  "str_success_cooked"),_qty,(localize  "STR_EQUIP_NAME_24")], "PLAIN DOWN"];
};

/*
_hasRawMeat = 	"RawHumanFlesh" in magazines player;
_qty = {_x == "ItemWaterbottleUnfilled"} count magazines player;

if (_hasRawMeat) then {
	player removeMagazine "RawHumanFlesh";
	player playActionNow "Medic";
	[player,"eat",0,false] call dayz_zombieSpeak;
	sleep 6;
	player addMagazine "HumanFleshCooked";
	cutText [localize "str_success_human_cooked", "PLAIN DOWN"];
};
*/
