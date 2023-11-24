#include "Vehicle.h"
#include <iostream>

Vehicle::Vehicle(std::string manufacturer, int yearBuilt)
    : manufacturer(manufacturer), yearBuilt(yearBuilt) {}

Vehicle::~Vehicle() {}

//Getters and setters
std::string Vehicle::getManufacturer() {
    return manufacturer;
}

void Vehicle::setManufacturer(std::string manufacturer) {
    this->manufacturer = manufacturer;
}

int Vehicle::getYearBuilt() {
    return yearBuilt;
}

void Vehicle::setYearBuilt(int yearBuilt) {
    this->yearBuilt = yearBuilt;
}

//Display info
void Vehicle::displayInfo() {
    std::cout << "Manufacturer: " << manufacturer << "\nYear Built: " << yearBuilt << std::endl;
}