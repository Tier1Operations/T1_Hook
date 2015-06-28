


_unit = _this select 0;
_thrownHook = _this select 5;
_hookName = _this select 6;

if (_hookName == "Actual_hook") then{

sleep 0.01;

_veh1  = createVehicle ["C_Kart_01_Blu_F",getpos player,[], 0, ""];
_veh1 setpos  (player modelToWorld [0,1,0.1]);
_veh1 enableRopeAttach true;
_veh1 hideObject true;
_veh1 setDir ([_veh1, player] call BIS_fnc_dirTo);

_veh0  = createVehicle ["Sign_Sphere10cm_F",getpos _veh1,[], 0, ""];
_veh0 setPos [getPos _veh1 select 0, getPos _veh1 select 1,0.1];

_thrownHook enableRopeAttach true;
_thrownRope = ropeCreate [_veh1, [0,0,-1], _thrownHook, [0,0,0], 20];

sleep 5;

_thrownHook setDir ([_veh1, _thrownHook] call BIS_fnc_dirTo);

_veh3 =  createVehicle ["Sign_Sphere10cm_F", getpos _thrownHook, [],0,"CAN_COLLIDE"];
_veh3 enableSimulation false;
_veh3 enableRopeAttach true;
_veh3 attachTo [_thrownHook, [0,0,0.1], "ropepoint"]; // move rope to this pos


scopeName "main";
_vehT1 = getPosASL _veh0;

while {lineIntersects [_vehT1, getPosASL _veh3]} do {
	for [{_i=0},{_i>=-5},{_i=_i-0.25}] do {
	   	hint format ["_i = %1",_i];
	   	sleep 0.01;
	   	_veh3 attachTo [_thrownHook, [0,_i,0.1], "ropepoint"];
	   		if (!(lineIntersects [_vehT1, getPosASL _veh3])) then {
	   			_x =  getPosASL _veh3;
	   			_dir = getDir _veh1;
	   			//*************************************  Adjust position of the hook & add action on object
	   		 	_thrownHook enableSimulation false;
	   		 	_thrownHook setPosASL _x;
		   		_thrownHook setDir (_dir-180);


		   		//*************************************  Spawn actuall ORB 2, to attach robe to.
		   		_veh2 =  createVehicle ["Sign_Sphere10cm_F", getpos _veh3, [],0,"CAN_COLLIDE"];
	   			_veh2 setPosASL _x;
	   			_veh2 enableRopeAttach true;
	   			_veh2 setDir (_dir-180);

	   			//*************************************  Spawn ORB at the groundlevel below ORB 2.
	   			_veh4 =  createVehicle ["Sign_Sphere10cm_F", getpos player, [],0,"CAN_COLLIDE"];
	   			_veh4 setPosATL [getPos _veh2 select 0 - 0.3, getPos _veh2 select 1, 0.2];

				//*************************************  create new rope for better visual and less glitching & deleting the old
				_testRope1 = ropeCreate [_veh1, [0,0,-1], _veh2, [0,0,0], 20];
				deleteVehicle _thrownRope;

	   			//************************************* create arrays that are to be passed to the fnc.sqf's
	   			dPos = getPosATL _veh2; //top ORB (2)
	   			uPos = getPosATL _veh4; //bottom ORB (4)
	   			pDir = getDir _veh1;

				//*************************************  Add action Rope/player
				_tr1 = createTrigger ["EmptyDetector", [0, 0, 0]];
				sleep 1;
				_tr1 setPos [getPos _veh4 select 0, getPos _veh4 select 1, 0];
				_tr1 setTriggerActivation["ANY","PRESENT",true];
				_tr1 setTriggerArea [1.5,1.5,0,false];
				_tr1 setTriggerStatements [
				        "this AND (getPosATL player select 2) <=1",
				        "hint 'Du staar i triggern';
				       (getPosATL player select 2) < 1;
				        myAction1 = player addAction [
				            'Climb the rope',
				            {
					_run1 = [dPos,uPos,pDir] execVM 'hook\fnc\getUp.sqf';
					 },
				            thisTrigger,
				            10,
				            true,
				            true
				        ]",
				        "hint 'Trigger1';
				        player removeAction myAction1"
				];

				_tr2 = createTrigger ["EmptyDetector", [0, 0, 0]];
				sleep 1;
				_tr2 setPos [getPos _veh2 select 0, getPos _veh2 select 1, getPos _veh2 select 2];
				_tr2 setTriggerActivation["ANY","PRESENT",true];
				_tr2 setTriggerArea [1.5,1.5,0,false];
				_tr2 setTriggerStatements [
				        "this AND (getPosATL player select 2) >1",
				        "hint 'Du staar i triggern';
				         (getPosATL player select 2) > 1;
				        myAction2 = player addAction [
				            'Climb the rope',
				            {
					_run2 = [dPos,uPos,pDir] execVM 'hook\fnc\getDown.sqf';
					 },
				            thisTrigger,
				            10,
				            true,
				            true
				        ]",
				        "hint 'Trigger2';
				        player removeAction myAction2"
				];

				_tr3 = createTrigger ["EmptyDetector", [0, 0, 0]];
				sleep 1;
				_tr3 setPos [getPos _veh2 select 0, getPos _veh2 select 1, getPos _veh2 select 2];
				_tr3 setTriggerActivation["ANY","PRESENT",true];
				_tr3 setTriggerArea [1.5,1.5,0,false];
				_tr3 setTriggerStatements [
				        "this AND (getPosATL player select 2) >1",
				        "hint 'Du staar i triggern';
				         (getPosATL player select 2) > 1;
				        myAction3 = player addAction [
				            'Drop down the rope',
				            {
					_run2 = [dPos,pDir] execVM 'hook\fnc\fastDrop.sqf';
					 },
				            thisTrigger,
				            10,
				            true,
				            true
				        ]",
				        "hint 'Trigger3';
				        player removeAction myAction3"
				];

				deleteVehicle _veh3;
				breakTo "main";
			};
	};
hint "Something went wrong";
breakTo "main";
	};
};

		   		//_thrownHook setVectorUp [0,0,-0.5];
		   		//_thrownHook setVectorDirAndUp [[0,0.5,0.5],[0,-0.5,0.5]];
				//_thrownHook setDir ([_veh1, _thrownHook] call BIS_fnc_dirTo);
				//_thrownHook attachTo [_veh3, [0,0,0], ""];

				//_veh2 hideObject true;

				//_thrownHook addAction["Pick up the hook", "deleteVehicle _thrownHook;", nil, 6, True, True, "", "(_unit distance _thrownHook) < 1"];
				//_y = getPos _tr1;
				//hint format ["_y = %1",_y];
								//_testRope1 AddAction ["Climb the rope", "core.sqf", nil, 6, True, True, "", "(_testRope1 distance _this) < 2"]
								//************************************* Add action Hook