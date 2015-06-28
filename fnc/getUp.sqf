

    // credit Igi, Jonas Nagel (Fireball) & others from scriptmakerchan for tips & trix

climbUp = false;
(findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) == 17) then {climbUp = true}; false;"];
(findDisplay 46) displayAddEventHandler ["KeyUp","if ((_this select 1) == 17) then {climbUp = false}; false;"];

climbDown = false;
(findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) == 31) then {climbDown = true}; false;"];
(findDisplay 46) displayAddEventHandler ["KeyUp","if ((_this select 1) == 31) then {climbDown = false}; false;"];


sleep 0.01;

_ms = 4; // credit to LuLeBe
_d = 0.9;

_s = _ms / 700;
_v = _this select 0;
_p= _this select 1;
_o = _this select 2;
_f = _v select 2;
keepClimb = true;


_lift0  = createVehicle ["Sign_Sphere10cm_F",getpos player,[], 0, ""];
_lift0  setPos [_v select 0,_v select 1,0];
_lift0 setDir (_o-180);

player switchMove "AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon";
waituntil {animationState player != "AmovPercMstpSrasWrflDnon_AmovPercMstpSnonWnonDnon"};
player switchMove "Anim_rope_NoMove";

player attachTo [_lift0, [0,-0.6,_d]];

while {keepClimb} do { // add check for height and check that player cant press up and down at the same time creating a infinite loop.
        climbUpLoop = true;
        climbDownLoop = true;
        _first = true;
        if (climbUp) then {
                hint "climbing up";
                player switchMove "Anim_rope_climb";
                while {climbUpLoop} do {
                        if (_first) then {
                                _first = false;
                                [] spawn {sleep 2.878; climbUpLoop = false;};
                        };
                        player attachTo [_lift0, [0,-0.6,_d]];
                        _d = _d + _s;
                        sleep 0.005;
                };

                if ((getPosATL player select 2) >= (_f - 2)) then {
                        player attachTo [_lift0, [0,-1.1,_d]];
                        player switchMove "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium";
                        waituntil {animationState player != "AmovPercMstpSnonWnonDnon_AcrgPknlMstpSnonWnonDnon_getInMedium"};
                        detach player;
                        keepClimb = false;
                        player setpos (player modelToWorld [0,1.5,1.6]);
                };

        };

        if (climbDown) then { // add check for height
                hint "climbing down";
                player switchMove "Anim_rope_NoMoveLoop";
                while {climbDownLoop} do {
                        if (_first) then {
                                _first = false;
                                [] spawn {sleep 2.878; climbDownLoop = false;};
                        };
                        player attachTo [_lift0, [0,-0.6,_d]];
                        _d = _d - _s;
                        sleep 0.005;
                };
                if ((getPosATL player select 2) <= 0.9) then {
                        detach player;
                        player switchMove "AmovPercMstpSrasWrflDnon";
                        player setpos (player modelToWorld [0,-0.5,0.1]);
                        keepClimb = false;
                };
        };
if (!(keepClimb)) exitWith{};
};
