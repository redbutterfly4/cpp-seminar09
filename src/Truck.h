#ifndef TRUCK_H
#define TRUCK_H
#include "Vehicle.h"

class Truck final : public Vehicle
{
public:
    Truck(const std::string &modelName, const std::string &number, unsigned speed,
          unsigned short fuelConsumption, unsigned short year, double loadCapacity,
          int numberOfAxles);

    [[nodiscard]] std::string toString() const override;

private:
    double loadCapacity_;
    int numberOfAxles_;
};

#endif // TRUCK_H
