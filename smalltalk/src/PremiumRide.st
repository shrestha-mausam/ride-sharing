Ride subclass: PremiumRide [
    | PremiumRate MinimumFare SurgeMultiplier |

    PremiumRide class >> new: id pickup: pickup dropoff: dropoff distance: dist [
        | ride |
        ride := super new.
        ride initialize: id pickup: pickup dropoff: dropoff distance: dist.
        ^ride
    ]

    initialize: id pickup: pickup dropoff: dropoff distance: dist [
        PremiumRate := 4.00.
        MinimumFare := 10.00.
        SurgeMultiplier := 1.5.
        rideId := id.
        pickupLocation := pickupLocation.
        dropoffLocation := dropoff.
        distance := dist
    ]

    calculateFare [
        | calculatedFare |
        calculatedFare := self getDistance * PremiumRate * SurgeMultiplier.
        fare := calculatedFare max: MinimumFare.
        ^fare
    ]

    rate [
        ^PremiumRate
    ]
]