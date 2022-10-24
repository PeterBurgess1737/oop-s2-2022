#ifndef ZOO_H
#define ZOO_H

#include <string>
using std::string;

#include "animal.h"

class zoo
{
private:
    // the zoo's name
    string name;

    // the number of animals in the zoo
    int number_of_animals;

    // the zoo's animals
    animal **animals;

public:
    // Create a zoo with the given number of cows and lions
    zoo(string n, int cows, int lions);

    string get_name();
    int get_number_of_animals();
    animal **get_animals();
};

#endif // ZOO_H