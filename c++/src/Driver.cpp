#include "Driver.h"
#include <iostream>

namespace ridesharing {

Driver::Driver(long id, const std::string& driverName, double driverRating) 
    : driverId(id), name(driverName), rating(driverRating) {}

Driver::~Driver() {
    // Clean up if needed
}

void Driver::addRide(Ride* ride) {
    assignedRides.push_back(ride);
}

void Driver::getDriverInfo() const {
    std::cout << "Driver ID: " << driverId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Rating: " << rating << "/5.0" << std::endl;
    std::cout << "Number of assigned rides: " << assignedRides.size() << std::endl;
}

const std::vector<Ride*>& Driver::getAssignedRides() const {
    return assignedRides;
}

} // namespace ridesharing 