				hint "running script";
				sleep 0.01;
				_movePos1 = ATLToASL (player modeltoworld [0,3,6]); //lent from Laxman
				hint format ["_movePos1 = %1",_movePos1];
				player setPosASL _movePos1;
				player removeAction _myAction1;

				_myAction2 = player AddAction [ "Climb down", {
				sleep 0.01;
				_movePos2 = ATLToASL (player modeltoworld [0,3,-5]); //lent from Laxman
				hint format ["_movePos2 = %1",_movePos2];
				player setPosASL _movePos2;
				player removeAction _myAction2;
				 } ];
				hint "script stopped";