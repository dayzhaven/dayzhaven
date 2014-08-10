_item = _this select 3;
//_hasKnife = "ItemKnife" in items player;
//_hasKnifeBlunt = "ItemKnifeBlunt" in items player;
_type = typeOf _item;
_hasHarvested = _item getVariable["meatHarvested",false];
_config = configFile >> "CfgSurvival" >> "Meat" >> _type;

_knifeArray = [];

player removeAction s_player_butcher;
s_player_butcher = -1;

_PlayerNear = {isPlayer _x} count ((getPosATL _item) nearEntities ["CAManBase", 10]) > 1;
if (_PlayerNear) exitWith {cutText [localize "str_pickup_limit_5", "PLAIN DOWN"]};

//Count how many active tools the player has
{
	if (_x IN items player) then {
		_knifeArray set [count _knifeArray, _x];
	};
}count Dayz_Gutting;


if ((count _knifeArray > 0) and !_hasHarvested) then {
	private ["_qty"];
	
	//Select random can from array
	_activeKnife = _knifeArray call BIS_fnc_selectRandom; 
	
	//Get Animal Type
	_isListed = isClass (_config);
	_text = getText (configFile >> "CfgVehicles" >> _type >> "displayName");

	player playActionNow "Medic";

	_dis=10;
	_sfx = "gut";
	[player,_sfx,0,false,_dis] call dayz_zombieSpeak;
	[player,_dis,true,(getPosATL player)] call player_alertZombies;

	_item setVariable ["meatHarvested",true,true];

	_qty = 2;
	if (_isListed) then {
		_qty = getNumber (_config >> "yield");
	};

	if (_activeKnife == "ItemKnifeBlunt") then { _qty = round(_qty / 2); };

	if (local _item) then {
		[_item,_qty] spawn local_gutObject; //leave as spawn (sleeping in loops will work but can freeze the script)
	} else {
		//PVDZ_send = [_item,"GutBody",[_item,_qty]];
		//publicVariableServer "PVDZ_send";
		
		PVCDZ_obj_GutBody =[_item,_qty];
		publicVariable "PVCDZ_obj_GutBody";
		
		//achievement system
		if (!achievement_Gut) then {
			achievement_Gut = true;
		};
	};
	/*
	if ("ItemKnife5" in items player) then { player removeWeapon "ItemKnife5"; player addWeapon "ItemKnife4"; };
	if ("ItemKnife4" in items player) then { player removeWeapon "ItemKnife4"; player addWeapon "ItemKnife3"; };
	if ("ItemKnife3" in items player) then { player removeWeapon "ItemKnife3"; player addWeapon "ItemKnife2"; };
	if ("ItemKnife2" in items player) then { player removeWeapon "ItemKnife2"; player addWeapon "ItemKnife1"; };
	if ("ItemKnife1" in items player) then { player removeWeapon "ItemKnife1"; player addWeapon "ItemKnifeBlunt"; };
	
	if (_hasKnife) then {
		if (round(random 10) < 3) then {
			player removeWeapon "ItemKnife";
			player addWeapon "ItemKnife5";
			systemChat (localize "str_info_bluntknife");
		};
	};
	*/
	
	_sharpnessRemaining = getText (configFile >> "cfgWeapons" >> _activeKnife >> "sharpnessRemaining");

	//diag_log format["ActiveKnife: %1, Remaining: %2, Array: %3",_activeKnife,_sharpnessRemaining,_knifeArray];
	
	switch _activeKnife do {
		case "ItemKnife" : { 
			_chance = getNumber (configFile >> "cfgWeapons" >> _activeKnife >> "chance");
			if (floor(random 100) < _chance) then {
				player removeWeapon _activeKnife;
				player addWeapon _sharpnessRemaining;
				
				//info box.
				systemChat (localize "str_info_bluntknife");	
			};	
		};
		case "ItemKnifeBlunt" : { 
			//do nothing
		};
		default { 
			player removeWeapon _activeKnife;
			player addWeapon _sharpnessRemaining;
		};
	};	
	
	sleep 6;
	_string = format[localize "str_success_gutted_animal",_text,_qty];
	
	closedialog 0 ;
	sleep 0.02;
	cutText [_string, "PLAIN DOWN"];
};