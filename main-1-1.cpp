/*
1-1.
Define and implement a class named Capybara that has the following constructors and behaviours:

    Capybara() ;                     // no name or age is required to create a Capybara
    void setName(string capyName);   // change the capybara's name
    string getName();
    void setAge(int capyAge);        // change the capybara's age
    int getAge();

Your main program should create four Capybara objects and set and display their details
Note that this means the main program should use the object behaviours to get and output the object state.
The object behaviours should return the appropriate values and should NOT use cout.
Your main program should demonstrate that the name and age information is changed.
This class will also be used in problem 2-1.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#include <stdlib.h>

#include "Capybara.h"

// Variables
vector<Capybara> stuff(4);

// MAIN!
int main(void)
{
    // Displaying the information
    for (Capybara &a : stuff)
    {
        cout << "'" << a.getName() << "' is " << a.getAge() << " years old" << endl;
    }

    // Changing stuff
    cout << "==========" << " Changing information " << "==========" << endl;

    // Changing names
    stuff[0].setName("David");
    stuff[1].setName("Ross");
    stuff[2].setName("Elon");
    stuff[3].setName("Wide Vlad");

    // Changing ages to random numbers
    for (Capybara &a : stuff)
    {
        a.setAge(rand() % 50 + 1);
    }
    
    // Displaying the information
    for (Capybara &a : stuff)
    {
        cout << "'" << a.getName() << "' is " << a.getAge() << " years old" << endl;
    }

    return 0;
}