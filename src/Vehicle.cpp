#include <utility>
#include <format>

#include "Vehicle.h"
#include "spdlog/spdlog.h"

Vehicle::Vehicle(std::string modelName, std::string number, const unsigned speed,
                 const unsigned short fuelConsumption, const unsigned short year)
    : modelName_(std::move(modelName)),
      number_(std::move(number)),
      speed_(speed),
      fuelConsumption_(fuelConsumption),
      year_(year)
{
    spdlog::debug("Constructed {}", Vehicle::toString());
}

std::string Vehicle::toString() const
{
    return std::format("Vehicle {{ modelName : {}, number : {}, fuelConsumption : {}, year : {} }}",
                       modelName_, number_, fuelConsumption_, year_);
}
