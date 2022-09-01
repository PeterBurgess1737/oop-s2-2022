#ifndef AIRPLANE_H
#define AIRPLANE_H

#include <string>
using std::string;

#include "Person.h"

class Airplane
{
protected:
    string callsign;
    Person pilot;
    Person coPilot;

public:
    // a pilot and copilot must be provided when creating an airplane
    Airplane(string theCallsign, Person thePilot, Person theCoPilot);

    // change the pilot
    void setPilot(Person thePilot);
    Person getPilot();

    // change the co-pilot
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();

    // print the callsign, a new line, the pilot name, a new line, the co-pilot name and a final newline.
    void printDetails();
};

#endif