// Header
#include "Person.h"

// Libraries
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

// Other functions
void Person::move()
{
    // Allow user to type in a single character to represent their move.
    // If a move is impossible “Move unavailable” is outputted and the user is asked to input a character again.
    // Otherwise, their input is stored

    string ze_move;
    bool loop = true;

    while (loop)
    {
        // Get the user input
        cout << "Please type your move (r, p, s)" << endl;
        cout << ": ";
        cin >> ze_move;

        if (!ze_move.empty())
        {
            // Validating
            switch (ze_move[0])
            {
            case 'r':
            case 'p':
            case 's':
            case 'R':
            case 'P':
            case 'S':
                all_moves += ze_move;
                loop = false;
                break;
            }
        }

        cout << "Move unavailable" << endl;
    }
}