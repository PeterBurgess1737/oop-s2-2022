#include "Tesla.h"

int Tesla::nextVinNumber = 1000001;

Tesla::Tesla() : Car(1)
{
    // Setting vinNumber
    vinNumber = nextVinNumber;
    nextVinNumber++;
}

Tesla::Tesla(char model, int price) : Car(price)
{
    this->model = model;

    // Setting vinNumber
    vinNumber = nextVinNumber;
    nextVinNumber++;
}

void Tesla::chargeBattery(int mins)
{
    batteryPercentage += 0.5 * (float)mins;
    if (batteryPercentage > 100.f)
        batteryPercentage = 100.f;
}

void Tesla::drive(int kms)
{
    // Finding battery usage
    float battery_usage = (float)kms / 5;

    // Clamping it to the battery percentage
    if (battery_usage > batteryPercentage)
        battery_usage = batteryPercentage;

    // Find emisions
    emissions += battery_usage * 74;
}

void Tesla::set_model(char new_model)
{
    model = new_model;
}
char Tesla::get_model() const
{
    return model;
}

void Tesla::set_batteryPercentage(float new_batteryPercentage)
{
    batteryPercentage = new_batteryPercentage;
}
float Tesla::get_batteryPercentage() const
{
    return batteryPercentage;
}