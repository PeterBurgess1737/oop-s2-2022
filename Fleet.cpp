#include "Fleet.h"

#include "Car.h"

Fleet::Fleet()
{
    fleet = new Car *[5];
}

Fleet * Fleet::createFleet(int authority)
{
    if (authority != 10)
        return nullptr;

    // Create the fleet
    return new Fleet;
}

void Fleet::addCar(Car *car)
{
    // If no space
    if (count >= 5)
        return;

    // If space, add the car
    fleet[count] = car;

    // Added a car
    count++;
}

Car **Fleet::get_fleet()
{
    return fleet;
}

int Fleet::get_count()
{
    return count;
}