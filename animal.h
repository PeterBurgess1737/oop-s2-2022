#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using std::string;

class animal
{
protected:
    // The animal's name
    string name;

    // The animal's unique ID
    int animalID;

    // The volume of the animal's body
    int volume;

public:
    // Creates an animal with name n and body volume v.
    // animals are allocated a unique ID on creation
    animal(string n, int v);

    void set_name(string n);
    void set_volume(int v);

    virtual string get_name() = 0;
    int get_animalID();
    int get_volume();
};

#endif // ANIMAL_H
