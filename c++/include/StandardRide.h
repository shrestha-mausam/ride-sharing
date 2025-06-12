#ifndef STANDARD_RIDE_H
#define STANDARD_RIDE_H

#include "Ride.h"

using namespace std;

namespace ridesharing {

    class StandardRide : public Ride {
    private:
        static constexpr double BASE_RATE = 2.50;  // Base rate per mile
        static constexpr double MINIMUM_FARE = 5.00;  // Minimum fare for any ride

    public:
        StandardRide(long id, const string& pickup, const string& dropoff, double distance);
        ~StandardRide() override = default;

        // Override virtual methods
        double calculateFare() override;
        void rideDetails() const override;
    };

} // namespace ridesharing

#endif // STANDARD_RIDE_H 