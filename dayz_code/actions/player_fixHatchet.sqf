private ["_hatchet","_tape","_fixedHatchet"];

_hatchet = _this;
_tape = "equip_duct_tape";
_wood = "PartWoodPile";
_fixedHatchet = "ItemHatchet";
call gear_ui_init;
closeDialog 0;

// Check if the player has the tape
if ((_tape in magazines player) && (_wood in magazines player)) then {
	//Fix the bottle
	player playActionNow "Medic";
	[player,"bandage",0,false] call dayz_zombieSpeak;
	sleep 6;
	player removeWeapon _hatchet;
	player removeMagazine _tape;
	player removeMagazine _wood;
	player addWeapon _fixedHatchet;
	cutText ["You have fixed the Hatchet.", "PLAIN DOWN"];
} else {		//If the player doesn't have the mats.
	if (!(_tape in magazines player)) then {
		if (!(_wood in magazines player)) then {
			cutText ["Maybe you can fix it with tape and some wood.", "PLAIN DOWN"];
		} else {
			cutText ["You will need some tape for this.", "PLAIN DOWN"];
		};
	} else {
		cutText ["You will need some wood for this.", "PLAIN DOWN"];
	};
};