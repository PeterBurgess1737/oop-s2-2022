#include "vegie.h"

#include <string>
using std::string;

int vegie::nextID = 100;

vegie::vegie(string n, int v): animal(n, v)
{
    animalID = nextID;
    nextID++;
}

string vegie::get_favourite_food()
{
    return favourite_food;
}
string vegie::get_name()
{
    return "Safe: " + name;
}

void vegie::set_favourite_food(string ff)
{
    favourite_food = ff;
}