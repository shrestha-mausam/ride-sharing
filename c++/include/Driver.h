#ifndef DRIVER_H
#define DRIVER_H

#include <vector>
#include <string>
#include "Ride.h"

using namespace std;

namespace ridesharing {

    class Driver {
    private:
        long driverId;
        string name;
        double rating;
        vector<Ride*> assignedRides;

    public:
        Driver(long id, const string& driverName, double driverRating);
        ~Driver();

        // Prevent copying
        Driver(const Driver&) = delete;
        Driver& operator=(const Driver&) = delete;

        // Allow moving
        Driver(Driver&&) noexcept = default;
        Driver& operator=(Driver&&) noexcept = default;

        void addRide(Ride* ride);
        void getDriverInfo() const;
        const vector<Ride*>& getAssignedRides() const;
    };

} // namespace ridesharing

#endif // DRIVER_H 