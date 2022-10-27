#include "Car.h"

Car::Car(int price)
{
    this->price = price;

    emissions = 0;
}

int Car::get_price() const
{
    return price;
}
void Car::set_price(int new_price)
{
    price = new_price;
}

int Car::get_vinNumber() const
{
    return vinNumber;
}
void Car::set_vinNumber(int new_vinNumber)
{
    vinNumber = new_vinNumber;
}

int Car::get_emisions() const
{
    return emissions;
}
void Car::set_emisions(int new_emisions)
{
    emissions = new_emisions;
}