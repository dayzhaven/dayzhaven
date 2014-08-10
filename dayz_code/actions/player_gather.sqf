private ["_plant","_type","_itemOut","_amountOut","_alreadyGathering","_dis","_sfx","_r","_l","_i","_result","_string","_text"];

_plant = _this select 3;

_type = typeOf _plant;
_itemOut = getText(configFile >> "CfgVehicles" >> _type >> "output");
_amountOut = getNumber(configFile >> "CfgVehicles" >> _type >> "outamount");

//kneel to gather
player playActionNow "Medic";

//remove action menu
player removeAction s_player_gather;
s_player_gather = -1;

//check if already gathering
_alreadyGathering = _plant getVariable["Gathering",0];
if (_alreadyGathering == 1) exitWith { };

//Set to gather
_plant setVariable["Gathering",1];

//Make some noise
_dis=2;
_sfx = "tentpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

sleep 3;

_r = 0;
_l = 0;
_i = 0;

//Remove melee ammo due to the way ammo is working.
{player removeMagazines _x} count MeleeMagazines;

while {_i < _amountOut} do {
	//diag_log format["ItemOut: %1, Amount: %2",_itemOut,_amountOut];

	_result = [player,_itemOut] call BIS_fnc_invAdd;

	sleep 0.03;

	if (_result) then {
		//Pickup Counter
		_r = _r + 1;
	} else {
		//Lost counter
		_l = _l + 1;
	};
	
	//Reset anti dupe var on successful. 
	_plant setVariable["Gathering",nil];
	
	//remove vehicle, Need to ask server to remove.
	PVDZ_obj_Delete = [_plant,player];
	publicVariableServer "PVDZ_obj_Delete";
	
	//Loop Counter
	_i = _i + 1;
};

if (_l > 0) then { ["Magazine",_itemOut,_l] call dayz_dropItem; };

if (_r > 0) then {
	//Cutext on successful pickup
	_string = format[localize "str_success_gathered",getText(configFile >> "CfgMagazines" >> _itemOut >> "displayName"), _r, _l];
	cutText [_string, "PLAIN DOWN"];
};

if (_r < 1) then {
	//reset anti dupe on failed attempt
	_plant setVariable["Gathering",nil];
	
	//Failed Msg due to invenotry being full.
	_text = getText (configFile >> "CfgMagazines" >> _type >> "displayName");
	cutText [format[localize "str_failed_noroom",_text], "PLAIN DOWN"];
};

//adding melee mags back if needed
_wpn = primaryWeapon player;
//diag_log format["Classname: %1, WPN: %2", _classname,_wpn];
_ismelee = (gettext (configFile >> "CfgWeapons" >> _wpn >> "melee"));
if (_ismelee == "true") then {
	call dayz_meleeMagazineCheck;
};