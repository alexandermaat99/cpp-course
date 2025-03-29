#include <cmath>
#include <cstdint>
#include <iostream>

#include "AdConstants.h"
#include "AdFunctions.h"

namespace Ad
{
namespace Utils
{
float kphToMps(const float kph)
{
    return kph / 3.6F;
}
} // namespace Utils

namespace Data
{
Ad::Types::VehicleType initEgoVehicle()
{
    //returning the VehicleType and constructing it before it is returned, it is a struct with
    //4 attributes
    return Ad::Types::VehicleType{
        //. access the attribute, we pull the id from the constants
        .id = Ad::Constants::EGO_VEHICLE_ID,
        //access the lane attribute, assigns it the LaneAssociationType enum of CENTER
        .lane = Ad::Types::LaneAssociationType::CENTER,
        // access the speed and uses the kphToMps function to assign it
        .speedMps = Ad::Utils::kphToMps(135.0F),
        //access the distance attribute and sets it to 0.0, specifying that it's a float
        .distanceMeters = 0.0F,
    };
}
} // namespace Data

namespace Visualize
{

void printVehicle(const Ad::Types::VehicleType vehicle)
{
    std::cout << "ID: " << vehicle.id << "\n";
    std::cout << "Speed (mps): " << vehicle.speedMps << "\n";
    std::cout << "Distance (m): " << vehicle.distanceMeters << "\n";
    std::cout << "Lane: " << static_cast<int>(vehicle.lane) << "\n";
}

} // namespace Visualize

} // namespace Ad
