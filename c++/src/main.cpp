#include <iostream>
#include <vector>
#include "Ride.h"
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"
#include <memory>
#include <iomanip>

using namespace ridesharing;
using namespace std;

void demonstratePolymorphism(const vector<Ride*>& rides) {
    cout << "\nPolymorphism Demonstration" << endl;
    cout << "=========================" << endl;
    
    // Calculate total fare across all ride types
    double totalFare = 0.0;
    int standardCount = 0;
    int premiumCount = 0;
    
    for (const auto& ride : rides) {
        cout << "\n-------------------" << endl;
        
        // Polymorphic call to rideDetails()
        ride->rideDetails();
        
        // Polymorphic call to calculateFare()
        double fare = ride->calculateFare();
        totalFare += fare;
        
        // Count ride types using dynamic_cast
        if (dynamic_cast<StandardRide*>(ride)) {
            standardCount++;
        } else if (dynamic_cast<PremiumRide*>(ride)) {
            premiumCount++;
        }
    }
    
    // Display summary
    cout << "\nRide Summary:" << endl;
    cout << "-------------" << endl;
    cout << "Total Rides: " << rides.size() << endl;
    cout << "Standard Rides: " << standardCount << endl;
    cout << "Premium Rides: " << premiumCount << endl;
    cout << "Total Fare: $" << fixed << setprecision(2) << totalFare << endl;
    cout << "Average Fare: $" << fixed << setprecision(2) << (totalFare / rides.size()) << endl;
}

int main() {
    cout << "Ride Sharing System Demo" << endl;
    cout << "=======================" << endl << endl;

    // Create a collection of different ride types
    cout << "Creating rides..." << endl;
    vector<unique_ptr<Ride>> ridePtrs;
    
    // Add various rides with different distances
    ridePtrs.push_back(make_unique<StandardRide>(1, "123 Main St", "456 Park Ave", 5.0));    // 5 miles
    ridePtrs.push_back(make_unique<PremiumRide>(2, "789 Oak St", "321 Pine Rd", 3.0));       // 3 miles
    ridePtrs.push_back(make_unique<StandardRide>(3, "555 Elm St", "777 Maple Dr", 2.0));     // 2 miles
    ridePtrs.push_back(make_unique<PremiumRide>(4, "888 Cedar Ln", "999 Birch Way", 8.0));   // 8 miles
    ridePtrs.push_back(make_unique<StandardRide>(5, "111 First St", "222 Second Ave", 1.0)); // 1 mile
    ridePtrs.push_back(make_unique<PremiumRide>(6, "333 Third St", "444 Fourth Ave", 4.0));  // 4 miles

    // Create a vector of raw pointers for polymorphism demonstration
    vector<Ride*> rides;
    for (const auto& ride : ridePtrs) {
        rides.push_back(ride.get());
    }

    // Demonstrate polymorphism
    demonstratePolymorphism(rides);

    // Create a driver and assign some rides
    cout << "\nCreating driver..." << endl;
    Driver driver(1001, "John Smith", 4.8);
    driver.addRide(rides[0]);  // First standard ride
    driver.addRide(rides[1]);  // First premium ride
    driver.addRide(rides[2]);  // Second standard ride

    // Create a rider and request some rides
    cout << "\nCreating rider..." << endl;
    Rider rider(2001, "Alice Johnson");
    rider.requestRide(rides[0]);  // First standard ride
    rider.requestRide(rides[1]);  // First premium ride
    rider.requestRide(rides[3]);  // Second premium ride

    // Show driver information
    cout << "\nDriver Information:" << endl;
    cout << "==================" << endl;
    driver.getDriverInfo();

    // Show rider information
    cout << "\nRider Information:" << endl;
    cout << "=================" << endl;
    rider.viewRides();

    return 0;
}




