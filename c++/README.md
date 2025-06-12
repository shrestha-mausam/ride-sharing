# Ride Sharing System

A C++ implementation of a ride-sharing system demonstrating object-oriented programming principles.

## Project Structure

```
c++/
├── include/          # Header files
├── src/             # Source files
├── tests/           # Test files
├── docs/            # Documentation
└── CMakeLists.txt   # Build configuration
```

## Building the Project

```bash
mkdir build
cd build
cmake ..
make
```

## Features

- Base `Ride` class with core ride details
- Derived classes: `StandardRide` and `PremiumRide`
- `Driver` class for managing drivers and their rides
- `Rider` class for managing riders and their ride history
- Polymorphic fare calculation
- Encapsulated data members
- Inheritance hierarchy

## OOP Principles Demonstrated

1. **Encapsulation**
   - Private data members
   - Public interface methods
   - Protected members for inheritance

2. **Inheritance**
   - `Ride` as base class
   - `StandardRide` and `PremiumRide` as derived classes

3. **Polymorphism**
   - Virtual methods for fare calculation
   - Overridden methods in derived classes
   - Runtime polymorphism with base class pointers

## Dependencies

- C++17 or later
- CMake 3.10 or later 