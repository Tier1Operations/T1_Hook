				hint "running script DOWN";
				sleep 0.01;

				_ms = 4; // credit to LuLeBe
				_d = 0;

				_s = _ms / 200;
				_v = _this select 0;
				_i = _this select 1;
				_lift  = createVehicle ["Sign_Sphere10cm_F",getpos player,[], 0, ""];
				_lift  setPos [_v select 0,_v select 1,_v select 2];
				_lift setdir (_i - 180);

				player switchMove "AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon";
				waituntil {animationState player != "AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon"};
				player switchMove "Anim_rope_NoMoveLoop";

				player attachTo [_lift, [0,-0.2,_d]];
				while {(getPosATL player select 2) > 0} do {
					player attachTo [_lift, [0,-0.8,_d]];
					_d = _d - _s;
					sleep 0.005;
				};
				player switchMove "AmovPercMstpSrasWrflDnon";
				detach player;

				hint "script DOWN stopped";

				// change to : while attached if key S pressed, move x iterations down (play animation), if key W pressed move x iterations up (play animation).