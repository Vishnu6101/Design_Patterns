#ifndef vehicle_hpp
#define vehicle_hpp

class Vehicle{
    public:
        virtual void createVehicle() = 0; // pure virtual function
        // child class must implement this function
};

#endif