#ifndef PREMIUM_RIDE_H
#define PREMIUM_RIDE_H

#include "Ride.h"

namespace ridesharing {

    class PremiumRide : public Ride {
    public:
        PremiumRide(long id, const std::string& pickup, const std::string& dropoff, double fare);
        void getRideInfo() const override;
    };

} // namespace ridesharing

#endif // PREMIUM_RIDE_H 