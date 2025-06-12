#include "Rider.h"
#include <iostream>

using namespace std;

namespace ridesharing {

    Rider::Rider(long id, const string& riderName) 
        : riderId(id), name(riderName) {}

    Rider::~Rider() {}

    void Rider::requestRide(Ride* ride) {
        requestedRides.push_back(ride);
    }

    void Rider::viewRides() const {
        cout << "Rider ID: " << riderId << endl;
        cout << "Name: " << name << endl;
        cout << "Total Rides: " << requestedRides.size() << endl;
        
        if (!requestedRides.empty()) {
            cout << "\nRide History:" << endl;
            for (const auto& ride : requestedRides) {
                cout << "\n-------------------" << endl;
                ride->rideDetails();
            }
        }
    }

    const vector<Ride*>& Rider::getRequestedRides() const {
        return requestedRides;
    }

} // namespace ridesharing 