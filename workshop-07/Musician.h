#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician
{
protected:
    std::string instrument;
    int experience;

public:
    // a default constructor
    Musician();

    // a constructor that takes the instrument played and the years of experience
    Musician(std::string instrument, int experience);

    // returns the instrument played
    std::string get_instrument();

    // returns the number of years experience
    int get_experience();

    // My functions
    void increase_experience_by(int experience_increase);
    void change_instrument(std::string new_instrument);
};

#endif