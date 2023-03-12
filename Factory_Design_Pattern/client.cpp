#include<iostream>
#include "bike.hpp"
#include "car.hpp"
using namespace std;

int main(){
    string vehicleType;
    cin >> vehicleType;
    
    Vehicle *vehicle;

    if(vehicleType == "car"){
        vehicle = new Car();
    }
    else if(vehicleType == "bike"){
        vehicle = new Bike();
    }

    // every time if a new change is required we need to update here (THE CLIENT)
    // like Truck, Tempo, Bus etc...
    // not a good way of doing it
    vehicle->createVehicle();
    return 0;
}