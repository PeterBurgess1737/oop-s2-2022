#include <iostream>
using std::cout;
using std::endl;

#include <utility>
using std::swap;

#include "animal.h"
#include "zoo.h"
#include "sort_by_animalID.h"
#include "sort_by_name.h"

void display_animals_in_zoo(zoo &some_zoo, string prepend)
{
    for (int i = 0; i < some_zoo.get_number_of_animals(); i++)
    {
        animal **animals = some_zoo.get_animals();
        cout << prepend
             << animals[i]->get_name()
             << " - "
             << animals[i]->get_animalID()
             << endl;
    }
}

animal **animals;

int main(void)
{
    cout << "\n========== Program Start ==========\n" << endl;

    cout << "Creating a zoo named ZOOP with 10 cows and 3 lions" << endl;
    zoo my_zoo("ZOOP", 10, 2);
    cout << endl;

    cout << "Printing zoo information: " << endl;
    cout << "\t" << "Zoo is called " << my_zoo.get_name() << endl;
    cout << "\tHas " << my_zoo.get_number_of_animals() << " animals" << endl;
    cout << "\tPointer to first animal is " << my_zoo.get_animals() << endl;
    cout << endl;

    cout << "Displaying all animals in the zoo:" << endl;
    display_animals_in_zoo(my_zoo, "\t");
    cout << endl;

    cout << "Randomising the animals" << endl;
    animals = my_zoo.get_animals();
    for (int i = 0; i < my_zoo.get_number_of_animals(); i++)
    {
        int j = rand() % (i + 1);
        
        swap(animals[i], animals[j]);
    }
    cout << endl;

    cout << "Displaying all animals in the zoo:" << endl;
    display_animals_in_zoo(my_zoo, "\t");
    cout << endl;

    cout << "Sorting animals by animalID" << endl;
    sort_by_animalID::sort(my_zoo.get_animals(), my_zoo.get_number_of_animals());
    cout << endl;

    cout << "Displaying all animals in the zoo:" << endl;
    display_animals_in_zoo(my_zoo, "\t");
    cout << endl;

    cout << "Randomising the animals" << endl;
    animals = my_zoo.get_animals();
    for (int i = 0; i < my_zoo.get_number_of_animals(); i++)
    {
        int j = rand() % (i + 1);
        
        swap(animals[i], animals[j]);
    }
    cout << endl;

    cout << "Displaying all animals in the zoo:" << endl;
    display_animals_in_zoo(my_zoo, "\t");
    cout << endl;

    cout << "Sorting animals by name" << endl;
    sort_by_name::sort(my_zoo.get_animals(), my_zoo.get_number_of_animals());
    cout << endl;

    cout << "Displaying all animals in the zoo:" << endl;
    display_animals_in_zoo(my_zoo, "\t");
    cout << endl;

    cout << "\n=========== Program End ===========\n" << endl;

    return 0;
}