#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H
#include "ElectricVehicle.h"
#include "Car.h"

class ElectricCar final : public ElectricVehicle, public Car
{
public:
    ElectricCar(const std::string &modelName, const std::string &number, unsigned speed,
                unsigned short fuelConsumption, unsigned short year,
                unsigned char numberOfPassengers, double batteryCapacity);

    [[nodiscard]] std::string toString() const override;
};

#endif // ELECTRICCAR_H
