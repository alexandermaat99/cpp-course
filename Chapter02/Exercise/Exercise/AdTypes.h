#pragma once

#include <cstdint>

#include "AdConstants.h"

namespace Ad
{
namespace Types
{
enum class LaneAssociationType
{
    LEFT,
    CENTER,
    RIGHT,
    NONE
};

struct VehicleType
{
    int id;
    LaneAssociationType lane;
    float speedMps;
    float distanceMeters;
};

}; // namespace Types
} // namespace Ad
