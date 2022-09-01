#include <iostream>
using std::cout;
using std::endl;

#include "Wagon.h"

// create an empty wagon object
Wagon::Wagon() {
    users.clear();
}

// adds a Capybara to the wagon, returns false if full, max number is 4
bool Wagon::addCapybara(Capybara newCapy)
{
    if (users.size() == 4)
    {
        return false;
    }

    users.push_back(newCapy);
    return true;
}

// remove all Capybaras from the wagon
void Wagon::emptyWagon()
{
    users.clear();
}

// print the name, a space, the age, then a new line
// for each capybara in the order they were added
void Wagon::printCapybaras()
{
    for (Capybara& a : users)
    {
        cout << a.getName() << " " << a.getAge() << endl;
    }
}