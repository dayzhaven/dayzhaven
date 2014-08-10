private["_item","_onLadder","_hasmeditem","_config","_text","_id"];

_item = _this;

//Other initail info
call gear_ui_init;
_onLadder = (getNumber (configFile >> "CfgMovesMaleSdr" >> "States" >> (animationState player) >> "onLadder")) == 1;

//Get config info
_config = configFile >> "CfgMagazines" >> _item;
_removeWeapon = getText (_config >> "oringal");
_addWeapon = getText (_config >> "weapon");
_text = getText (_config >> "displayName");

//item checks
_hasitem = _item in magazines player;

//fail saves
if (!_hasitem) exitWith { cutText [format[("You seem to be missing %1 attachment"),_text] , "PLAIN DOWN"]};
if (_onLadder) exitWith { cutText [(localize "str_player_21") , "PLAIN DOWN"] };

if (_removeWeapon in (weapons player)) then { 
		player removeMagazine _item;
		player removeWeapon _removeWeapon;
		player addWeapon _addWeapon; 

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};
} else {
	closedialog 0;
	sleep 0.2;
	cutText [format[("Unable to attach %2, Missing wepaon %1"),_removeWeapon,_text] , "PLAIN DOWN"]
};	

/*
if (_primaryweapon == (primaryWeaponplayer)) then { 
diag_log ("UseAttchment primaryWeapon active");
		player removeMagazine _item;
		player removeWeapon (primaryWeapon player);
		player addWeapon _createdweapon; 

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};
};	

if (_primaryweapon == (secondaryWeapon player)) then { 
diag_log ("UseAttchment secondaryWeapon active");	
		player removeMagazine _item;
		player removeWeapon (secondaryWeapon player);
		player addWeapon _createdweapon; 

	if (vehicle player != player) then {
		_display = findDisplay 106;
		_display closeDisplay 0;
	};
};	
*/