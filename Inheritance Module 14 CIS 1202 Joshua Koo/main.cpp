// Joshua Koo
// This program uses classes and inheritance to receive and output information about vehicles
// CIS 1202
// 11/24/2023
#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

using namespace std;

int main() {
	//Vehicle
	string manufacturer;
	int yearBuilt;

	cout << "Enter Vehicle Information:" << std::endl;
	cout << "Manufacturer: ";
	getline(cin, manufacturer);
	cout << "Year Built: ";
	cin >> yearBuilt;

	Vehicle vehicle(manufacturer, yearBuilt);
	vehicle.displayInfo();

	//Car
	int numDoors;

	cout << "\nEnter Car Information:" << std::endl;
	cout << "Manufacturer: ";
	getline(cin, manufacturer);
	cout << "Year Built: ";
	cin >> yearBuilt;
	cout << "Number of Doors: ";
	cin >> numDoors;

	Car car(manufacturer, yearBuilt, numDoors);
	car.displayInfo();

	// Truck
	double towingCapacity;

	cout << "\nEnter Truck Information:" << std::endl;
	cout << "Manufacturer: ";
	getline(cin, manufacturer);
	cout << "Year Built: ";
	cin >> yearBuilt;
	cout << "Towing Capacity (in tons): ";
	cin >> towingCapacity;

	Truck truck(manufacturer, yearBuilt, towingCapacity);
	truck.displayInfo();

	return 0;
}
