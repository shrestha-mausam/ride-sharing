#include "PremiumRide.h"
#include <iostream>

using namespace std;

namespace ridesharing {

    PremiumRide::PremiumRide(long id, const string& pickup, const string& dropoff, double distance)
        : Ride(id, pickup, dropoff, distance) {
        fare = calculateFare();
    }

    double PremiumRide::calculateFare() {
        double calculatedFare = distance * PREMIUM_RATE * SURGE_MULTIPLIER;
        return max(calculatedFare, MINIMUM_FARE);
    }

    void PremiumRide::rideDetails() const {
        cout << "Premium Ride Details:" << endl;
        Ride::rideDetails();
        cout << "Premium Rate: $" << PREMIUM_RATE << " per mile" << endl;
        cout << "Surge Multiplier: " << SURGE_MULTIPLIER << "x" << endl;
        cout << "Minimum Fare: $" << MINIMUM_FARE << endl;
    }

} // namespace ridesharing 