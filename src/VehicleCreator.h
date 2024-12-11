#ifndef VEHICLECREATOR_H
#define VEHICLECREATOR_H
#include <string>

#include "ElectricCar.h"
#include "Truck.h"
#include "Motorcycle.h"

// Factory Method

class VehicleCreator
{
public:
    Vehicle *create(const std::string &);
};



#endif // VEHICLECREATOR_H
