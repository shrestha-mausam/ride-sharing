#ifndef RIDE_H
#define RIDE_H

#include <string>
#include <iostream>

namespace ridesharing {

    class Ride {
    protected:
        long rideId;
        std::string pickupLocation;
        std::string dropoffLocation;
        double fare;

    public:
        // Constructor
        Ride(long id, const std::string& pickup, const std::string& dropoff, double fare);

        // Virtual destructor for proper inheritance
        virtual ~Ride() = default;

        // Prevent copying
        Ride(const Ride&) = delete;
        Ride& operator=(const Ride&) = delete;

        // Allow moving
        Ride(Ride&&) noexcept = default;
        Ride& operator=(Ride&&) noexcept = default;

        // Getters
        long getRideId() const;
        const std::string& getPickupLocation() const;
        const std::string& getDropoffLocation() const;
        double getFare() const;

        // Virtual methods
        virtual void getRideInfo() const;
    };

} // namespace ridesharing

#endif // RIDE_H 