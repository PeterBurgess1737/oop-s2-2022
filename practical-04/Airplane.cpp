#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "Person.h"
#include "Airplane.h"

// a pilot and copilot must be provided when creating an airplane
Airplane::Airplane(string theCallsign, Person thePilot, Person theCoPilot) : callsign(theCallsign), pilot(thePilot), coPilot(theCoPilot) {}

// change the pilot
void Airplane::setPilot(Person thePilot)
{
    pilot = thePilot;
}
Person Airplane::getPilot()
{
    return pilot;
}

// change the co-pilot
void Airplane::setCoPilot(Person theCoPilot)
{
    coPilot = theCoPilot;
}
Person Airplane::getCoPilot()
{
    return coPilot;
}

// print the callsign, a new line, the pilot name, a new line, the co-pilot name and a final newline.
void Airplane::printDetails()
{
    cout << callsign << endl;
    cout << pilot.getName() << endl;
    cout << coPilot.getName() << endl;
}