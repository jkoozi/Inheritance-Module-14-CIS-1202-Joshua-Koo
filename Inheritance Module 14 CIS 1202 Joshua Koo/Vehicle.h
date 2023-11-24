#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
private:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(std::string manufacturer, int yearBuilt);
    ~Vehicle();

    //Getters and setters
    std::string getManufacturer();
    void setManufacturer(std::string manufacturer);
    int getYearBuilt();
    void setYearBuilt(int yearBuilt);

    //Display info
    virtual void displayInfo();
};

#endif