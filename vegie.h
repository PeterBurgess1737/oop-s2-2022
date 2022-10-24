#ifndef VEGIE_H
#define VEGIE_H

#include "animal.h"

class vegie: public animal
{
private:
    // The vegie's favourite food, initialise to "grass"
    string favourite_food = "grass";

    // The unique animalID of the next vegie object to be created
    static int nextID;

public:
    // Create a vegie with name n and body volume v
    vegie(string n, int v);

    string get_favourite_food();
    string get_name();

    void set_favourite_food(string ff);
};

#endif // VEGIE_H