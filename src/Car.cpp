#include <utility>
#include <format>

#include "Car.h"
#include "spdlog/spdlog.h"

Car::Car(std::string modelName, std::string number, unsigned speed, unsigned short fuelConsumption,
         const unsigned short year, unsigned char numberOfPassengers)
    : Vehicle(std::move(modelName), std::move(number), speed, fuelConsumption, year),
      numberOfPassengers_(numberOfPassengers)
{
    spdlog::debug("Constructed {}", Car::toString());
}

std::string Car::toString() const
{
    return std::format("Car {{ modelName : {}, number : {}, fuelConsumption : {}, year : {}, "
                       "numberOfPassengers : {} }}",
                       modelName_, number_, fuelConsumption_, year_,
                       numberOfPassengers_);
}