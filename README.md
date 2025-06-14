# Ride-Sharing System

A demonstration of object-oriented programming concepts through a ride-sharing system implementation in C++ and GNU Smalltalk.

## Overview

This project showcases polymorphism and inheritance by implementing a ride-sharing system with different types of rides, drivers, and riders. The same system is implemented in both C++ and GNU Smalltalk to demonstrate how these concepts are expressed in different programming paradigms.

## Key Features

- Different ride types (Standard and Premium) with varying fare calculations
- Driver and rider management
- Ride history tracking
- Polymorphic behavior demonstration

## Implementations

### C++
- Modern C++ implementation
- Header and source file organization
- Smart pointers for memory management
- Virtual functions for polymorphism

### GNU Smalltalk
- File-based implementation
- Message passing paradigm
- Dynamic typing
- Automatic memory management
- Class-based inheritance

## Getting Started

### C++
```bash
cd c++
make run
```

### GNU Smalltalk
1. Install GNU Smalltalk:
   - **macOS**: `brew install gnu-smalltalk`
   - **Ubuntu/Debian**: `sudo apt-get install gnu-smalltalk`
   - **Windows**: Download from [GNU Smalltalk website](https://www.gnu.org/software/smalltalk/)

2. Run the application:
```bash
cd smalltalk/src
gst Main.st
```

## Project Structure
```
.
├── c++/          # C++ implementation
└── smalltalk/    # GNU Smalltalk implementation
    └── src/      # Source files
        ├── Ride.st
        ├── StandardRide.st
        ├── PremiumRide.st
        ├── Driver.st
        ├── Rider.st
        └── Main.st
```

## Requirements

- C++: C++17 compiler, Make
- GNU Smalltalk: Version 3.2.5 or later
