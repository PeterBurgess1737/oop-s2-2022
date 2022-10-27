#include "Car.h"

Car::Car(int price)
{
    this->price = price;

    emissions = 0;
}

int Car::get_price()
{
    return price;
}
void Car::set_price(int new_price)
{
    price = new_price;
}

int Car::get_vinNumber()
{
    return vinNumber;
}
void Car::set_vinNumber(int new_vinNumber)
{
    vinNumber = new_vinNumber;
}

int Car::get_emmisions()
{
    return emissions;
}