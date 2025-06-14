Ride subclass: StandardRide [
    | BaseRate MinimumFare |

    StandardRide class >> new: id pickup: pickup dropoff: dropoff distance: distance [
        | standardRide |
        standardRide := super new.
        standardRide initialize: id pickup: pickup dropoff: dropoff distance: distance.
        ^standardRide
    ]

    initialize: id pickup: pickup dropoff: dropoff distance: dist [
        BaseRate := 2.50.
        MinimumFare := 5.00.
        rideId := id.
        pickupLocation := pickup.
        dropoffLocation := dropoff.
        distance := dist.
    ]

    calculateFare [
        | calculatedFare |
        calculatedFare := self getDistance *  BaseRate.
        fare := calculatedFare max: MinimumFare.
        ^fare
    ]

    rate [
        ^BaseRate
    ]
] 