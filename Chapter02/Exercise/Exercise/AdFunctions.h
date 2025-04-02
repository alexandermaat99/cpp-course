#pragma once

#include "AdTypes.h"

namespace Ad
{
namespace Utils
{
//converts kph to mps and returns the mps as a float
float kphToMps(const float kph);

} // namespace Utils

namespace Data
{
//initializes the vehicle and and returns a vehicle type which has 4 attributes
Ad::Types::VehicleType initEgoVehicle();
} // namespace Data

namespace Visualize
{
//function to just print the attributes of the vehicle
void printVehicle(const Ad::Types::VehicleType vehicle);
} // namespace Visualize

namespace Conversion
{
std::string laneConversion(Ad::Types::LaneAssociationType lane);

} // namespace Conversion

} //namespace Ad
