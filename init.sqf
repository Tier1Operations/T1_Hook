    _tr1 setTriggerArea [1.5,1.5,0,false];
    _tr1 setTriggerStatements [
        "this",
        "actionGutID = player addAction [
            'Gut the sucker!',
            {
                hint 'Your Code Goes Here';
                player removeAction actionGutID;
                deleteVehicle (_this select 3);
                player playActionNow 'Medic'
            },
            thisTrigger,
            10,
            true,
            true
        ]",
        "player removeAction actionGutID"
    ];