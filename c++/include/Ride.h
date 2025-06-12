#ifndef RIDE_H
#define RIDE_H

#include <string>

using namespace std;

namespace ridesharing {

    class Ride {
    protected:
        long rideId;
        string pickupLocation;
        string dropoffLocation;
        double distance;
        double fare;

    public:
        // Constructor
        Ride(long id, const string& pickup, const string& dropoff, double dist);

        // Virtual destructor for proper inheritance
        virtual ~Ride() = default;

        // Prevent copying
        Ride(const Ride&) = delete;
        Ride& operator=(const Ride&) = delete;

        // Allow moving
        Ride(Ride&&) noexcept = default;
        Ride& operator=(Ride&&) noexcept = default;

        // Virtual methods
        virtual double calculateFare() = 0;
        virtual void rideDetails() const;

        // Getters
        long getRideId() const;
        const string& getPickupLocation() const;
        const string& getDropoffLocation() const;
        double getDistance() const;
        double getFare() const;
    };

} // namespace ridesharing

#endif // RIDE_H 