#include "hunter.h"

#include <string>
using std::string;

// The animalID of the first hunter is 1000
int hunter::nextID = 1000;

hunter::hunter(string n, int v): animal(n, v)
{
    animalID = nextID;
    nextID++;
}

int hunter::get_kills()
{
    return kills;
}
string hunter::get_name()
{
    return "Hunter: " + name;
}

void hunter::set_kills(int k)
{
    kills = k;
}