#ifndef PRAC_EXAM_4_FLEET_H
#define PRAC_EXAM_4_FLEET_H

#include "Car.h"

class Fleet
{
private:
    // An array of pointers to the cars
    Car **fleet;

    // The number of cars in the fleet
    int count = 0;
    
    // Creates a  fleet containing pointers to 5 Car objects as an array;
    // These Car objects could be either Teslas or Fords, and in any order
    Fleet();

public:
    // Only managers with authority level 10 can create a Fleet
    // A Fleet object is only returned when the correct authority level (10) is
    // input, otherwise it will return a NULLPTR
    static Fleet* createFleet(int authority);

    // Adds a car to the fleet
    void addCar(Car *car);

    // Returns the array of pointers to the five Car objects
    Car **get_fleet();

    // Returns the amount of cars added to the fleet
    int get_count();
};

#endif // PRAC_EXAM_4_FLEET_H