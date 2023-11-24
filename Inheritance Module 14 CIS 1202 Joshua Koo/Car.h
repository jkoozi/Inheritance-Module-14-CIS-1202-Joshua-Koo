#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    //number of doors
    int numDoors;

public:
    Car(std::string manufacturer, int yearBuilt, int numDoors);
    ~Car();

    // Getter and Setter for numDoors
    int getNumDoors();
    void setNumDoors(int numDoors);

    // Display Info
    void displayInfo() override;
};

#endif