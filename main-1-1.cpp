/*
Design a class called Musician.
Musicians need to store state about the instrument they play and their years of experience.

Musicians must provide the following public behaviours (methods):

    // a default constructor
    Musician();

    // a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);      

    // returns the instrument played
    std::string get_instrument();

    // returns the number of years experience
    int get_experience();

You may add any other methods and any state variables you want, but the methods listed above must be available and public.
The default constructor should set the instrument variable to "null" and years of experience to 0.

Write a Musician.h and Musician.cpp files to declare and implement the Musician class.

Write a main-1-1.cpp file that tests all of your methods (behaviours) function correctly.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Musician.h"

// MAIN!
int main(void)
{
    cout << "\nMusician with default constructor" << endl;
    Musician slave_1 = Musician();
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas instrument '" << slave_1.get_instrument() << "'" << endl;
    cout << "\t\tHas experience '" << slave_1.get_experience() << "'" << endl;
    cout << "\tRunning adjustments" << endl;
    cout << "\t\tAdding 10 experience" << endl;
    slave_1.increase_experience_by(10);
    cout << "\t\tChanging instrument to 'Flute'" << endl;
    slave_1.change_instrument("Flute");
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas instrument '" << slave_1.get_instrument() << "'" << endl;
    cout << "\t\tHas experience '" << slave_1.get_experience() << "'" << endl;

    cout << "\nMusician construction parameters: instrument = 'Violin' and experience = 25" << endl;
    Musician slave_2 = Musician("Violin", 25);
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas instrument '" << slave_2.get_instrument() << "'" << endl;
    cout << "\t\tHas experience '" << slave_2.get_experience() << "'" << endl;
    cout << "\tRunning adjustments" << endl;
    cout << "\t\tAdding 17 experience" << endl;
    slave_2.increase_experience_by(17);
    cout << "\t\tChanging instrument to 'Piano'" << endl;
    slave_2.change_instrument("Piano");
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas instrument '" << slave_2.get_instrument() << "'" << endl;
    cout << "\t\tHas experience '" << slave_2.get_experience() << "'" << endl;

    return 0;
}