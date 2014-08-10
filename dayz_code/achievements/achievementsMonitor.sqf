private ["_visitedList", "_supermarketCount", "_hospitalCount", "_officeCount", "_fireStationCount", "_pubCount", "_timeWasterValue", "_startTime", "_timeWasterValue", "_building", "_buildingType", "_grave"];
sleep 10;

_visitedList = [];
_supermarketCount = 0;
_supermarketA1 = false;
_supermarketA2 = false;
_hospitalCount = 0;
_hospitalA1 = false;
_officeCount = 0;
_officeA1 = false;
_fireStationCount = 0;
_fireStationA1 = false;
_pubCount = 0;
_pubA1 = false;
_atcCount = 0;
_atcA1 = false;
_churchCount = 0;
_churchA1 = false;
_timeWasterValue = 3600;	// 1 hour
_timeWaster = false;
_highFlyer = false;
_graveRobber = false;

achievement_LitterCount = 0;
achievement_Raw = false;
achievement_Gut = false;
achievement_Fire = false;
achievement_SteadyAim = false;
achievement_Marksman = false;
achievement_Sniper = false;

_startTime = diag_ticktime;

while {alive player} do {

//diag_log ("Running Monitor" + str(dayz_playerAchievements));

	
	// Time Waster - have been playing for over _timeWasterValue second in a single session
	if (dayz_playerAchievements select 0 < 1) then {
		if ((_startTime > -1) && (diag_ticktime - _startTime >= _timeWasterValue)) then {
			_startTime = -1;	// stop checking
			dayz_playerAchievements set [0,1];
			achievement = [0, player, dayz_characterID];
			publicVariableServer "achievement";
			_timeWaster = true;
		};
	};

	// High Flyer - find yourself over 500m ATL
	if (dayz_playerAchievements select 1 < 1) then {
		if ((getPosATL player select 2 > 500) && !_highFlyer) then {
			dayz_playerAchievements set [1,1];
			achievement = [1, player, dayz_characterID];
			publicVariableServer "achievement";
			_highFlyer = true;
		};
	};

	// Grave robber - stand within 3 meters of a mass grave
	if (dayz_playerAchievements select 2 < 1) then {
		_grave = nearestObject [player, "Mass_grave"];
		if (!isNull _grave && !_graveRobber) then {
			if (player distance _grave < 8) then {		
				dayz_playerAchievements set [2,1];
				achievement = [2, player, dayz_characterID];
				publicVariableServer "achievement";
				_graveRobber = true;
			};
		};
	};
	
	//LitterCount
	if (dayz_playerAchievements select 11 < 1) then {
		if (achievement_LitterCount == 5) then {
			achievement_LitterCount = -1;
			dayz_playerAchievements set [11,1];
			achievement = [11, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};
	//Gutting
	if (dayz_playerAchievements select 13 < 1) then {
		if (achievement_Gut) then {
			dayz_playerAchievements set [13,1];
			achievement = [13, player, dayz_characterID];
			publicVariableServer "achievement";
		};
	};

	// Building checker - counts the number of unique buildings (of a certain type) you visit
	_building = nearestObject [player, "HouseBase"];
	if(!isNull _building) then {
		if (!(_building in _visitedList)) then {
			if ([player,_building] call fnc_isInsideBuilding) then {
				_buildingType = typeOf _building;
				if (_buildingType in ["Land_A_GeneralStore_01a","Land_A_GeneralStore_01"]) then {_supermarketCount = _supermarketCount + 1;};
				if (_buildingType == "Land_A_Hospital") then {_hospitalCount = _hospitalCount + 1;};
				if (_buildingType == "Land_A_Office01") then {_officeCount = _officeCount + 1;};
				if (_buildingType == "Land_a_stationhouse") then {_fireStationCount = _fireStationCount + 1;};
				if (_buildingType == "Land_A_Pub_01") then {_pubCount = _pubCount + 1;};
				if (_buildingType == "Land_Mil_ControlTower") then {_atcCount = _atcCount + 1;};
				if (_buildingType == "Land_Church_03") then {_churchCount = _churchCount + 1;};

				_visitedList = _visitedList + [_building];	// add the building to the array so we don't check again
				
				// Publish the results
				if (dayz_playerAchievements select 3 < 1) then {
					if (_supermarketCount == 5 && !_supermarketA1) then {
						dayz_playerAchievements set [3,1];
						achievement = [3, player, dayz_characterID];
						publicVariableServer "achievement";
						_supermarketA1 = true;
					};
				};	
				if (dayz_playerAchievements select 4 < 1) then {
					if (_supermarketCount == 10 && !_supermarketA2) then {
						dayz_playerAchievements set [4,1];
						achievement = [4, player, dayz_characterID];
						publicVariableServer "achievement";
						_supermarketA2 = true;
					};
				};
				if (dayz_playerAchievements select 5 < 1) then {				
					if (_hospitalCount == 4 && !_hospitalA1) then {
						dayz_playerAchievements set [5,1];
						achievement = [5, player, dayz_characterID];
						publicVariableServer "achievement";
						_hospitalA1 = true;
					};
				};	
				if (dayz_playerAchievements select 6 < 1) then {
					if (_officeCount == 3 && !_officeA1) then {
						dayz_playerAchievements set [6,1];
						achievement = [6, player, dayz_characterID];
						publicVariableServer "achievement";
						_officeA1 = true;
					};
				};
				if (dayz_playerAchievements select 7 < 1) then {
					if (_fireStationCount == 4 && !_fireStationA1) then {
						dayz_playerAchievements set [7,1];
						achievement = [7, player, dayz_characterID];
						publicVariableServer "achievement";
						_firestationA1 = true;
					};	
				};
				if (dayz_playerAchievements select 8 < 1) then {				
					if (_pubCount == 8 && !_pubA1) then {
						dayz_playerAchievements set [8,1];
						achievement = [8, player, dayz_characterID];
						publicVariableServer "achievement";
						_pubA1 = true;
					};
				};
				if (dayz_playerAchievements select 9 < 1) then {
					if (_atcCount == 3 && !_atcA1) then {
						dayz_playerAchievements set [9,1];
						achievement = [9, player, dayz_characterID];
						publicVariableServer "achievement";
						_atcA1 = true;
					};
				};
				if (dayz_playerAchievements select 10 < 1) then {
					if (_churchCount == 3 && !_churchA1) then {
						dayz_playerAchievements set [10,1];
						achievement = [10, player, dayz_characterID];
						publicVariableServer "achievement";
						_churchA1 = true;
					};
				};
			};
		};
	};
	// too quick and FPS suffers, to slow and events may get missed
	sleep 1;
};