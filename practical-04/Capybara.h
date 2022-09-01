#ifndef CAPYBARA_H
#define CAPYBARA_H

#include <string>
using std::string;

class Capybara
{
protected:
    string name;
    int age;

public:
    Capybara();

    void setName(string capyName);
    string getName();
    
    void setAge(int capyAge);
    int getAge();
};

#endif