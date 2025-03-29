#include <cstring>
#include <iostream>
#include <numeric>

#include "AdFunctions.h"
#include "AdTypes.h"

int main()
{
    auto ego_vehicle = Ad::Data::initEgoVehicle();
    Ad::Visualize::printVehicle(ego_vehicle);

    return 0;
}
