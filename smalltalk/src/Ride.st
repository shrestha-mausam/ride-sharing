Object subclass: Ride [
    | rideId pickupLocation dropoffLocation distance fare |

    Ride class >> new: id pickup: pickup dropoff: dropoff distance: dist [
        | ride |
        ride := super new.
        ride initialize: id pickup: pickup dropoff: dropoff distance: dist.
        ^ride
    ]

    initialize: id pickup: pickup dropoff: dropoff distance: dist [
        rideId := id.
        pickupLocation := pickup.
        dropoffLocation := dropoff.
        distance := dist.
        fare := 0.0.
    ]

    getRideId [
        ^rideId
    ]

    getPickupLocation [
        ^pickupLocation
    ]

    getDropoffLocation [
        ^dropoffLocation
    ]

    getDistance [
        ^distance
    ]

    getFare [
        ^fare
    ]

    rate [
        self subclassResponsibility
    ]

    calculateFare [
        self subclassResponsibility
    ]

    rideDetails [
        Transcript
            show: 'Ride Details:';
            cr; show: 'Ride ID: ', rideId printString;
            cr; show: 'Pickup: ', pickupLocation printString;
            cr; show: 'Dropoff: ', dropoffLocation;
            cr; show: 'Distance: ', distance printString, ' miles';
            cr; show: 'Fare: $', fare printString;
            cr; show: 'Rate: $', self rate printString; cr.
    ]
]