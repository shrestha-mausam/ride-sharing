Object subclass: Driver [
    | driverId name rating rides |

    Driver class >> new: id name: aName rating: aRating [
        | driver |
        driver := super new.
        driver initialize: id name: aName rating: aRating.
        ^driver
    ]

    initialize: id name: aName rating: aRating [
        driverId := id.
        name := aName.
        rating := aRating.
        rides := OrderedCollection new
    ]

    getDriverId [
        ^driverId
    ]

    getName [
        ^name
    ]

    getRating [
        ^rating
    ]

    addRide: aRide [
        rides add: aRide
    ]

    getAssignedRides [
        ^rides
    ]

    driverInfo [
        | totalFare |
        totalFare := 0.0.
        rides do: [:ride | totalFare := totalFare + ride calculateFare].
        
        Transcript
            show: 'Driver Information:';
            cr; show: 'ID: ', driverId;
            cr; show: 'Name: ', name;
            cr; show: 'Rating: ', rating;
            cr; show: 'Number of Rides: ', rides size asString;
            cr; show: 'Total Fare: $', totalFare asString;
            cr; show: 'Average Fare: $', (rides isEmpty 
                ifTrue: ['0.00']
                ifFalse: [((totalFare / rides size))]) asString;
            cr; cr; show: '--------------------------------------------------'; cr; cr.
            
    ]
] 