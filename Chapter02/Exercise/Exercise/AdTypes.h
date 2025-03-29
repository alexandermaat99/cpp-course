#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad
{
namespace Types
{


enum class LaneAssociationType
{
    UNKNOWN,
    LEFT,
    CENTER,
    RIGHT

};

struct VehicleType
{
    int id;
    LaneAssociationType lane;
    float speedMps;
    float distanceMeters;
};

} // namespace Types

} // namespace Ad
