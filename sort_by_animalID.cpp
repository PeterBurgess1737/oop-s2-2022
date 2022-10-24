#include "sort_by_animalID.h"

#include <utility>
using std::swap;

#include "animal.h"

void sort_by_animalID::sort(animal **animals, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != n - 1)
            {
                // If the next id is smaller than the current id then swap
                if (animals[j]->get_animalID() > animals[j + 1]->get_animalID())
                {
                    swap(animals[j], animals[j + 1]);
                }
            }
        }
    }
}