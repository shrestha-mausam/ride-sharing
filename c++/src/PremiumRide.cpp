#include "PremiumRide.h"
#include <iostream>

namespace ridesharing {

    PremiumRide::PremiumRide(long id, const std::string& pickup, const std::string& dropoff, double fare)
        : Ride(id, pickup, dropoff, fare) {}

    void PremiumRide::getRideInfo() const {
        std::cout << "Premium Ride Details:" << std::endl;
        Ride::getRideInfo();
    }

} // namespace ridesharing 