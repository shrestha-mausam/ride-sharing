#ifndef DRIVER_H
#define DRIVER_H

#include <vector>
#include <string>
#include "Ride.h"

namespace ridesharing {

    class Driver {
    private:
        long driverId;
        std::string name;
        double rating;
        std::vector<Ride*> assignedRides;

    public:
        Driver(long id, const std::string& driverName, double driverRating);
        ~Driver();

        // Prevent copying
        Driver(const Driver&) = delete;
        Driver& operator=(const Driver&) = delete;

        // Allow moving
        Driver(Driver&&) noexcept = default;
        Driver& operator=(Driver&&) noexcept = default;

        void addRide(Ride* ride);
        void getDriverInfo() const;
        const std::vector<Ride*>& getAssignedRides() const;
    };

} // namespace ridesharing

#endif // DRIVER_H 