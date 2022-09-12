#ifndef PLAYER_H
#define PLAYER_H

/*
Define and implement an abstract class named Player that has the following behaviours:

    void move();
    string getMoves();

    // returns the most recent move made
    char getMove();

    // compares players’ moves to see who wins
    bool win(Player * opponent);

Declare the move() and getMoves() functions as pure virtual and set proper access modifiers for the attributes and methods.

The win function should return 1 (true) if one of the players won, and 0 (false) if no one wins.
Hence, the win function is only able to determine whether some player won, or if there is a draw.
*/

// Libraries
#include <string>
using std::string;

// CLASS!
class Player
{
protected:
    string all_moves;

public:
    virtual void move() = 0;
    
    string getMoves();
    char getMove();             // returns the most recent move made
    bool win(Player *opponent); // compares players’ moves to see who wins
};

#endif