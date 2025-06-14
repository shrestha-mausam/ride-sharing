"Load required classes"
FileStream fileIn: './Ride.st'.
FileStream fileIn: './StandardRide.st'.
FileStream fileIn: './PremiumRide.st'.
FileStream fileIn: './Driver.st'.
FileStream fileIn: './Rider.st'.

"Suppress garbage collection messages"
Smalltalk garbageCollect quiet.

[
    | rides standardCount premiumCount totalFare |

    Transcript show: '///////////////////////////////////////////////////////'; cr.
    Transcript show: '///////////// Ride Sharing System Demo/////////////////'; cr.
    Transcript show: '///////////////////////////////////////////////////////'; cr; cr; cr.

    "Create a collection of different ride types"
    Transcript show: 'Creating rides...'; cr.
    rides := OrderedCollection new.
    standardCount := 0.
    premiumCount := 0.
    totalFare := 0.0.

    "Add various rides with different distances"
    rides add: (StandardRide  new: 1 pickup: '123 Main St' dropoff: '456 Park Ave' distance: 5.0).
    rides add: (PremiumRide  new: 2 pickup: '789 Oak St' dropoff: '321 Pine Rd' distance: 3.0).

    "Demonstrate polymorphism"
    Transcript show: 'Polymorphism Demonstration'; cr.

    rides do: [:ride |
        Transcript show: ''; cr.
        Transcript show: '--------------------------------------------------'; cr; cr.
        ride rideDetails.
        totalFare := totalFare + ride calculateFare.
        (ride isKindOf: StandardRide) ifTrue: [standardCount := standardCount + 1].
        (ride isKindOf: PremiumRide) ifTrue: [premiumCount := premiumCount + 1].
    ].

    "Display summary"
    Transcript show: ''; cr; cr.
    Transcript show: '======================================================'; cr.
    Transcript show: '=================== Ride Summary ====================='; cr.
    Transcript show: '======================================================'; cr; cr.
    Transcript show: 'Total Rides: ', rides size printString; cr.
    Transcript show: 'Standard Rides: ', standardCount printString; cr.
    Transcript show: 'Premium Rides: ', premiumCount printString; cr.
    Transcript show: 'Total Fare: $', totalFare printString; cr.
    Transcript show: 'Average Fare: $', (totalFare / rides size) printString; cr; cr.
    Transcript show: '======================================================'; cr.
    Transcript show: '=================== Ride Summary ====================='; cr.
    Transcript show: '======================================================'; cr; cr.

    "Create a driver and assign some rides"
    Transcript show: 'Creating drivers...'; cr.
    driver := Driver new: 'D001' name: 'John Smith' rating: 4.8.
    driver addRide: (rides at: 1).  "First standard ride"
    driver addRide: (rides at: 2).  "First premium ride"

    "Create a rider and request some rides"
    Transcript show: 'Creating riders...'; cr; cr.
    rider := Rider new: 'R001' name: 'Alice Johnson'.
    rider requestRide: (rides at: 1).  "First standard ride"
    rider requestRide: (rides at: 2).  "Second premium ride"
    Transcript show: '======================================================'; cr; cr.

    "Show driver information"
    driver driverInfo.

    "Show rider information"
    rider viewRides.

] value 