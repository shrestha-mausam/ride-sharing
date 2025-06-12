#include "StandardRide.h"
#include <iostream>

using namespace std;

namespace ridesharing {

    StandardRide::StandardRide(long id, const string& pickup, const string& dropoff, double distance)
        : Ride(id, pickup, dropoff, distance) {
        fare = calculateFare();
    }

    double StandardRide::calculateFare() {
        double calculatedFare = distance * BASE_RATE;
        return max(calculatedFare, MINIMUM_FARE);
    }

    void StandardRide::rideDetails() const {
        cout << "Standard Ride Details:" << endl;
        Ride::rideDetails();
        cout << "Base Rate: $" << BASE_RATE << " per mile" << endl;
        cout << "Minimum Fare: $" << MINIMUM_FARE << endl;
    }

} // namespace ridesharing 