private["_soundVal","_array"];

_unit = _this;
_pos = getPosATL _unit;
_type = surfaceType _pos;
_typeA = toArray _type;
_typeA set [0,"DEL"];
_typeA = _typeA - ["DEL"];
_type = toString _typeA;
//_test = 0;

_soundType = getText (configFile >> "CfgSurfaces" >> _type >> "soundEnviron");
_soundVal = parseNumber format["%1",((getArray (configFile >> "CfgVehicles" >> "CAManBase" >> "SoundEnvironExt" >> _soundType) select 0) select 3)];

//diag_log format["Type: %1, SoundType: %2, SoundVal: %3",_type,_soundType,_soundVal];

if (_soundVal == 0) then {
	_soundVal = 25;
};
_array = [_soundType,_soundVal];
_array