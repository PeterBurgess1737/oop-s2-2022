#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person
{
protected:
    int salary;
    string name;

public:
    // a name and salary must be provided to create a Person
    Person(int mySalary, string myName);
    
    // change the Person's name
    void setName(string myName);
    string getName();

    // change the Person's salary
    void setSalary(int mySalary); 
    int getSalary();
};

#endif