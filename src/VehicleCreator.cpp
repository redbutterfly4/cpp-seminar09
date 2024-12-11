#include <sstream>

#include "VehicleCreator.h"

Vehicle *VehicleCreator::create(const std::string &input)
{
    std::istringstream iss(input);
    std::string type;
    Vehicle* vehicle;
    std::string modelName;
    std::string number;
    unsigned int speed;
    unsigned short fuelConsumption;
    unsigned short year;

    while(iss >> type) {
        iss >> modelName >> number >> speed >> fuelConsumption >> year;
        if(type == "Car") {
            unsigned char numberOfPassengers;
            iss >> numberOfPassengers;
            vehicle = new Car(modelName, number, speed, fuelConsumption, year, numberOfPassengers);
        }
        if(type == "ElectricCar") {
            unsigned char numberOfPassengers;
            double batteryCapacity;
            iss >> numberOfPassengers >> batteryCapacity;
            vehicle = new ElectricCar(modelName, number, speed, fuelConsumption, year, numberOfPassengers, batteryCapacity);
        }
    }
}