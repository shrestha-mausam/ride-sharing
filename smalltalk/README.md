# Ride-Sharing System in GNU Smalltalk

This is a GNU Smalltalk implementation of a ride-sharing system that demonstrates object-oriented programming concepts, particularly polymorphism.

## Project Structure

```
smalltalk/
├── README.md
└── src/
    ├── Ride.st        # Base class for all rides
    ├── StandardRide.st # Standard ride implementation
    ├── PremiumRide.st  # Premium ride implementation
    ├── Driver.st      # Driver class
    ├── Rider.st       # Rider class
    └── Main.st        # Main program demonstrating the system
```

## Implementation Details

The implementation follows the same design as the C++ version but uses GNU Smalltalk's unique features:

1. **Classes and Inheritance**
   - All classes inherit from `Object`
   - `Ride` is the abstract base class
   - `StandardRide` and `PremiumRide` inherit from `Ride`
   - Class variables for ride rates and minimum fares

2. **Polymorphism**
   - Demonstrated through method overriding
   - Different ride types calculate fares differently
   - Collections can hold different types of rides

3. **GNU Smalltalk-Specific Features**
   - File-based class definitions
   - Message passing syntax
   - Dynamic typing
   - Automatic memory management
   - Transcript for output

## Installation

1. **macOS**:
   ```bash
   brew install gnu-smalltalk
   ```

2. **Ubuntu/Debian**:
   ```bash
   sudo apt-get install gnu-smalltalk
   ```

3. **Windows**:
   - Download the installer from [GNU Smalltalk website](https://www.gnu.org/software/smalltalk/)
   - Follow the installation instructions

## How to Run

1. Navigate to the source directory:
   ```bash
   cd smalltalk/src
   ```

2. Run the application:
   ```bash
   gst Main.st
   ```

## Key Features

1. **Class Organization**
   - Each class in its own `.st` file
   - Clear separation of concerns
   - Easy to maintain and extend

2. **Memory Management**
   - Automatic garbage collection
   - No explicit memory management needed

3. **Output Handling**
   - Uses Transcript for output
   - Formatted display of ride information
   - Summary statistics

## Example Usage

```smalltalk
"Create a standard ride"
standardRide := StandardRide class new: 1 
    pickup: '123 Main St' 
    dropoff: '456 Park Ave' 
    distance: 5.0.

"Create a premium ride"
premiumRide := PremiumRide class new: 2 
    pickup: '789 Oak St' 
    dropoff: '321 Pine Rd' 
    distance: 3.0.

"Calculate fares"
standardRide calculateFare.
premiumRide calculateFare.

"Display ride details"
standardRide rideDetails.
premiumRide rideDetails.
```

## Troubleshooting

1. **File Loading Issues**
   - Ensure all `.st` files are in the same directory
   - Check file permissions
   - Verify file paths in `Main.st`

2. **Method Not Found Errors**
   - Check method names and parameters
   - Verify class inheritance
   - Ensure proper method syntax

3. **Output Issues**
   - Check Transcript initialization
   - Verify string concatenation syntax
   - Ensure proper number formatting 