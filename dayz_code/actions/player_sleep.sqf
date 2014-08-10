private ["_lastRest"];
//_timesincedrink = time - dayz_lastDrink;
//_bloodinc =100; Removed for now(untested) due to it not needed yet

//http://community.bistudio.com/wiki/ArmA2:_Moves

player playActionNow "PutDown";
sleep 1;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_layDown";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_layDown"};
sleep 5;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_lookAround";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_lookAround"};
sleep 5;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_scratch";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_scratch"};
sleep 5;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep"};
sleep 5;
player playMove "AidlPpneMstpSnonWnonDnon_SleepC_sleep0";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_sleep0"};
sleep 5;

//dayz_lastMeal = time;
//dayz_hunger = 0;

//1% chance every 5 mins to remove infection
_lastRest = player getVariable ["lastRest", 0];
if (diag_ticktime - _lastRest > 300) then { 
	player setVariable ["lastRest", diag_ticktime];
	//add infection chance for cure
	if (floor(random 100) < 10) then {
		r_player_infected = false;
		player setVariable["USEC_infected",false,false];
		
		PVDZ_serverStoreVar = [player,"USEC_infected",false];
		publicVariableServer "PVDZ_serverStoreVar";
	};
};	

PVDZ_plr_Save = [player,nil,true,dayz_playerAchievements];
publicVariableServer "PVDZ_plr_Save";
//End Effects

player playMove "AidlPpneMstpSnonWnonDnon_SleepC_standUp";
waitUntil { animationState player != "AidlPpneMstpSnonWnonDnon_SleepC_standUp"};