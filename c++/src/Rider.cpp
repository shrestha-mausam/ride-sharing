#include "Rider.h"

namespace ridesharing {

Rider::Rider(long id, const std::string& riderName) 
    : riderId(id), name(riderName) {}

Rider::~Rider() {
    // Clean up if needed
}

void Rider::requestRide(Ride* ride) {
    requestedRides.push_back(ride);
}

void Rider::viewRides() const {
    std::cout << "Rider ID: " << riderId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Total Rides: " << requestedRides.size() << std::endl;
    std::cout << "\nRide History:" << std::endl;
    for (const auto& ride : requestedRides) {
        std::cout << "\n-------------------" << std::endl;
        ride->getRideInfo();
    }
}

const std::vector<Ride*>& Rider::getRequestedRides() const {
    return requestedRides;
}

} // namespace ridesharing 