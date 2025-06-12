#include "Ride.h"
#include <iostream>

using namespace std;

namespace ridesharing {

    Ride::Ride(long id, const string& pickup, const string& dropoff, double dist)
        : rideId(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist), fare(0.0) {}

    void Ride::rideDetails() const {
        cout << "Ride ID: " << rideId << endl;
        cout << "Pickup: " << pickupLocation << endl;
        cout << "Dropoff: " << dropoffLocation << endl;
        cout << "Distance: " << distance << " miles" << endl;
        cout << "Fare: $" << fare << endl;
    }

    long Ride::getRideId() const {
        return rideId;
    }

    const string& Ride::getPickupLocation() const {
        return pickupLocation;
    }

    const string& Ride::getDropoffLocation() const {
        return dropoffLocation;
    }

    double Ride::getDistance() const {
        return distance;
    }

    double Ride::getFare() const {
        return fare;
    }

} // namespace ridesharing 