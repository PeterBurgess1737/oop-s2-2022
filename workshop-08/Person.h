#ifndef PERSON_H
#define PERSON_H

/*
Define and implement a class named Person that inherits from Player. The Person can choose Rock, Paper, or Scissors based on the user’s input.

The Player class has the following behaviours:

    // Allow user to type in a single character to represent their move.
    // If a move is impossible “Move unavailable” is outputted and the user is asked to input a character again.
    // Otherwise, their input is stored
    void move();

    //returns all moves stored in a string
    string getMoves();

*/

// Libraries
#include <string>
using std::string;

#include "Player.h"

// CLASS!
class Person : public Player
{
public:
    void move();
};

#endif