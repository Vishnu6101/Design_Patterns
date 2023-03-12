#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include<iostream>
#include "car.hpp"
#include "bike.hpp"
#include "truck.hpp"
using namespace std;

// If any changes required it can be done in this factory 
//rather than doing it in the client part

class VehicleFactory{
    public:
        static Vehicle* getVehicle(string vehicleType);
};

#endif