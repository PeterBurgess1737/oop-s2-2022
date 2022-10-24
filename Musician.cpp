#include <string>

#include "Musician.h"

// a default constructor
Musician::Musician()
{
    instrument = "null";
    experience = 0;
}

// a constructor that takes the instrument played and the years of experience
Musician::Musician(std::string instrument, int experience)
{
    this->instrument = instrument;
    this->experience = experience;
}

// returns the instrument played
std::string Musician::get_instrument()
{
    return instrument;
}

// returns the number of years experience
int Musician::get_experience()
{
    return experience;
}

// My functions
void Musician::increase_experience_by(int experience_increase)
{
    experience += experience_increase;
}
void Musician::change_instrument(std::string new_instrument)
{
    instrument = new_instrument;
}