#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle {
private:
    //
    double towingCapacity;

public:
    Truck(std::string manufacturer, int yearBuilt, double towingCapacity);
    ~Truck();

    //Getter and setter for towing capacity
    double getTowingCapacity();
    void setTowingCapacity(double towingCapacity);

    //Display info
    void displayInfo() override;
};

#endif