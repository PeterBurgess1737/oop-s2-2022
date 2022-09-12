/*
Write a main function named 'main-3-1.cpp' that uses Computer and Person to play Rock, Paper, Scissors.

The default move for Computer should be ‘r’.
The user should be asked to input a move for the Person.
Both Players' moved are compared against each other and the main should print the winner to the terminal (e.g. "Computer has won").
If there is a draw, it should print "Draw! Go again".

Once a winner has been determined, all previous moves by the Person should be outputted.
Followed by all the Computer’s previous moves outputted on a new line.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "Player.h"
#include "Person.h"
#include "Computer.h"

// Variables
vector<Player *> my_players = vector<Player *>();
bool player_won;

// MAIN!
int main(void)
{
    // Create the computer
    Computer the_computer = Computer();
    // Create the player
    Person the_player = Person();

    // Add the players to the vector
    my_players.push_back(&the_computer);
    my_players.push_back(&the_player);

    // Game loop
    while (true)
    {
        // Perform the moves
        for (Player *player : my_players)
        {
            player->move();
        }

        // If someone won
        if (the_player.win(&the_computer))
        {
            // YEET!
            break;
        }

        // If a draw
        cout << "Draw! Go again" << endl;
    }

    // Someone won so figure it out
    switch (the_player.getMove())
    {
    case 'r':
        player_won = the_computer.getMove() == 's';
        break;
    case 'p':
        player_won = the_computer.getMove() == 'r';
        break;
    case 's':
        player_won = the_computer.getMove() == 'p';
        break;
    }

    // WHY ARE YOU YELLING
    if (player_won)
        cout << "Player has won" << endl;
    else
        cout << "Computer has won" << endl;

    // Display the sequences of moves
    cout << the_player.getMoves() << endl;
    cout << the_computer.getMoves() << endl;

    return 0;
}