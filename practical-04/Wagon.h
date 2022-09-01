#ifndef WAGON_H
#define WAGON_H

#include <vector>
using std::vector;

#include "Capybara.h"

class Wagon
{
protected:
    vector<Capybara> users;

public:
    // create an empty wagon object
    Wagon();                            

    // adds a Capybara to the wagon, returns false if full
    bool addCapybara(Capybara newCapy); 

    // remove all Capybaras from the wagon
    void emptyWagon();

    // print the name, a space, the age, then a new line
    // for each capybara in the order they were added
    void printCapybaras();
};

#endif