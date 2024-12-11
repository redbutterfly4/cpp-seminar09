#include <format>

#include "ElectricCar.h"
#include "spdlog/spdlog.h"

ElectricCar::ElectricCar(const std::string &modelName, const std::string &number, unsigned speed,
                         unsigned short fuelConsumption, unsigned short year,
                         unsigned char numberOfPassengers, double batteryCapacity)
    : Vehicle(modelName, number, speed, fuelConsumption, year),
      ElectricVehicle(modelName, number, speed, fuelConsumption, year, batteryCapacity),
      Car(modelName, number, speed, fuelConsumption, year, numberOfPassengers)
{
    spdlog::debug("Constructed {}", ElectricCar::toString());
}

std::string ElectricCar::toString() const
{
    return std::format("ElectricCar {{ modelName : {}, number : {}, fuelConsumption : {}, year : "
                       "{}, numberOfPassengers : {}, batteryCapacity : {} }}",
                       modelName_, number_, fuelConsumption_, year_, numberOfPassengers_,
                       batteryCapacity_);
}