#ifndef PRAC_EXAM_4_FORD_H
#define PRAC_EXAM_4_FORD_H

#include "Car.h"

class Ford : public Car
{
private:
    // Used to set the vinNumber when a Ford object is created
    // Initialised to 2000002
    static int nextVinNumber;

    // IDK
    int badgeNumber;

    // Initially 60L
    float litresOfFuel = 60.f;

public:
    // Ze Constructorz
    Ford();
    Ford(int badgeNumber, int price);

    // Adds fuel to litresOfFuel, this number cannot exceed 60 litres, even if
    // you try and refuel more
    void refuel(int litres);

    // Uses 234g of CO2 per kilometre
    // Uses 1L of fuel for every 5km driven
    // Cannot continue driving when the litresOfFuel is at 0, therefore will
    // not emit CO2 if litresOfFuel it is at 0
    void drive(int kms);

    // Getters and Setters
    void set_badgeNumber(int new_badgeNumber);
    int get_badgeNumber();

    void set_litresOfFuel(int new_litresOfFuel);
    int get_litresOfFuel();
};

#endif // PRAC_EXAM_4_FORD_H