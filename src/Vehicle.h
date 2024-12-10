#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>

class Vehicle
{
public:
    virtual ~Vehicle() = default;

    Vehicle(std::string modelName, std::string number, unsigned speed,
            unsigned short fuelConsumption, unsigned short year);

    [[nodiscard]] virtual std::string toString() const;

protected:
    std::string modelName_;
    std::string number_;
    unsigned int speed_;
    unsigned short fuelConsumption_;
    unsigned short year_;

    Vehicle() = default;
};

#endif // VEHICLE_H
