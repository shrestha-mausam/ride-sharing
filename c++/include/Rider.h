#ifndef RIDER_H
#define RIDER_H

#include <vector>
#include <string>
#include "Ride.h"

using namespace std;

namespace ridesharing {

    class Rider {
    private:
        long riderId;
        string name;
        vector<Ride*> requestedRides;

    public:
        Rider(long id, const string& riderName);
        ~Rider();

        // Prevent copying
        Rider(const Rider&) = delete;
        Rider& operator=(const Rider&) = delete;

        // Allow moving
        Rider(Rider&&) noexcept = default;
        Rider& operator=(Rider&&) noexcept = default;

        void requestRide(Ride* ride);
        void viewRides() const;
        const vector<Ride*>& getRequestedRides() const;
    };

} // namespace ridesharing

#endif // RIDER_H 