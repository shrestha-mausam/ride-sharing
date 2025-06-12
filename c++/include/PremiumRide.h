#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"

using namespace std;

namespace ridesharing {

    class PremiumRide : public Ride {
    private:
        static constexpr double PREMIUM_RATE = 4.00;  // Premium rate per mile
        static constexpr double MINIMUM_FARE = 10.00;  // Higher minimum fare for premium rides
        static constexpr double SURGE_MULTIPLIER = 1.5;  // Surge pricing multiplier

    public:
        PremiumRide(long id, const string& pickup, const string& dropoff, double distance);
        ~PremiumRide() override = default;

        // Override virtual methods
        double calculateFare() override;
        void rideDetails() const override;
    };

} // namespace ridesharing

#endif // PREMIUM_RIDE_H 