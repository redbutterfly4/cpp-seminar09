#include <format>

#include "ElectricVehicle.h"
#include "spdlog/spdlog.h"

ElectricVehicle::ElectricVehicle(const std::string &modelName, const std::string &number,
                                 const unsigned speed, const unsigned short fuelConsumption,
                                 const unsigned short year, const double batteryCapacity)
    : Vehicle(modelName, number, speed, fuelConsumption, year), batteryCapacity_(batteryCapacity)
{
    spdlog::debug("Constructed {}", ElectricVehicle::toString());
}

std::string ElectricVehicle::toString() const
{
    return std::format("Electric Vehicle {{ modelName : {}, number : {}, fuelConsumption : {}, year : {}, batteryCapacity : {} }}",
                       modelName_, number_, fuelConsumption_, year_, batteryCapacity_);
}

