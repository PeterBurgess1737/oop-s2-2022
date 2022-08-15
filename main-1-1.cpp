/*
As discussed in the lectures, pointers are variables that refer to memory locations.
One way of obtaining a pointer to a variable is by writing something like:

    line 1: int a, *p;

    line 2: p = &a;

Another way of doing this is to write something like:

    line 3: int *t = new int;

This allocates a memory location to which the variable t will point.

Write a function that includes line 1-2 or line 3 of the code above and returns the size of the memory location occupied by variable t.
First, discuss how to write the function in your group then write the function and the matching main function.

The function signature is:
    int size_of_variable_star_t();
*/

// Libraries
#include <iostream>

// Variables
int *t = new int;

// Functions
int size_of_variable_star_t()
{
    return sizeof(t);
}

// MAIN
int main(void)
{
    std::cout << "Size of variable t is " << size_of_variable_star_t() << std::endl;

    return 0;
}