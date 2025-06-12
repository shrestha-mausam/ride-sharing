#include <iostream>
#include <vector>
#include "Ride.h"
#include "StandardRide.h"
#include "PremiumRide.h"
#include "Driver.h"
#include "Rider.h"

using namespace ridesharing;

int main() {
    // Create some drivers
    Driver driver1(1, "John Doe", 4.8);
    Driver driver2(2, "Jane Smith", 4.9);

    // Create some riders
    Rider rider1(1, "Alice Johnson");
    Rider rider2(2, "Bob Wilson");

    // Create some rides
    StandardRide standardRide1(1, "123 Main St", "456 Park Ave", 15.50);
    PremiumRide premiumRide1(2, "789 Oak St", "321 Pine Rd", 25.75);
    StandardRide standardRide2(3, "555 Elm St", "777 Maple Dr", 12.25);

    // Assign rides to drivers
    driver1.addRide(&standardRide1);
    driver2.addRide(&premiumRide1);
    driver1.addRide(&standardRide2);

    // Request rides for riders
    rider1.requestRide(&standardRide1);
    rider1.requestRide(&premiumRide1);
    rider2.requestRide(&standardRide2);

    // Display information
    std::cout << "\n=== Driver Information ===" << std::endl;
    driver1.getDriverInfo();
    std::cout << "\n";
    driver2.getDriverInfo();

    std::cout << "\n=== Rider Information ===" << std::endl;
    rider1.viewRides();
    std::cout << "\n";
    rider2.viewRides();

    std::cout << "\n=== Ride Information ===" << std::endl;
    standardRide1.getRideInfo();
    std::cout << "\n";
    premiumRide1.getRideInfo();
    std::cout << "\n";
    standardRide2.getRideInfo();

    // Demonstrate polymorphism
    std::cout << "\n=== Polymorphism Demonstration ===" << std::endl;
    std::vector<Ride*> rides;
    rides.push_back(&standardRide1);
    rides.push_back(&premiumRide1);
    rides.push_back(&standardRide2);

    for (const auto& ride : rides) {
        ride->getRideInfo();
        std::cout << "Fare (polymorphic): $" << ride->getFare() << std::endl;
        std::cout << "-------------------" << std::endl;
    }

    return 0;
}




