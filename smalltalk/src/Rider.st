Object subclass: Rider [
    | riderId name requestedRides |

    Rider class >> new: id name: aName [
        | rider |
        rider := super new.
        rider initialize: id name: aName.
        ^rider
    ]

    initialize: id name: aName [
        riderId := id.
        name := aName.
        requestedRides := OrderedCollection new
    ]

    getRiderId [
        ^riderId
    ]

    getName [
        ^name
    ]

    requestRide: aRide [
        requestedRides add: aRide
    ]

    getRequestedRides [
        ^requestedRides
    ]

    viewRides [
        Transcript
            show: 'Rider Information:';
            cr; show: 'ID: ', riderId;
            cr; show: 'Name: ', name;
            cr; show: 'Number of Requested Rides: ', requestedRides size printString; cr.

        requestedRides do: [:ride | 
            Transcript cr.
            ride rideDetails
        ]
    ]
] 