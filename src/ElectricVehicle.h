#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H
#include "Vehicle.h"

class ElectricVehicle : virtual public Vehicle
{
public:
    ElectricVehicle(const std::string &modelName, const std::string &number, unsigned speed,
                    unsigned short fuelConsumption, unsigned short year, double batteryCapacity);

    [[nodiscard]] std::string toString() const override;

protected:
    double batteryCapacity_;
};

#endif // ELECTRICVEHICLE_H
