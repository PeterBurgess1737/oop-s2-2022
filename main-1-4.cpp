
/*
If we want to allocate an array, we could write something like:

    line 4: int *arr = new int[3];

Write a function that includes the line 4 above and returns the size of the memory location occupied by variable arr.
What do you notice?

The function signature is:
    int size_of_variable_star_arr();
*/

// Libraries
#include <iostream>

// Variables
int *arr = new int[3];

// Functions
int size_of_variable_star_arr()
{
    return sizeof(arr);
}

// MAIN
int main(void)
{
    std::cout << "Size of variable star arr is " << size_of_variable_star_arr() << std::endl;

    return 0;
}