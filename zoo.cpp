#include "zoo.h"

#include <string>
using std::string;

#include "hunter.h"
#include "vegie.h"

zoo::zoo(string n, int cows, int lions)
{
    name = n;

    // Total number of animals
    number_of_animals = cows + lions;

    // Allocating memory
    animals = new animal *[number_of_animals];

    // Creating cows
    for (int i = 0; i < cows; i++)
    {
        animals[i] = new vegie("Daisy", 100);
    }

    // Creating lions
    for (int i = cows; i < number_of_animals; i++)
    {
        animals[i] = new hunter("Clarence", 50);
    }
}

string zoo::get_name()
{
    return name;
}
int zoo::get_number_of_animals()
{
    return number_of_animals;
}
animal **zoo::get_animals()
{
    return animals;
}