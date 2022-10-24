#include <string>

#include "Musician.h"
#include "Orchestra.h"

// default constructor
Orchestra::Orchestra()
{
    max_num_musicians = 0;
    num_musicians = 0;
    musicians = nullptr;
}
// constructor for an orchestra of given size
Orchestra::Orchestra(int size)
{
    max_num_musicians = size;
    num_musicians = 0;
    musicians = new Musician[max_num_musicians];
}

// returns the number of musicians who have joined the orchestra
int Orchestra::get_current_number_of_members()
{
    return num_musicians;
}

// returns true if any musician in the orchestra plays the specified instrument
// otherwise returns false
bool Orchestra::has_instrument(std::string instrument)
{
    for (int i = 0; i < num_musicians; i++)
    {
        if (!musicians[i].get_instrument().compare(instrument))
        {
            return true;
        }
    }

    return false;
}

// returns the array of members of the orchestra
Musician *Orchestra::get_members()
{
    return musicians;
}

// returns true and adds new musician to the orchestra if the orchestra is not full
// otherwise returns false
bool Orchestra::add_musician(Musician new_musician)
{
    if (num_musicians != max_num_musicians)
    {
        musicians[num_musicians] = new_musician;
        num_musicians++;
        return true;
    }
    
    return false;
}

Orchestra::~Orchestra()
{
    delete[] musicians;
}