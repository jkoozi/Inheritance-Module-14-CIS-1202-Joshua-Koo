#include "Truck.h"
#include <iostream>

Truck::Truck(std::string manufacturer, int yearBuilt, double towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

Truck::~Truck() {}

//Getter and setter for towing capacity
double Truck::getTowingCapacity() {
    return towingCapacity;
}

void Truck::setTowingCapacity(double towingCapacity) {
    this->towingCapacity = towingCapacity;
}

//Display Info
void Truck::displayInfo() {
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity << " tons" << std::endl;
}