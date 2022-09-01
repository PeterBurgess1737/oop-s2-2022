#include <string>
using std::string;

#include "Person.h"


Person::Person(int mySalary, string myName)
{
    salary = mySalary;
    name = myName;
}

void Person::setName(string myName)
{
    name = myName;
}
string Person::getName()
{
    return name;
}

void Person::setSalary(int mySalary)
{
    salary = mySalary;
}
int Person::getSalary()
{
    return salary;
}