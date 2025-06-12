#ifndef STANDARD_RIDE_H
#define STANDARD_RIDE_H

#include "Ride.h"

namespace ridesharing {

    class StandardRide : public Ride {
    public:
        StandardRide(long id, const std::string& pickup, const std::string& dropoff, double fare);
        void getRideInfo() const override;
    };

} // namespace ridesharing

#endif // STANDARD_RIDE_H 