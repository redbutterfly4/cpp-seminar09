#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
#include <string>

#include "Vehicle.h"

class Motorcycle : virtual public Vehicle
{
public:
    Motorcycle(const std::string &modelName, const std::string &number, unsigned speed,
               unsigned short fuelConsumption, unsigned short year,
               std::string type);

    [[nodiscard]] std::string toString() const override;

protected:
    std::string type_;
};

#endif // MOTORCYCLE_H
