#include <format>

#include "Truck.h"
#include "spdlog/spdlog.h"

Truck::Truck(const std::string &modelName, const std::string &number, const unsigned speed,
             const unsigned short fuelConsumption, const unsigned short year,
             const double loadCapacity, const int numberOfAxles)
    : Vehicle(modelName, number, speed, fuelConsumption, year),
      loadCapacity_(loadCapacity),
      numberOfAxles_(numberOfAxles)
{
    spdlog::debug("Constructed {}", Truck::toString());
}

std::string Truck::toString() const
{
    return std::format("Truck {{ modelName : {}, number : {}, speed : {}, fuelConsumption : {}, "
                       "year : {}, loadCapacity : {}, numberOfAxles : {} }}",
                       modelName_, number_, speed_, fuelConsumption_, year_, loadCapacity_,
                       numberOfAxles_);
}
