/*
1-2.
Define and implement a class named Person that has the following constructors and behaviours:

    Person(int mySalary, string myName); // a name and salary must be provided to create a Person
    void setName(string myName);         // change the Person's name
    string getName();
    void setSalary(int mySalary);        // change the Person's salary
    int getSalary();

Your main program should create four Person objects and change and display their details.
Your main program should demonstrate that the name and salary information has been changed.
This class will also be used in problem 2-2.
*/

// Libraries
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

#include <stdlib.h>

#include "Person.h"

// Variables
vector<Person> stuff;

// MAIN!
int main(void)
{
    // Populating the vector
    Person person1(10000, "Person 1");
    Person person2(20000, "Person 2");
    Person person3(30000, "Person 3");
    Person person4(40000, "Person 4");

    stuff.push_back(person1);
    stuff.push_back(person2);
    stuff.push_back(person3);
    stuff.push_back(person4);

    // Displaying the information
    for (Person &a : stuff)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }

    // Changing stuff
    cout << "==========" << " Changing information " << "==========" << endl;

    // Changing the names
    stuff[0].setName("Peter");
    stuff[1].setName("Jack");
    stuff[2].setName("Seven");
    stuff[3].setName("Ariel");

    // Changing the ages to random numbers
    for (Person &a : stuff)
    {
        a.setSalary(a.getSalary() + rand() % 10000 - 5000 + 1);
    }

    // Displaying the information
    for (Person &a : stuff)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }

    return 0;
}