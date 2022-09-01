#include <string>
using std::string;

#include "Capybara.h"

Capybara::Capybara()
{
    name = "";
    age = 0;
}

void Capybara::setName(string capyName)
{
    name = capyName;
}
string Capybara::getName()
{
    return name;
}

void Capybara::setAge(int capyAge)
{
    age = capyAge;
}
int Capybara::getAge()
{
    return age;
}
