#include <utility>
#include <format>

#include "Motorcycle.h"
#include "spdlog/spdlog.h"

Motorcycle::Motorcycle(const std::string &modelName, const std::string &number,
                       const unsigned speed, const unsigned short fuelConsumption,
                       const unsigned short year, std::string type)
    : Vehicle(modelName, number, speed, fuelConsumption, year), type_(std::move(type))
{
    spdlog::debug("Constructed {}", Motorcycle::toString());
}

std::string Motorcycle::toString() const
{
    return std::format(
            "Motorcycle {{ modelName : {}, number : {}, speed : {}, fuelConsumption : {}, "
            "year : {}, type : {} }}",
            modelName_, number_, speed_, fuelConsumption_, year_, type_);
}