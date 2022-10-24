/*
Design a class called Orchestra.
An Orchestra has a maximum size and a list of Musicians that currently play in the orchestra.
Musician objects can join the Orchestra as long as the orchestra is not full.

Your Orchestra class must provide the following public methods:

    // default constructor
    Orchestra();
    // constructor for an orchestra of given size
    Orchestra(int size);

    // returns the number of musicians who have joined the orchestra
    int get_current_number_of_members();

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool has_instrument(std::string instrument);

    // returns the array of members of the orchestra
    Musician *get_members();

    // returns true and adds new musician to the orchestra if the orchestra is not full
    // otherwise returns false
    bool add_musician(Musician new_musician);

    ~Orchestra();

You may add any other methods and any state variables you want, but the methods listed above must be available and public.
The default Orchestra size is 0.

Write an Orchestra.h and Orchestra.cpp files to declare and implement the Orchestra class.

Write a main-1-2.cpp file that tests all of your methods (behaviours) function correctly.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;

#include "Musician.h"
#include "Orchestra.h"

// Variables
bool success;

// MAIN!
int main(void)
{
    cout << "\tOrchestra with default constructor" << endl;
    Orchestra slave_empire_1 = Orchestra();
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas number of members: " << slave_empire_1.get_current_number_of_members() << endl;
    cout << "\t\tPointer to array: " << slave_empire_1.get_members() << endl;
    cout << "\tAdding musician" << endl;
    Musician slave_0 = Musician();
    success = slave_empire_1.add_musician(slave_0);
    cout << "\t\tAdding musician ";
    if (success)
        cout << "succeeded";
    else
        cout << "failed";
    cout << endl;
    cout << "\tChecking for instrument 'Flute'" << endl;
    success = slave_empire_1.has_instrument("Flute");
    cout << "\t\t";
    if (success)
        cout << "'Flute' found";
    else
        cout << "'Flute' not found";
    cout << endl;

    cout << "\nOrchestra construction parameters: size = 3" << endl;
    Orchestra slave_empire_2 = Orchestra(3);
    cout << "\tRunning getters" << endl;
    cout << "\t\tHas number of members: " << slave_empire_2.get_current_number_of_members() << endl;
    cout << "\t\tPointer to array: " << slave_empire_2.get_members() << endl;
    cout << "\tAdding musicians" << endl;
    Musician slave_1 = Musician("Flute", 10);
    Musician slave_2 = Musician("Piano", 8);
    Musician slave_3 = Musician("Violin", 17);
    Musician slave_4 = Musician("Cello", 37);
    vector<Musician> slaves;
    slaves.push_back(slave_1);
    slaves.push_back(slave_2);
    slaves.push_back(slave_3);
    slaves.push_back(slave_4);
    for (Musician slave : slaves)
    {
        success = slave_empire_2.add_musician(slave);
        cout << "\t\tAdding musician ";
        if (success)
            cout << "succeeded";
        else
            cout << "failed";
        cout << endl;
    }
    cout << "\tChecking for instrument 'Flute'" << endl;
    success = slave_empire_2.has_instrument("Flute");
    cout << "\t\t";
    if (success)
        cout << "'Flute' found";
    else
        cout << "'Flute' not found";
    cout << endl;
    cout << "\tChecking for instrument 'Harp'" << endl;
    success = slave_empire_2.has_instrument("Harp");
    cout << "\t\t";
    if (success)
        cout << "'Harp' found";
    else
        cout << "'Harp' not found";
    cout << endl;

    return 0;
}