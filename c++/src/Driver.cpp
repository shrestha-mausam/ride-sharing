#include "Driver.h"
#include <iostream>

using namespace std;

namespace ridesharing {

    Driver::Driver(long id, const string& driverName, double driverRating)
        : driverId(id), name(driverName), rating(driverRating) {}

    Driver::~Driver() {}

    void Driver::addRide(Ride* ride) {
        assignedRides.push_back(ride);
    }

    void Driver::getDriverInfo() const {
        cout << "Driver ID: " << driverId << endl;
        cout << "Name: " << name << endl;
        cout << "Rating: " << rating << endl;
        cout << "Number of assigned rides: " << assignedRides.size() << endl;
        
        if (!assignedRides.empty()) {
            cout << "\nRide History:" << endl;
            for (const auto& ride : assignedRides) {
                cout << "\n-------------------" << endl;
                ride->rideDetails();
            }
        }
    }

    const vector<Ride*>& Driver::getAssignedRides() const {
        return assignedRides;
    }

} // namespace ridesharing 