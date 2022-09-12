// Header
#include "Computer.h"

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

// Constructors 
Computer::Computer()
{
    move_to_make = 'r';
}
Computer::Computer(string letter)
{
    // Default case
    if (letter.empty())
    {
        move_to_make = 'r';
        return;
    }

    // Checking
    switch (letter[0])
    {
    case 'r':
    case 'p':
    case 's':
    case 'R':
    case 'P':
    case 'S':
        move_to_make = letter[0];
        break;
    default:
        move_to_make = 'r';
        break;
    }
}

// Other functions
void Computer::move()
{
    all_moves += move_to_make;
}