#include "Car.h"
#include <iostream>

Car::Car(std::string manufacturer, int yearBuilt, int numDoors)
    : Vehicle(manufacturer, yearBuilt), numDoors(numDoors) {}

Car::~Car() {}

// Getter and Setter for numDoors
int Car::getNumDoors() {
    return numDoors;
}

void Car::setNumDoors(int numDoors) {
    this->numDoors = numDoors;
}

// Display Info
void Car::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Number of Doors: " << numDoors << std::endl;
}