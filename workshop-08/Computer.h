#ifndef COMPUTER_H
#define COMPUTER_H

/*
Define and implement a class named Computer that inherits from Player.
By default, Computer will use Rock for every turn.
If it is constructed with another value (Paper or Scissors), it will instead make that move every turn.

The Computer class has the following constructor and behaviours:

    // set what move the computer will make (rock, paper, or scissors)
    // if the input is not r, R, p, P, s, S or a string starting with one of these letters, set the move to the default ‘r’
    Computer(string letter);

    //returns all moves stored in a string
    string getMoves();

    //increments number of moves made
    void move();

To explain, if the computer was constructed with Computer(‘s’), and it made 3 moves, getMoves() should return:

    sss
    
*/

// Libraries
#include <string>
using std::string;

#include "Player.h"

// CLASS!
class Computer : public Player
{
private:
    char move_to_make;

public:
    Computer();
    Computer(string letter);

    void move();
};

#endif