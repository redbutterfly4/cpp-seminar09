#include "gtest/gtest.h"
#include "ElectricCar.h"

class VehicleTests : public testing::Test
{
protected:
    VehicleTests()
    {
        bmw = new Car("bmw", "1234AB7", 200, 15, 2017, 5);
        tesla = new ElectricCar("tesla", "4444BB3", 120, 17, 2020, 5, 300.);
    }

    ~VehicleTests() = default;

    Vehicle *bmw;
    const std::string bmwAsString = "Car { modelName : bmw, number : 1234AB7, fuelConsumption : "
                                    "15, year : 2017, numberOfPassengers : 5 }";

    Vehicle *tesla;
    const std::string teslaAsString =
            "ElectricCar { modelName : tesla, number : 4444BB3, fuelConsumption : 17, year : 2020, "
            "numberOfPassengers : 5, batteryCapacity : 300 }";
};

TEST_F(Veh)
