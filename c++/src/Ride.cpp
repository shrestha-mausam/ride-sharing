#include "Ride.h"
#include <iostream>

namespace ridesharing {

Ride::Ride(long id, const std::string& pickup, const std::string& dropoff, double fare)
    : rideId(id), pickupLocation(pickup), dropoffLocation(dropoff), fare(fare) {}

void Ride::getRideInfo() const {
    std::cout << "Ride ID: " << rideId << std::endl;
    std::cout << "Pickup: " << pickupLocation << std::endl;
    std::cout << "Dropoff: " << dropoffLocation << std::endl;
    std::cout << "Fare: $" << fare << std::endl;
}

long Ride::getRideId() const {
    return rideId;
}

const std::string& Ride::getPickupLocation() const {
    return pickupLocation;
}

const std::string& Ride::getDropoffLocation() const {
    return dropoffLocation;
}

double Ride::getFare() const {
    return fare;
}

} // namespace ridesharing 