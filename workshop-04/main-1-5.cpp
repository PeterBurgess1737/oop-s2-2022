/*
If we want to allocate an array, we could write something like:

    line 4: int *arr = new int[3];

Write a function that includes the line 4 above and returns the size of the memory occupied by the entire array.

The function signature is:
    int size_of_array_arr();
*/

// Libraries
#include <iostream>

// Variables
int *arr = new int[3];

// Functions
extern int size_of_array_arr();

// MAIN
int main(void)
{
    std::cout << "Size of memory in arr is " << size_of_array_arr() << std::endl;

    return 0;
}