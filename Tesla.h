#ifndef PRAC_EXAM_4_TESLA_H
#define PRAC_EXAM_4_TESLA_H

#include "Car.h"

class Tesla : public Car
{
private:
    // Used to set the vinNumber when a Tesla object is created
    // Initialised to 1000001
    static int nextVinNumber;

    // The model of the car
    char model;

    // Initially 100%
    float batteryPercentage = 100.f;

public:
    // Ze Constructorz
    Tesla();
    Tesla(char model, int price);

    // The chargeBattery() method will add 0.5% to the batteryPercentage
    // attribute for every minute charged, but cannot exceed 100% charged
    void chargeBattery(int mins);

    // Uses 74g of CO2 per kilometre
    // Uses 1% battery for every 5km driven
    // Cannot continue driving when the battery percentage is at 0 therefore
    // Will not emit CO2 if the battery percentage is at 0
    void drive(int kms);

    // Getters and Setters
    void set_model(char new_model);
    char get_model() const;

    void set_batteryPercentage(float new_batteryPercentage);
    float get_batteryPercentage() const;
};

#endif // PRAC_EXAM_4_TESLA_H