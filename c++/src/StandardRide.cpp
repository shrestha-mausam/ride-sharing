#include "StandardRide.h"
#include <iostream>

namespace ridesharing {

StandardRide::StandardRide(long id, const std::string& pickup, const std::string& dropoff, double fare) 
    : Ride(id, pickup, dropoff, fare) {}

void StandardRide::getRideInfo() const {
    std::cout << "Standard Ride Details:" << std::endl;
    Ride::getRideInfo();
}

} // namespace ridesharing 