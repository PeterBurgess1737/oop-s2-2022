// Header
#include "Player.h"

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

// FUNCTIONS YAY
char Player::getMove() // returns the most recent move made
{
    return all_moves.back();
}

bool Player::win(Player *opponent) // compares players’ moves to see who wins
{
    // In this case it returns true if someone one, and false if draw
    return !(getMove() == opponent->getMove());
}

string Player::getMoves()
{
    return all_moves;
}
