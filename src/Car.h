#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

class Car : virtual public Vehicle
{
public:
    Car(std::string modelName, std::string number, unsigned speed, unsigned short fuelConsumption,
        unsigned short year, unsigned char numberOfPassengers);

    [[nodiscard]] std::string toString() const override;

protected:
    unsigned char numberOfPassengers_;
};

#endif // CAR_H
