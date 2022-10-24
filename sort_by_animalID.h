#ifndef SORT_BY_ANIMALID
#define SORT_BY_ANIMALID

#include "animal.h"

class sort_by_animalID
{
public:
    // sorts the array of n animals into ascending order using their animalIDs
    static void sort(animal **animals, int n);
};

#endif // SORT_BY_ANIMALID