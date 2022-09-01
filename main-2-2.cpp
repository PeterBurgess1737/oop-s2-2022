/*
2-2.
Define and implement a class named Airplane.
An Airplane object represents an airplane with a pilot and a co-pilot.
The pilot and co-pilot must be represented by Person objects.
The Airplane class has the following constructors and behaviours:

    // a pilot and copilot must be provided when creating an airplane
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);      // change the pilot
    Person getPilot();
    void setCoPilot(Person theCoPilot);  // change the co-pilot
    Person getCoPilot();
    void printDetails();                 // print the callsign, a new line, the pilot name,
                                         // a new line, the co-pilot name and a final newline.

Your main program should create an Airplane object and three Person objects.
Two of the Person objects must be passed to the constructor when the Airplane object is created.
Your main program must then replace the pilot with the third Person object, then replace the co-pilot with the original pilot.
*/

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "Person.h"
#include "Airplane.h"

// Variables
vector<Person> people;

// MAIN!
int main(void)
{
    // Creating and adding people
    Person person1(10000, "Peter");
    Person person2(20000, "Jack");
    Person person3(30000, "Seven");
    people.push_back(person1);
    people.push_back(person2);
    people.push_back(person3);
    
    // Displaying the information of the people
    cout << "\nThe people's information" << endl;
    for (Person &a : people)
    {
        cout << "'" << a.getName() << "' has " << a.getSalary() << " as a salary" << endl;
    }

    // Airplane woooo
    Airplane airplane("HAPPY DAYS", people[0], people[1]);
    cout << "\nAirplane information" << endl;
    airplane.printDetails();

    // Changing the pilot
    cout << "\nChanging the pilot" << endl;
    airplane.setPilot(people[2]);
    cout << "Airplane information" << endl;
    airplane.printDetails();

    // Changing the copilot
    cout << "\nChanging the copilot" << endl;
    airplane.setPilot(people[0]);
    cout << "Airplane information" << endl;
    airplane.printDetails();

    return 0;
}