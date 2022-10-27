#ifndef PRAC_EXAM_4_CAR_H
#define PRAC_EXAM_4_CAR_H

class Car
{
protected:
    // Price of the car
    int price;

    // 
    int vinNumber;

    // CO2 emissions
    // The emissions attribute will always start at 0
    int emissions;

public:
    // Ze Constructor
    Car(int price);

    // In the derived classes, it will drive the car a certain amount of
    // kilometres and will update the emissions attribute.
    virtual void drive(int kms) = 0;

    // Getters and Setters
    int get_price();
    void set_price(int new_price);

    int get_vinNumber();
    void set_vinNumber(int new_vinNumber);

    int get_emmisions();
};

#endif // PRAC_EXAM_4_CAR_H