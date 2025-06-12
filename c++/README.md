# Ride-Sharing System

A C++ implementation of a ride-sharing system that demonstrates object-oriented programming principles including inheritance, polymorphism, and encapsulation.

## Project Structure

```
c++/
├── include/           # Header files
│   ├── Ride.h
│   ├── StandardRide.h
│   ├── PremiumRide.h
│   ├── Driver.h
│   └── Rider.h
├── src/              # Source files
│   ├── main.cpp
│   ├── Ride.cpp
│   ├── StandardRide.cpp
│   ├── PremiumRide.cpp
│   ├── Driver.cpp
│   └── Rider.cpp
├── obj/              # Object files (generated)
├── bin/              # Executable (generated)
└── Makefile         # Build configuration
```

## Building the Project

### Prerequisites
- C++ compiler with C++17 support (e.g., g++ 7.0 or later)
- Make

### Build Instructions

1. Navigate to the C++ project directory:
   ```bash
   cd c++
   ```

2. Build the project:
   ```bash
   make
   ```
   This will create the executable in the `bin` directory.

3. Run the program:
   ```bash
   make run
   ```

4. To clean build files:
   ```bash
   make clean
   ```

## Features

- **Ride Types**:
  - Standard Ride
  - Premium Ride

- **User Types**:
  - Drivers
  - Riders

- **Core Functionality**:
  - Ride creation and management
  - Driver assignment
  - Rider ride requests
  - Fare calculation
  - Ride history tracking

## Design Patterns

- Inheritance: `Ride` as base class with `StandardRide` and `PremiumRide` derived classes
- Polymorphism: Different ride types with specific fare calculations
- Encapsulation: Private member variables with public accessor methods

## Code Style

- Follows C++17 standard
- Uses modern C++ features
- Consistent indentation (4 spaces)
- Clear class and method documentation
- Proper namespace usage (`ridesharing`) 