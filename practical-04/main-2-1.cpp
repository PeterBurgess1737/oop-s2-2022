/*
2-1.
Define and implement a class named Wagon
A Wagon object represents a horse-drawn wagon that can seat up to four Capybaras, after that, Capybaras have to walk.
The Capybaras must be represented by Capybara objects.
The Wagon class has the following constructors and behaviours:

    Wagon();                                // create an empty wagon object
    bool addCapybara(Capybara newCapy);     // adds a Capybara to the wagon, returns false if full
    void emptyWagon();                      // remove all Capybaras from the wagon
    void printCapybaras();                  // print the name, a space, the age, then a new line
                                            // for each capybara in the order they were added

Your main program should create a wagon object and 5 Capybara objects.
The Wagon object is initially empty.
Your main program must then add all 5 Capybara objects to the Wagon object.
An appropriate error message must be printed by your main program when the Wagon is full.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#include "Capybara.h"
#include "Wagon.h"

// Variables
vector<Capybara> capybaras(5);
bool success;

// MAIN!
int main(void)
{
    Wagon wagon;

    // Giving the capybaras names and ages
    capybaras[0].setName("David");
    capybaras[1].setName("Ross");
    capybaras[2].setName("Elon");
    capybaras[3].setName("Wide Vlad");
    capybaras[4].setName("Bill");

    for (Capybara &a : capybaras)
    {
        a.setAge(rand() % 50 + 1);
    }
    
    // Displaying the capybara information
    cout << "\n" << "Capybara information" << endl;
    for (Capybara &a : capybaras)
    {
        cout << "'" << a.getName() << "' is " << a.getAge() << " years old" << endl;
    }

    // Adding the capybaras
    cout << "\n" << "Adding the capybaras" << endl;
    for (Capybara &a : capybaras)
    {
        cout << "Adding capybara: ";
        success = wagon.addCapybara(a);
        if (success)
        {
            cout << "Success";
        }
        else
        {
            cout << "Wagon full";
        }
        cout << endl;
    }

    // Displaying wagon information
    cout << "\nWagon users" << endl;
    wagon.printCapybaras();

    return 0;
}