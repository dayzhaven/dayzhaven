private ["_cantype","_emptycan","_intensity","_objectID", "_objectUID"];

//Tent Object
_obj = _this select 3;
_objectID = _obj getVariable["ObjectID","0"];
_objectUID = _obj getVariable["ObjectUID","0"];

//Active Arrays.
_fuelArray = [];
_matchArray = [];

//Count how many matchbox's the player has incase they have more then one.
{
	if (_x IN items player) then {
		_matchArray set [count _matchArray, _x];
	};
} count Dayz_Ignators;

//Count how many fuelcans the player has incase they have more then one.
{
	if (_x IN magazines player) then {
		_fuelArray set [count _fuelArray, _x];
	};
} count DayZ_fuelCans;

//Play normal action animation
player playActionNow "Medic";

//Make sure we have both components to create the fire.
if ((count _fuelArray == 0)) exitwith { systemChat ("Unable to set on fire, missing fuel."); };
if ((count _matchArray == 0)) exitwith { systemChat ("Unable to set on fire, missing matches."); };

//Actionmenu tools
player removeAction s_player_destorytent;
s_player_destorytent = -1;

//Make sure you can only destory once
_alreadyDestorying = _obj getVariable["alreadyDestorying",0];

if (_alreadyDestorying == 1) exitWith {cutText ["This tent is already being set on fire." , "PLAIN DOWN"]};

_obj setVariable["alreadyDestorying",1];

//Jerry can system ** Needs redoing
//Select random can from array
_randomJerryCan = _fuelArray call BIS_fnc_selectRandom; 

_name = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "displayName");
_emptycan = getText (configFile >> "CfgMagazines" >> _randomJerryCan >> "emptycan");
_fireIntensity = getNumber (configFile >> "CfgMagazines" >> _randomJerryCan >> "fireIntensity");

//Pick the details based on the can chossen
/*
if (_randomJerryCan == "ItemJerrycan") then { _cantype = "ItemJerrycan"; _emptycan = "ItemJerrycanEmpty"; _intensity = 6; };
if (_randomJerryCan == "ItemFuelcan") then { _cantype = "ItemFuelcan"; _emptycan = "ItemFuelcanEmpty"; _intensity = 4; };
*/

player removeMagazine _randomJerryCan;
player addMagazine _emptycan;

//Match system ** Needs redoing 
//Select random matchbox
_randomBoxMatches = _matchArray call BIS_fnc_selectRandom; 
_qtyRemaining = getText (configFile >> "cfgWeapons" >> _randomBoxMatches >> "qtyRemaining");
/*
//Do removal of match ** Needs work
if (_randomBoxMatches == "Item5Matchbox") then { player removeWeapon "Item5Matchbox"; player addWeapon "Item4Matchbox"; };
if (_randomBoxMatches == "Item4Matchbox") then { player removeWeapon "Item4Matchbox"; player addWeapon "Item3Matchbox"; };
if (_randomBoxMatches == "Item3Matchbox") then { player removeWeapon "Item3Matchbox"; player addWeapon "Item2Matchbox"; };
if (_randomBoxMatches == "Item2Matchbox") then { player removeWeapon "Item2Matchbox"; player addWeapon "Item1Matchbox"; };
if (_randomBoxMatches == "Item1Matchbox") then { player removeWeapon "Item1Matchbox"; player addWeapon "ItemMatchboxEmpty"; };
*/

switch _randomBoxMatches do {
	case "ItemMatchbox" : { 
		_chance = getNumber (configFile >> "cfgWeapons" >> _randomBoxMatches >> "chance");
		if ((random 100) < _chance) then {
			player removeWeapon _randomBoxMatches;
			player addWeapon _qtyRemaining;
			
			//info box.
			systemChat (localize "str_info_limitedbox");	
		};	
	};
	default { 
		player removeWeapon _randomBoxMatches;
		player addWeapon _qtyRemaining;
	};
};


//Normal alerts 
_dis=20;
_sfx = "tentpack";
[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
[player,_dis,true,(getPosATL player)] call player_alertZombies;

sleep 3;

PVDZ_obj_Destroy = [_objectID,_objectUID];
publicVariableServer "PVDZ_obj_Destroy";

//Send killed for object
if (isServer) then {
	//[_obj, "killed"] call server_updateObject;
	PVDZ_obj_Destroy call server_deleteObj;
} else {
	PVDZ_veh_Save = [_obj, "killed"];
	publicVariableServer "PVDZ_veh_Save";
};

//Set fire to item
onFire = [_obj,_fireIntensity,time,false,true] spawn BIS_Effects_Burn;
_obj inflame true;
_obj call player_fireMonitor;

cutText [localize "str_success_tent_destoryed", "PLAIN DOWN"];