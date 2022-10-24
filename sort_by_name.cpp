#include "sort_by_name.h"

#include <utility>
using std::swap;

#include "animal.h"

void sort_by_name::sort(animal **animals, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != n - 1)
            {
                // If the next id is smaller than the current id then swap
                if (animals[j]->get_name() > animals[j + 1]->get_name())
                {
                    swap(animals[j], animals[j + 1]);
                }
            }
        }
    }
}