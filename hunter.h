#ifndef HUNTER_H
#define HUNTER_H

#include "animal.h"

#include <string>
using std::string;

class hunter : public animal
{
private:
    // How many kills have been recorded, initialised to 0
    int kills = 0;
    
    // The unique animalID of the next hunter object to be created
    static int nextID;

public:
    // Create a hunter with name n and body volume v
    hunter(string n, int v);

    int get_kills();
    string get_name();

    void set_kills(int k);
};

#endif // HUNTER_H