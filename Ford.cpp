#include "Ford.h"

int Ford::nextVinNumber = 2000002;

Ford::Ford() : Car(1)
{
    // Setting vinNumber
    vinNumber = nextVinNumber;
    nextVinNumber++;
}

Ford::Ford(int badgeNumber, int price) : Car(price)
{
    this->badgeNumber = badgeNumber;

    // Setting vinNumber
    vinNumber = nextVinNumber;
    nextVinNumber++;
}

void Ford::refuel(int litres)
{
    litresOfFuel += (float)litres;
    if (litresOfFuel > 60.f)
        litresOfFuel = 60.f;
}

void Ford::drive(int kms)
{
    // Find fuel usage
    float fuel_usage = (float)kms / 5.f;

    // Clamping it to the amount of fuel in the tank
    if (fuel_usage > litresOfFuel)
        fuel_usage = litresOfFuel;

    // Adjust emissions
    emissions += fuel_usage * 5 * 234;

    // Reduce fuel
    litresOfFuel -= fuel_usage;
}

void Ford::set_badgeNumber(int new_badgeNumber)
{
    badgeNumber = new_badgeNumber;
}
int Ford::get_badgeNumber()
{
    return badgeNumber;
}

void Ford::set_litresOfFuel(int new_litresOfFuel)
{
    litresOfFuel = new_litresOfFuel;

    if (litresOfFuel > 60.f)
        litresOfFuel = 60.f;
}
int Ford::get_litresOfFuel()
{
    return litresOfFuel;
}